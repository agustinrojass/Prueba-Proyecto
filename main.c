#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <time.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//UTN WALLET: VERSION ALPHA
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ARREGLAR: SI BORRAS EN LOS ASTERISCOS, NO FUNCIONA LA CONTRSENA
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//AGREGAR "TOKEN" PARA LA COMPRA/VENTA
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//SE PUEDE AGREGAR CONFIRMACIONES, DETALLES, ERRORES, ETC EN PAGOS/COMPRAS/DEPOSITOS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//AGREGAR ARCHIVO DE TRANSACCIONES
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//AGREGAR FONDO UTN WALLET AL REGISTRO DE USUARIOS Y ADMINS, Y HACER LA PANTALLA DE LA CLAVE PARA ADMINS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct  //STRUCT FECHA
{
    int dia;
    int mes;
    int ano;
} stFecha;
typedef struct  //STRUCT USUARIO
{
    char nombre[20];
    int dni;
    int edad;
    stFecha nacimiento;
    char usuario[20];
    char contrasena[20];
    float saldo;
} stUsuario;
typedef struct  //STRUCT ADMIN
{
    int tipo;
    char nombre[20];
    char usuario[20];
    char contrasena[20];
    float saldo;
} stAdmin;
typedef struct  //STRUCT TOKEN
{
    char origen[20];
    char setino[20];
    char detalle[50];
    int monto;
    stFecha fecha;
} stToken;
//INICIO
void inicio();                                      //MENU INICIO
void pantallaInicio();                                  //PANTALLA INICIO
//ALUMNOS
void alumnos();                                             //BOTON 1: MENU ALUMNOS
void pantallaAlumnos();                                         //PANTALLA ALUMNOS
int iniciarSesionAlumno();                                          //BOTON 3: INICIAR SESION
void iniciarSesionAlumnoPantalla1(int ronda);                           //PANTALLA QUE PIDE USUARIO
void iniciarSesionAlumnoPantalla2(int ronda,stUsuario sesion);          //PANTALLA QUE PIDE CONTRASENA
void iniciarSesionAlumnoPantalla3(stUsuario sesion);                    //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
void iniciandoPantalla();                                               //PANTALLA INICIANDO SESION
int crearCuentaAlumno();                                            //BOTON 4: CREAR CUENTA
void crearCuentaAlumnoPantalla1();                                      //PANTALLA QUE PIDE NOMBRE
void crearCuentaAlumnoPantalla2(int ronda,stUsuario datos);             //PANTALLA QUE PIDE DOCUMENTO
void crearCuentaAlumnoPantalla3(int ronda,int parte,stUsuario datos);   //PANTALLA QUE PIDE FECHA DE NACIMIENTO
void crearCuentaAlumnoPantalla4(int ronda,stUsuario datos);             //PANTALLA QUE PIDE USUARIO
void crearCuentaAlumnoPantalla5(int ronda,stUsuario datos);             //PANTALLA QUE PIDE CONTRASENA
void crearCuentaAlumnoPantalla6(int ronda,stUsuario datos);             //PANTALLA QUE PIDE REPETIR CONTRASENA
void crearCuentaAlumnoPantalla7(int boton,stUsuario datos);             //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
//VETANAS ALUMNOS
int ventanasAlumnos(stUsuario sesion,int boton);                //VENTANAS ALUMNOS
int estadoDeCuentaAlumno(stUsuario sesion,float pesos);             //BOTON 1
void estadoDeCuentaAlumnoPantalla(stUsuario sesion);                    //PANTALLA ESTADO DE LA CUENTA DEL ALUMNO
int datosPersonales(stUsuario sesion);                              //BOTON 2
void datosPersonalesPantalla(stUsuario sesion);                         //PANTALLA DATOS PERSONALES
int deposito(stUsuario aux,float *pesos);                           //BOTON 3
int pago(stUsuario sesion);                                         //BOTON 4
int editarDatos(stUsuario sesion);                                  //BOTON 5
int buffet(stUsuario sesion,float *pesos);                          //BOTON 7
int cuota(stUsuario sesion,float *pesos);                           //BOTON 8
int fotocopiadora(stUsuario sesion,float *pesos);                   //BOTON 9
//ADMINSITRADORES
int administradores();                                      //BOTON 2: MENU ADMINISTRADORES
void pantallaAdministradores();                                 //PANTALLA ADMINISTRADORES
int iniciarSesionAdmin();                                           //BOTON 3: INICIAR SESION
void iniciarSesionAdminPantalla1(int ronda);                            //PANTALLA QUE PIDE USUARIO
void iniciarSesionAdminPantalla2(int ronda,stAdmin sesion);             //PANTALLA QUE PIDE CONTRASENA
void iniciarSesionAdminPantalla3(stAdmin sesion);                       //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
void iniciandoAdminPantalla();                                          //PANTALLA INICIANDO SESION
int crearCuentaAdmin(int tipo);                                     //BOTON 4: CREAR CUENTA
void crearCuentaAdminPantalla1(stAdmin sesion);                         //PANTALLA QUE PIDE NOMBRE
void crearCuentaAdminPantalla2(int ronda,stAdmin datos);                //PANTALLA QUE PIDE USUARIO
void crearCuentaAdminPantalla3(int ronda,stAdmin datos);                //PANTALLA QUE PIDE CONTRASENA
void crearCuentaAdminPantalla4(int ronda,stAdmin datos);                //PANTALLA QUE PIDE REPETIR CONTRASENA
void crearCuentaAdminPantalla5(int boton,stAdmin datos);                //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
//VENTANAS ADMINS
int ventanasAdmin(stAdmin sesion,int boton);                    //VENTANAS ADMINS
int estadoDeCuentaAdmin(stAdmin sesion,int pesos);                  //BOTON 1
void estadoDeCuentaAdminPantalla(stAdmin sesion);                       //PANTALLA ESTADO DE LA CUENTA DEL ADMIN
//COLORES
int color(int num);
//FECHA
stFecha fechaActual();
int main()
{
    //fechaActual();
    inicio();
    color(15);
    return 0;
}
//INICIO
void inicio()
{
    int navegacion;
    do
    {
        do
        {
            pantallaInicio();
            scanf("%i",&navegacion);
            system("cls");
        }
        while(navegacion!=1 && navegacion!=2 && navegacion!=0);
        switch(navegacion)
        {
            case 1:
            {
                alumnos();
                system("cls");
            }
            break;
            case 2:
            {
                administradores();
                system("cls");
            }
            break;
        }
    }
    while(navegacion!=0);
}
void pantallaInicio()
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                               ");
        color(63);
        printf(" ALUMNO (1) ");
        color(159);
        printf(" ");
        color(79);
        printf(" SALIR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                          ");
        color(63);
        printf("            ");
        color(159);
        printf(" ");
        color(79);
        printf("           ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 4
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 5
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 7
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 8
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 10
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 11
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 12
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 13
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 14
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf("  ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 15
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 16
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(149);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 17
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("     ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf(" ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 18
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(159);
        printf("    ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 19
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 20
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf(" ");
        color(63);
        printf(" ADMINISTRADOR (2) ");
        color(144);
        printf("     AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(" \n");
    }
}
//ALUMNOS
void alumnos()                                              //BOTON 1: MENU ALUMNOS
{
    int boton;
    do
    {
        do
        {
            pantallaAlumnos();
            scanf("%i",&boton);
            system("cls");
        }
        while(boton!=3 && boton!=4 && boton!=0);
        switch(boton)
        {
            case 3:
            {
                boton=iniciarSesionAlumno();
                system("cls");

                printf("\n\nboton: %i",boton);
            }
            break;
            case 4:
            {
                boton=crearCuentaAlumno();
                system("cls");
            }
            break;
        }
    }
    while(boton!=0);
}
void pantallaAlumnos()                                          //PANTALLA ALUMNOS
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                  ");
        color(63);
        printf(" INICIAR SESION (3) ");
        color(159);
        printf(" ");
        color(63);
        printf(" CREAR CUENTAR (4) ");
        color(159);
        printf(" ");
        color(79);
        printf(" VOLVER (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                             ");
        color(63);
        printf("                    ");
        color(159);
        printf(" ");
        color(63);
        printf("                   ");
        color(159);
        printf(" ");
        color(79);
        printf("            ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 7
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 8
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 10
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 11
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 12
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 13
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 14
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf("  ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 15
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 16
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(149);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 17
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("     ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf(" ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 18
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(159);
        printf("    ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 19
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 20
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(" \n");
    }
}
int iniciarSesionAlumno()                                           //BOTON 3: INICIAR SESION
{
    int flag=0,boton,ronda=1;
    //char volverString[10]="0";
    stUsuario sesion,cuenta;
    //USUARIO
    while(flag!=1)
    {
        iniciarSesionAlumnoPantalla1(ronda);
        fflush(stdin);
        gets(sesion.usuario);
        if(strcmp(sesion.usuario,"0")==0)
        {
            boton=0;
            return boton;
        }
        FILE *archivo=fopen("Registro","rb");
        if(archivo!=NULL)
        {
            while((fread(&cuenta,sizeof(stUsuario),1,archivo)>0) && flag==0)
            {
                if(strcmp(sesion.usuario,cuenta.usuario)==0)
                {
                    flag=1;
                }
            }
            fclose(archivo);
        }
        ronda++;
        system("cls");
    }
    //CONTRASENA
    flag=0;
    ronda=1;
    while(flag!=1)
    {
        iniciarSesionAlumnoPantalla2(ronda,sesion);
        //fflush(stdin);
        //gets(sesion.contrasena);
        {   //ASTERISCOS CONTRASENA
            int p=0;
            do
            {
                fflush(stdin);
                sesion.contrasena[p]=getch();
                if(sesion.contrasena[p]!= '\r')
                {
                    if(sesion.contrasena[p]!='\b')
                    {
                        printf("*");
                    }else if (p!=0){
                        printf("\b \b");
                        p--;
                    }
                    p++;
                }
            }
            while(sesion.contrasena[p]!='\r');
            sesion.contrasena[p]='\0';
        }   //FIN ASTERISCOS
        if((strcmp(sesion.contrasena,"0")==0)||ronda>4)
        {
            boton=0;
            return boton;
        }
        FILE *archivo=fopen("Registro","rb");
        if(archivo!=NULL)
        {
            while((fread(&cuenta,sizeof(stUsuario),1,archivo)>0) && flag==0)
            {
                if((strcmp(sesion.usuario,cuenta.usuario)==0)&&(strcmp(sesion.contrasena,cuenta.contrasena)==0))
                {
                    flag=1;
                }
            }
            fclose(archivo);
        }
        ronda++;
        system("cls");
    }
    //INCIANDO
    do
    {
        iniciarSesionAlumnoPantalla3(sesion);
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=1 && boton!=0);
    if(boton==1)
    {
        FILE *archivo=fopen("Registro","rb");
        if(archivo!=NULL)
        {
            while((fread(&cuenta,sizeof(stUsuario),1,archivo)>0))
            {
                if(strcmp(sesion.usuario,cuenta.usuario)==0)
                {
                    iniciandoPantalla();
                    system("cls");
                    boton=ventanasAlumnos(cuenta,boton);
                }
            }
            fclose (archivo);
        }
    }
    return boton;
}
void iniciarSesionAlumnoPantalla1(int ronda)                            //PANTALLA QUE PIDE USUARIO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: INICIAR SESION                                                                           ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" USUARIO NO ENCONTRADO ");
            color(249);
            printf("                                                                          ");
            color(0);
            printf(" \n");
        }
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE DE USUARIO: ");
        color(15);
    }
}
void iniciarSesionAlumnoPantalla2(int ronda,stUsuario sesion)           //PANTALLA QUE PIDE CONTRASENA
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: INICIAR SESION                                                                           ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",sesion.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" CONTRASENA INCORRECTA ");
            color(249);
            printf("                                                                          ");
            color(0);
            printf(" \n");
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" CONTRASENA: ");
        color(15);
    }
}
void iniciarSesionAlumnoPantalla3(stUsuario sesion)                     //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
{
    stFecha fecha=fechaActual();
    int i;
    char contrasena[20];
    for(i=0;i<strlen(sesion.contrasena)-8;i++)
    {
        contrasena[i]='*';
    }
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: INICIAR SESION                                                                           ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",sesion.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" CONTRASENA: ********%-28s ",contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 12
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 13
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 14
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf("  ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 15
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 16
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(149);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 17
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("     ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf(" ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 18
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(159);
        printf("    ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 19
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 20
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                             ");
        color(32);
        printf(" INICIAR SESION (1) ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                             ");
        color(32);
        printf("                    ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(" \n");
    }
}
void iniciandoPantalla()                                                //PANTALLA INICIANDO SESION
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                                       ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 7
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 8
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 10
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 11
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 12
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 13
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 14
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf("  ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 15
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 16
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(79);
        printf(" INICIANDO SESION ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 17
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("     ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf(" ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 18
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(159);
        printf("    ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 19
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 20
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" 31/05/22 ");
        color(0);
        printf(" \n");
    }
    sleep(2);
}
int crearCuentaAlumno()                                             //BOTON 4: CREAR CUENTA
{
    stFecha fecha=fechaActual();
    stUsuario datos,datosAux;
    int boton=2,ronda=1,repetido=1,flag=0;
    //NOMBRE
    crearCuentaAlumnoPantalla1();
    fflush(stdin);
    gets(datos.nombre);
    if(strcmp(datos.nombre,"0")==0)
    {
        boton=0;
        return boton;
    }
    system("cls");
    //DOCUMENTO
    while(repetido==1)
    {
        crearCuentaAlumnoPantalla2(ronda,datos);
        scanf("%i",&datos.dni);
        if(datos.dni==0)
        {
            boton=0;
            return boton;
        }
        FILE *archivoUsuarios=fopen("Registro","rb");
        if(archivoUsuarios!=NULL)
        {
            while((fread(&datosAux,sizeof(stUsuario),1,archivoUsuarios)>0)&&flag==0)
            {
                if(datos.dni==datosAux.dni)
                {
                    flag=1;
                }
            }
            fclose(archivoUsuarios);
        }
        if(flag==0)
        {
            repetido=0;
        }
        else
        {
            flag=0;
        }
        ronda++;
        system("cls");
    }
    //EDAD
    flag=0;
    while(flag==0)
    {
        ronda=1;
        do
        {
            crearCuentaAlumnoPantalla3(ronda,1,datos);
            scanf("%i",&datos.nacimiento.dia);
            if(datos.nacimiento.dia==0)
            {
                boton=0;
                return boton;
            }
            ronda++;
            system("cls");
        }
        while((datos.nacimiento.dia<1)||(datos.nacimiento.dia>31));
        ronda=1;
        do
        {
            crearCuentaAlumnoPantalla3(ronda,2,datos);
            scanf("%i",&datos.nacimiento.mes);
            if(datos.nacimiento.mes==0)
            {
                boton=0;
                return boton;
            }
            ronda++;
            system("cls");
        }
        while((datos.nacimiento.mes<1)||(datos.nacimiento.mes>12));
        ronda=1;
        do
        {
            crearCuentaAlumnoPantalla3(ronda,3,datos);
            scanf("%i",&datos.nacimiento.ano);
            if(datos.nacimiento.ano==0)
            {
                boton=0;
                return boton;
            }
            ronda++;
            system("cls");
        }
        while((datos.nacimiento.ano<1922)||(datos.nacimiento.ano>2022));
        if(fecha.ano-datos.nacimiento.ano>18)
        {
            flag=1;
        }
        if(fecha.ano-datos.nacimiento.ano==18)
        {
            if(fecha.mes>datos.nacimiento.mes)
            {
                flag=1;
            }
            if(fecha.mes==datos.nacimiento.mes)
            {
                if(fecha.dia>=datos.nacimiento.dia)
                {
                   flag=1;
                }
            }
        }
        system("cls");
    }
    //USUARIO
    ronda=1;
    repetido=1;
    flag=0;
    while(repetido==1)
    {
        crearCuentaAlumnoPantalla4(ronda,datos);
        fflush(stdin);
        gets(datos.usuario);
        if(strcmp(datos.usuario,"0")==0)
        {
            boton=0;
            return boton;
        }
        FILE *archivoUsuarios=fopen("Registro","rb");
        if(archivoUsuarios!=NULL)
        {
            while((fread(&datosAux,sizeof(stUsuario),1,archivoUsuarios)>0)&&flag==0)
            {
                if(strcmp(datos.usuario,datosAux.usuario)==0)
                {
                    flag=1;
                }
            }
            fclose(archivoUsuarios);
        }
        if(flag==0)
        {
            repetido=0;
        }
        else
        {
            flag=0;
        }
        ronda++;
        system("cls");
    }
    //CONTRASENA
    ronda=1;
    while(strlen(datos.contrasena)<8)
    {
        crearCuentaAlumnoPantalla5(ronda,datos);
        fflush(stdin);
        gets(datos.contrasena);
        if(strcmp(datos.contrasena,"0")==0)
    {
        boton=0;
        return boton;
    }
        ronda++;
        system("cls");
    }
    //REPETIR CONTRASENA
    ronda=1;
    do
    {
        crearCuentaAlumnoPantalla6(ronda,datos);
        fflush(stdin);
        gets(datosAux.contrasena);
        if(strcmp(datosAux.contrasena,"0")==0)
        {
            boton=0;
            return boton;
        }
        ronda++;
        system("cls");
    }
    while(strcmp(datos.contrasena,datosAux.contrasena)!=0);
    //CONFIRMACION
    while(boton!=1 && boton!=0)
    {
        crearCuentaAlumnoPantalla7(boton,datos);
        scanf("%i",&boton);
        system("cls");
    }
    if(boton==1)
    {
        FILE *archivoUsuarios=fopen("Registro","ab");
        if(archivoUsuarios!=NULL)
        {
            fwrite(&datos,sizeof(stUsuario),1,archivoUsuarios);
            fclose(archivoUsuarios);
        }
        boton=0;
    }
    return boton;
}
void crearCuentaAlumnoPantalla1()                                       //PANTALLA QUE PIDE NOMBRE
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" INGRESE SU NOMBRE Y APELLIDO: ");
        color(15);
    }
}
void crearCuentaAlumnoPantalla2(int ronda,stUsuario datos)              //PANTALLA QUE PIDE DOCUMENTO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" ESE NUMERO DE DOCUMENTO YA ESTA REGISTRADO ");
            color(249);
            printf("                                                     ");
            color(0);
            printf(" \n");
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE SU NUMERO DE DOCUMENTO: ");
        color(15);
    }
}
void crearCuentaAlumnoPantalla3(int ronda,int parte,stUsuario datos)    //PANTALLA QUE PIDE FECHA DE NACIMIENTO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 12
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" INGRESE UNA FECHA VALIDA ");
            color(249);
            printf("                                                                       ");
            color(0);
            printf(" \n");
        }
    }
    {   //SUBCABECERA 13
        switch(parte)
        {
            case 1:
            {   //SUBCABECERA 13
                color(128);
                printf(" INGRESE SU FECHA DE NACIMIENTO (DIA): ");
                color(15);
            }
            break;
            case 2:
            {   //SUBCABECERA 13
                color(128);
                printf(" INGRESE SU FECHA DE NACIMIENTO (MES): ");
                color(15);
            }
            break;
            case 3:
            {   //SUBCABECERA 13
                color(128);
                printf(" INGRESE SU FECHA DE NACIMIENTO (ANO): ");
                color(15);
            }
            break;
        }
    }
}
void crearCuentaAlumnoPantalla4(int ronda,stUsuario datos)              //PANTALLA QUE PIDE USUARIO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    if(ronda==1)
    {   //LINEA 15
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    else
    {   //LINEA 15
        color(249);
        printf(" ");
        color(79);
        printf(" ESE NOMBRE DE USUARIO YA ESTA REGISTRADO ");
        color(249);
        printf("                                                       ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 16
        color(128);
        printf(" ESCRIBA UN NOMBRE DE USUARIO: ");
        color(15);
    }
}
void crearCuentaAlumnoPantalla5(int ronda,stUsuario datos)              //PANTALLA QUE PIDE CONTRASENA
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 15
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 16
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 17
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 18
        if(ronda==1)
        {
            color(249);
            printf(" ");
            color(79);
            printf(" DEBE TENER 8 CARACTERES COMO MINIMO ");
            color(249);
            printf("                                                            ");
            color(0);
            printf(" \n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" LA CONTRASENA NO TIENE 8 CARACTERES ");
            color(249);
            printf("                                                            ");
            color(0);
            printf(" \n");
        }
    }
    {   //SUBCABECERA 19
        color(128);
        printf(" INGRESE UNA CONTRASENA: ");
        color(15);
    }
}
void crearCuentaAlumnoPantalla6(int ronda,stUsuario datos)              //PANTALLA QUE PIDE REPETIR CONTRASENA
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 13
        color(128);
                printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 15
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 16
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 17
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 18
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 19
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 20
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" LAS CONTRASENAS NO COINCIDEN ");
            color(249);
            printf("                                                           ");
            color(0);
            printf(" \n");
        }
    }
    {   //SUBCABECERA 22
        color(128);
        printf(" VUELVA A INGRESAR LA CONTRASENA: ");
        color(15);
    }
}
void crearCuentaAlumnoPantalla7(int boton,stUsuario datos)              //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 13
        color(128);
                printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 15
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 16
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 17
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 18
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 19
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 20
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                               ");
        color(32);
        printf(" CREAR CUENTA (1) ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                               ");
        color(32);
        printf("                  ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" 31/05/22 ");
        color(0);
        printf(" \n");
    }
}
//VENTANAS ALUMNOS
int ventanasAlumnos(stUsuario sesion,int boton)                 //VENTANAS ALUMNOS
{
    float pesos=0;
    do
    {
        switch(boton)
        {
            case 1:
            {
                system("cls");
                boton=estadoDeCuentaAlumno(sesion,pesos);
            }
            break;
            case 2:
            {
                system("cls");
                boton=datosPersonales(sesion);
            }
            break;
            case 3:
            {
                system("cls");
                boton=deposito(sesion,&pesos);
            }
            break;
            case 4:
            {
                system("cls");
                boton=pago(sesion);
            }
            break;
            case 5:
            {
                system("cls");
                boton=editarDatos(sesion);
            }
            break;
            case 7:
            {
                system("cls");
                boton=buffet(sesion,&pesos);
            }
            break;
            case 8:
            {
                system("cls");
                boton=cuota(sesion,&pesos);
            }
            break;
            case 9:
            {
                system("cls");
                boton=fotocopiadora(sesion,&pesos);
            }
            break;
        }
    }
    while(boton!=0);
    return boton;
}
int estadoDeCuentaAlumno(stUsuario sesion,float pesos)              //BOTON 1
{
    int boton,tamano;
    float suma;
    stUsuario cuenta;
    FILE *archivo=fopen("Usuarios","rb");
    if(archivo!=NULL)
    {
        while(fread(&cuenta,sizeof(stUsuario),1,archivo)>0)
        {
            if(strcmp(sesion.usuario,cuenta.usuario)==0)
            {
                suma=cuenta.saldo+pesos;
            }
        }
        fclose(archivo);
    }
    do
    {
        estadoDeCuentaAlumnoPantalla(sesion);
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=2 && boton!=3 && boton!=4 && boton!=0);
    archivo=fopen("Usuarios","r+b");
    if(archivo!=NULL)
    {
        while(fread(&cuenta,sizeof(stUsuario),1,archivo)>0)
        {
            if(strcmp(sesion.usuario,cuenta.usuario)==0)
            {
                tamano=sizeof(stUsuario);
                cuenta.saldo=suma;
                fseek(archivo,-tamano,SEEK_CUR);
                fwrite(&cuenta,sizeof(stUsuario),1,archivo);
            }
        }
        rewind(archivo);
        fclose(archivo);
    }
    return boton;
}
void estadoDeCuentaAlumnoPantalla(stUsuario sesion)                     //PANTALLA ESTADO DE LA CUENTA DEL ALUMNO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                             ");
        color(128);
        printf(" DATOS PERSONALES (2) ");
        color(159);
        printf(" ");
        color(79);
        printf(" CERRAR SESION (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                        ");
        color(128);
        printf("                      ");
        color(159);
        printf(" ");
        color(79);
        printf("                   ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" ESTADO DE LA CUENTA                                                                              ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",sesion.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 12
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" SALDO: $ %-39.2f ",sesion.saldo);
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA + LOGO 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("  ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 15
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 16
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(149);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 17
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("     ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf(" ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 18
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(159);
        printf("    ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 19
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 20
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                      ");
        color(159);
        printf(" DEPOSITAR (3) ");
        color(249);
        printf(" ");
        color(159);
        printf(" PAGAR (4) ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                      ");
        color(159);
        printf("               ");
        color(249);
        printf(" ");
        color(159);
        printf("           ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf("                      AGUSTIN ROJAS - FRANCISCO PEREZ UGALDE - GONZALO MARSALA - ZEUS JESUA TESTA ");
        color(0);
        printf(" \n");
    }
}
int datosPersonales(stUsuario sesion)                               //BOTON 2
{
    int boton;
    do
    {
        datosPersonalesPantalla(sesion);
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=1 && boton!=0);
    return boton;
}
void datosPersonalesPantalla(stUsuario sesion)                          //PANTALLA DATOS PERSONALES
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                          ");
        color(128);
        printf(" ESTADO DE LA CUENTA (1) ");
        color(159);
        printf(" ");
        color(79);
        printf(" CERRAR SESION (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                     ");
        color(128);
        printf("                         ");
        color(159);
        printf(" ");
        color(79);
        printf("                   ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" DATOS PERSONALES                                                                                 ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE: %-40s ",sesion.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 12
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" DOCUMENTO: %-37i ",sesion.dni);
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA + LOGO 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("  ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 15
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA + LOGO 16
        color(128);
        printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",sesion.nacimiento.dia,sesion.nacimiento.mes,(sesion.nacimiento.ano%100)/10,sesion.nacimiento.ano%10);
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA + LOGO 17
        color(128);
        printf("                                                  ");
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 18
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(159);
        printf("    ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 19
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 20
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                    ");
        color(159);
        printf(" EDITAR DATOS PERSONALES (5) ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                    ");
        color(159);
        printf("                             ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf("                      AGUSTIN ROJAS - FRANCISCO PEREZ UGALDE - GONZALO MARSALA - ZEUS JESUA TESTA ");
        color(0);
        printf(" \n");
    }
}
//VER DONDE USAR
int deposito(stUsuario aux,float *pesos)                            //BOTON 3
{
    int boton;
    do
    {
        printf(" ________________________________________________________________________________________________ \n");
        printf("| UTN WALLET                                                                                     |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| ALUMNO                                                                                         |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| DEPOSITAR                                                                                      |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| SALDO: $ ");
        scanf("%f",pesos);
        system("cls");
        printf(" _________________________________________________________________________________ ______________ \n");
        printf("| UTN WALLET                                                                      | CANCELAR (0) |\n");
        printf("|_________________________________________________________________________________|______________|\n");
        printf("| ALUMNO                                                                                         |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| DEPOSITAR                                                                                      |\n");
        printf("|________________________________________ _______________________________________________________|\n");
        printf("| SALDO: $ %-29.2f |                                                       |\n",*pesos);
        printf("|________________________________________|                                                       |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                               _______________  |\n");
        printf("|                                                                              | CONFIRMAR (1) | |\n");
        printf("|                                                                              |_______________| |\n");
        printf("|________________________________________________________________________________________________|\n");
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=1 && boton!=0);
    if(boton==0)
    {
        boton=1;
        pesos=0;
    }
    return boton;
}
int pago(stUsuario sesion)                                          //BOTON 4
{
    int boton;
    do
    {
        printf(" _________________________________________________________________________________ ______________ \n");
        printf("| UTN WALLET                                                                      | CANCELAR (0) |\n");
        printf("|_________________________________________________________________________________|______________|\n");
        printf("| ALUMNO                                                                                         |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| PAGAR                                                                                          |\n");
        printf("|________________________________________ _______________________________________________________|\n");
        printf("| DESTINATARIO:  ___________________     |                                                       |\n");
        printf("|_______________| BUFFET (7)        |____|                                                       |\n");
        printf("|               |___________________|                                                            |\n");
        printf("|               | CUOTA (8)         |                                                            |\n");
        printf("|               |___________________|                                                            |\n");
        printf("|               | FOTOCOPIADORA (9) |                                                            |\n");
        printf("|               |___________________|                                                            |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|________________________________________________________________________________________________|\n");
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=7 && boton!=8 && boton!=9 && boton!=0);
    if(boton==0)
    {
        boton=1;
    }
    return boton;
}
int editarDatos(stUsuario sesion)                                   //BOTON 5
{
    int boton=0;

    return boton;
}
int buffet(stUsuario sesion,float *pesos)                           //BOTON 7
{
    int boton;
    do
    {
        do
        {
            printf(" ________________________________________________________________________________________________ \n");
            printf("| UTN WALLET                                                                                     |\n");
            printf("|________________________________________________________________________________________________|\n");
            printf("| ALUMNO                                                                                         |\n");
            printf("|________________________________________________________________________________________________|\n");
            printf("| PAGAR                                                                                          |\n");
            printf("|________________________________________ _______________________________________________________|\n");
            printf("| DESTINATARIO: BUFFET                   |                                                       |\n");
            printf("|________________________________________|                                                       |\n");
            printf("| MONTO: $ ");
            scanf("%f",pesos);
            system("cls");
        }
        while(*pesos>sesion.saldo);
        printf(" _________________________________________________________________________________ ______________ \n");
        printf("| UTN WALLET                                                                      | CANCELAR (0) |\n");
        printf("|_________________________________________________________________________________|______________|\n");
        printf("| ALUMNO                                                                                         |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| PAGAR                                                                                          |\n");
        printf("|________________________________________ _______________________________________________________|\n");
        printf("| DESTINATARIO: BUFFET                   |                                                       |\n");
        printf("|________________________________________|                                                       |\n");
        printf("| MONTO: $ %-29.2f |                                                       |\n",*pesos);
        printf("|________________________________________|                                                       |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                               _______________  |\n");
        printf("|                                                                              | CONFIRMAR (1) | |\n");
        printf("|                                                                              |_______________| |\n");
        printf("|________________________________________________________________________________________________|\n");
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=1 && boton!=0);
    if(boton==0)
    {
        boton=1;
        *pesos=0;
    }
    else
    {
        *pesos=(-1)*(*pesos);
    }
    return boton;
}
int cuota(stUsuario sesion,float *pesos)                            //BOTON 8
{
    int boton;
    do
    {
        do
        {
            printf(" _________________________________________________________________________________ \n");
            printf("| UTN WALLET                                                                      |\n");
            printf("|_________________________________________________________________________________|\n");
            printf("| PAGAR                                                                           |\n");
            printf("|________________________________________ ________________________________________|\n");
            printf("| DESTINATARIO: CUOTA                    |                                        |\n");
            printf("|________________________________________|                                        |\n");
            printf("| MONTO: $ ");
            scanf("%f",pesos);
            system("cls");
        }
        while(*pesos>sesion.saldo);
        printf(" __________________________________________________________________ ______________ \n");
        printf("| UTN WALLET                                                       | CANCELAR (0) |\n");
        printf("|__________________________________________________________________|______________|\n");
        printf("| PAGAR                                                                           |\n");
        printf("|________________________________________ ________________________________________|\n");
        printf("| DESTINATARIO: CUOTA                    |                                        |\n");
        printf("|________________________________________|                                        |\n");
        printf("| MONTO: $ %-29.2f |                                        |\n",*pesos);
        printf("|________________________________________|                                        |\n");
        printf("|                                                                                 |\n");
        printf("|                                                                _______________  |\n");
        printf("|                                                               | CONFIRMAR (1) | |\n");
        printf("|                                                               |_______________| |\n");
        printf("|_________________________________________________________________________________|\n");
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=1 && boton!=0);
    if(boton==0)
    {
        boton=1;
        *pesos=0;
    }
    else
    {
        *pesos=(-1)*(*pesos);
    }
    return boton;
}
int fotocopiadora(stUsuario sesion,float *pesos)                    //BOTON 9
{
    int boton;
    do
    {
        do
        {
            printf(" _________________________________________________________________________________ \n");
            printf("| UTN WALLET                                                                      |\n");
            printf("|_________________________________________________________________________________|\n");
            printf("| PAGAR                                                                           |\n");
            printf("|________________________________________ ________________________________________|\n");
            printf("| DESTINATARIO: FOTOCOPIADORA            |                                        |\n");
            printf("|________________________________________|                                        |\n");
            printf("| MONTO: $ ");
            scanf("%f",pesos);
            system("cls");
        }
        while(*pesos>sesion.saldo);
        printf(" __________________________________________________________________ ______________ \n");
        printf("| UTN WALLET                                                       | CANCELAR (0) |\n");
        printf("|__________________________________________________________________|______________|\n");
        printf("| PAGAR                                                                           |\n");
        printf("|________________________________________ ________________________________________|\n");
        printf("| DESTINATARIO: FOTOCOPIADIORA           |                                        |\n");
        printf("|________________________________________|                                        |\n");
        printf("| MONTO: $ %-29.2f |                                        |\n",*pesos);
        printf("|________________________________________|                                        |\n");
        printf("|                                                                                 |\n");
        printf("|                                                                _______________  |\n");
        printf("|                                                               | CONFIRMAR (1) | |\n");
        printf("|                                                               |_______________| |\n");
        printf("|_________________________________________________________________________________|\n");
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=1 && boton!=0);
    if(boton==0)
    {
        boton=1;
        *pesos=0;
    }
    else
    {
        *pesos=(-1)*(*pesos);
    }
    return boton;
}
//ADMINISTRADORES
int administradores()                                       //BOTON 2: MENU ADMINISTRADORES
{
    int boton;
    do
    {
        do
        {
            pantallaAdministradores();
            scanf("%i",&boton);
            system("cls");
        }
        while(boton!=3 && boton!=4 && boton!=0);
        switch(boton)
        {
            case 3:
            {
                iniciarSesionAdmin();
                system("cls");
            }
            break;
            case 4:
            {
                char admin[20]="utn2022";
                char buffet[20]="buffet2022";
                char fotocopiadora[20]="fotocopia2022";
                system("cls");
                color(15);
                char clave[20];
                printf ("INGRESE LA CONTRASENA: \n");
                fflush (stdin);
                gets(clave);
                system("cls");
                if(strcmp(admin,clave)==0)
                {
                    crearCuentaAdmin(1);
                    system("cls");
                }
                if(strcmp(buffet,clave)==0)
                {
                    crearCuentaAdmin(2);
                    system("cls");
                }
                if(strcmp(fotocopiadora,clave)==0)
                {
                    crearCuentaAdmin(3);
                    system("cls");
                }
            }
            break;
        }
    }
    while(boton!=0);
    return boton;
}
void pantallaAdministradores()                                  //PANTALLA ADMINISTRADORES
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                  ");
        color(63);
        printf(" INICIAR SESION (3) ");
        color(159);
        printf(" ");
        color(63);
        printf(" CREAR CUENTAR (4) ");
        color(159);
        printf(" ");
        color(79);
        printf(" VOLVER (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                             ");
        color(63);
        printf("                    ");
        color(159);
        printf(" ");
        color(63);
        printf("                   ");
        color(159);
        printf(" ");
        color(79);
        printf("            ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR                                                                                    ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 7
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 8
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 10
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 11
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 12
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 13
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 14
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf("  ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 15
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 16
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(149);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 17
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("     ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf(" ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 18
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(159);
        printf("    ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 19
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 20
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" 31/05/22 ");
        color(0);
        printf(" \n");
    }
}
int iniciarSesionAdmin()                                            //BOTON 3
{
    color (15);
    int flag=0,boton=1,ronda=1;
    char volverString[10]="0";
    stAdmin sesion,cuenta;
    //USUARIO
    while(flag!=1)
    {
        iniciarSesionAdminPantalla1(ronda);
        fflush(stdin);
        gets(sesion.usuario);
        if(strcmp(sesion.usuario,volverString)==0)
        {
            boton=0;
            return boton;
        }
        FILE *archivo=fopen("Admin","rb");
        if(archivo!=NULL)
        {
            while((fread(&cuenta,sizeof(stAdmin),1,archivo)>0) && flag==0)
            {
                if(strcmp(sesion.usuario,cuenta.usuario)==0)
                {
                    flag=1;
                }
            }
            fclose(archivo);
        }
        ronda++;
        system("cls");
    }
    //CONTRASENA
    flag=0;
    ronda=1;
    while(flag!=1)
    {
        iniciarSesionAdminPantalla2(ronda,sesion);
        //fflush(stdin);
        //gets(sesion.contrasena);
        {   //ASTERISCOS CONTRASENA
            int p=0;
            do
            {
                fflush(stdin);
                sesion.contrasena[p]=getch();
                if(sesion.contrasena[p]!= '\r')
                {
                    if(sesion.contrasena[p]!='\b')
                    {
                        printf("*");
                    }else if (p!=0){
                        printf("\b \b");
                        p--;
                    }
                    p++;
                }
            }
            while(sesion.contrasena[p]!='\r');
            sesion.contrasena[p]='\0';
        }   //FIN ASTERISCOS
        if(strcmp(sesion.contrasena,volverString)==0||ronda>4)
        {
            boton=0;
            return boton;
        }
        FILE *archivo=fopen("Admin","rb");
        if(archivo!=NULL)
        {
            while((fread(&cuenta,sizeof(stAdmin),1,archivo)>0) && flag==0)
            {
                if((strcmp(sesion.usuario,cuenta.usuario)==0)&&(strcmp(sesion.contrasena,cuenta.contrasena)==0))
                {
                    flag=1;
                }
            }
            fclose(archivo);
        }
        ronda++;
        system("cls");
    }
    do
    {
        iniciarSesionAdminPantalla3(sesion);
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=1 && boton!=0);
    if(boton==1)
    {
        FILE *archivo=fopen("Admin","rb");
        if(archivo!=NULL)
        {
            while((fread(&cuenta,sizeof(stAdmin),1,archivo)>0))
            {
                if(strcmp(sesion.usuario,cuenta.usuario)==0)
                {
                    iniciandoAdminPantalla();
                    system("cls");
                    boton=ventanasAdmin(cuenta,boton);
                }
            }
            fclose (archivo);
        }
    }
    return boton;
}
void iniciarSesionAdminPantalla1(int ronda)                             //PANTALLA QUE PIDE USUARIO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR: INICIAR SESION                                                                    ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" USUARIO NO ENCONTRADO ");
            color(249);
            printf("                                                                          ");
            color(0);
            printf(" \n");
        }
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE DE USUARIO: ");
        color(15);
    }
}
void iniciarSesionAdminPantalla2(int ronda,stAdmin sesion)              //PANTALLA QUE PIDE CONTRASENA
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR: INICIAR SESION                                                                    ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",sesion.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" CONTRASENA INCORRECTA ");
            color(249);
            printf("                                                                          ");
            color(0);
            printf(" \n");
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" CONTRASENA: ");
        color(15);
    }
}
void iniciarSesionAdminPantalla3(stAdmin sesion)                        //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
{
    stFecha fecha=fechaActual();
    int i;
    char contrasena[20];
    for(i=0;i<strlen(sesion.contrasena)-8;i++)
    {
        contrasena[i]='*';
    }
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR: INICIAR SESION                                                                    ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",sesion.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" CONTRASENA: ********%-28s ",contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 12
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 13
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 14
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf("  ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 15
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 16
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(149);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 17
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("     ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf(" ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 18
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(159);
        printf("    ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 19
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 20
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                             ");
        color(32);
        printf(" INICIAR SESION (1) ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                             ");
        color(32);
        printf("                    ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(" \n");
    }
}
void iniciandoAdminPantalla()                                           //PANTALLA INICIANDO SESION
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR: INICIAR SESION                                                                    ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 7
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 8
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 10
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 11
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 12
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 13
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 14
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf("  ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 15
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 16
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(79);
        printf(" INICIANDO SESION ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 17
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("     ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf(" ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 18
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(159);
        printf("    ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 19
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 20
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" 31/05/22 ");
        color(0);
        printf(" \n");
    }
    sleep(2);
}
int crearCuentaAdmin(int tipo)                                      //BOTON 4: CREAR CUENTA                         //VER QUE NO COINCIDE O NO GUARDA CORRECTAMENTE EN EL ARCHIVO
{
    stAdmin datos,datosAux;
    int boton=4,ronda=1,repetido=1,flag=0;
    //TIPO
    datos.tipo=tipo;
    system("cls");
    //NOMBRE
    crearCuentaAdminPantalla1(datos);
    fflush(stdin);
    gets(datos.nombre);
    if(strcmp(datos.nombre,"0")==0)
    {
        boton=0;
        return boton;
    }
    system("cls");
    //USUARIO
    ronda=1;
    repetido=1;
    flag=0;
    while(repetido==1)
    {
        crearCuentaAdminPantalla2(ronda,datos);
        fflush(stdin);
        gets(datos.usuario);
        if(strcmp(datos.usuario,"0")==0)
        {
            boton=0;
            return boton;
        }
        FILE *archivoAdmins=fopen("Admin","ab");
        if(archivoAdmins!=NULL)
        {
            while((fread(&datosAux,sizeof(stAdmin),1,archivoAdmins)>0)&&flag==0)
            {
                if(strcmp(datos.usuario,datosAux.usuario)==0)
                {
                    flag=1;
                }
            }
            fclose(archivoAdmins);
        }
        if(flag==0)
        {
            repetido=0;
        }
        else
        {
            flag=0;
        }
        ronda++;
        system("cls");
    }
    //CONTRASENA
    ronda=1;
    while(strlen(datos.contrasena)<8)
    {
        crearCuentaAdminPantalla3(ronda,datos);
        fflush(stdin);
        gets(datos.contrasena);
        if(strcmp(datos.contrasena,"0")==0)
        {
            boton=0;
            return boton;
        }
        ronda++;
        system("cls");
    }
    //REPETIR CONTRASENA
    ronda=1;
    do
    {
        crearCuentaAdminPantalla4(ronda,datos);
        fflush(stdin);
        gets(datosAux.contrasena);
        if(strcmp(datosAux.contrasena,"0")==0)
        {
            boton=0;
            return boton;
        }
        ronda++;
        system("cls");
    }
    while(strcmp(datos.contrasena,datosAux.contrasena)!=0);
    //CONFIRMACION
    while(boton!=1 && boton!=0)
    {
        crearCuentaAdminPantalla5(boton,datos);
        scanf("%i",&boton);
        system("cls");
    }
    if(boton==1)
    {
        FILE *archivoAdmin=fopen("Admin","ab");
        if(archivoAdmin!=NULL)
        {
            fwrite(&datos,sizeof(stAdmin),1,archivoAdmin);
            fclose(archivoAdmin);
        }
        boton=0;
    }
    return boton;
}
void crearCuentaAdminPantalla1(stAdmin datos)                           //PANTALLA QUE PIDE NOMBRE
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case 1:
            {
                color(128);
                printf(" ADMINISTRADOR UTN: INICIAR SESION                                                                ");
                color(0);
                printf(" \n");
            }
            break;
            case 2:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR BUFFET: INICIAR SESION                                                             ");
                color(0);
                printf(" \n");
            }
            break;
            case 3:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA: INICIAR SESION                                                      ");
                color(0);
                printf(" \n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" INGRESE SU NOMBRE Y APELLIDO: ");
        color(15);
    }
}
void crearCuentaAdminPantalla2(int ronda,stAdmin datos)                 //PANTALLA QUE PIDE USUARIO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case 1:
            {
                color(128);
                printf(" ADMINISTRADOR UTN: INICIAR SESION                                                                ");
                color(0);
                printf(" \n");
            }
            break;
            case 2:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR BUFFET: INICIAR SESION                                                             ");
                color(0);
                printf(" \n");
            }
            break;
            case 3:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA: INICIAR SESION                                                      ");
                color(0);
                printf(" \n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" ESE NOMBRE DE USUARIO YA ESTA REGISTRADO ");
            color(249);
            printf("                                                       ");
            color(0);
            printf(" \n");
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE UN NOMBRE DE USUARIO: ");
        color(15);
    }
}
void crearCuentaAdminPantalla3(int ronda,stAdmin datos)                 //PANTALLA QUE PIDE CONTRASENA
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case 1:
            {
                color(128);
                printf(" ADMINISTRADOR UTN: INICIAR SESION                                                                ");
                color(0);
                printf(" \n");
            }
            break;
            case 2:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR BUFFET: INICIAR SESION                                                             ");
                color(0);
                printf(" \n");
            }
            break;
            case 3:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA: INICIAR SESION                                                      ");
                color(0);
                printf(" \n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 12
        if(ronda==1)
        {
            color(249);
            printf(" ");
            color(79);
            printf(" DEBE TENER 8 CARACTERES COMO MINIMO ");
            color(249);
            printf("                                                            ");
            color(0);
            printf(" \n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" LA CONTRASENA NO TIENE 8 CARACTERES ");
            color(249);
            printf("                                                            ");
            color(0);
            printf(" \n");
        }
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" INGRESE UNA CONTRASENA: ");
        color(15);
    }
}
void crearCuentaAdminPantalla4(int ronda,stAdmin datos)                 //PANTALLA QUE PIDE REPETIR CONTRASENA
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case 1:
            {
                color(128);
                printf(" ADMINISTRADOR UTN: INICIAR SESION                                                                ");
                color(0);
                printf(" \n");
            }
            break;
            case 2:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR BUFFET: INICIAR SESION                                                             ");
                color(0);
                printf(" \n");
            }
            break;
            case 3:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA: INICIAR SESION                                                      ");
                color(0);
                printf(" \n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 15
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" LAS CONTRASENAS NO COINCIDEN ");
            color(249);
            printf("                                                           ");
            color(0);
            printf(" \n");
        }
    }
    {   //SUBCABECERA 16
        color(128);
        printf(" VUELVA A INGRESAR LA CONTRASENA: ");
        color(15);
    }
}
void crearCuentaAdminPantalla5(int boton,stAdmin datos)                 //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case 1:
            {
                color(128);
                printf(" ADMINISTRADOR UTN: INICIAR SESION                                                                ");
                color(0);
                printf(" \n");
            }
            break;
            case 2:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR BUFFET: INICIAR SESION                                                             ");
                color(0);
                printf(" \n");
            }
            break;
            case 3:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA: INICIAR SESION                                                      ");
                color(0);
                printf(" \n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 15
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 16
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 17
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 18
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 19
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 20
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                               ");
        color(32);
        printf(" CREAR CUENTA (1) ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                               ");
        color(32);
        printf("                  ");
        color(249);
        printf(" ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" 31/05/22 ");
        color(0);
        printf(" \n");
    }
}
//VENTANAS ADMIN
int ventanasAdmin(stAdmin sesion,int boton)                     //VENTANAS ADMIN
{
    float pesos=0;

    //DEPENDE TIPO DE ADMIN

    do
    {
        switch(boton)
        {
            case 1:
            {
                system("cls");
                boton=estadoDeCuentaAdmin(sesion,pesos);
            }
            break;
        }
    }
    while(boton!=0);
    return boton;
}
int estadoDeCuentaAdmin(stAdmin sesion,int pesos)                   //BOTON 1
{
    int boton=1;
    do
    {
        estadoDeCuentaAdminPantalla(sesion);
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=2 && boton!=3 && boton!=4 && boton!=0);
    return boton;
}
void estadoDeCuentaAdminPantalla(stAdmin sesion)                        //PANTALLA ESTADO DE LA CUENTA DEL ADMIN
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                    ");
        color(79);
        printf(" CERRAR SESION (0) ");
        color(0);
        printf(" \n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                               ");
        color(79);
        printf("                   ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case 1:
            {
                color(128);
                printf(" ADMINISTRADOR UTN                                                                                ");
                color(0);
                printf(" \n");
            }
            break;
            case 2:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR BUFFET                                                                             ");
                color(0);
                printf(" \n");
            }
            break;
            case 3:
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA                                                                      ");
                color(0);
                printf(" \n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" ESTADO DE LA CUENTA                                                                              ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",sesion.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 12
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" SALDO: $ %-39.2f ",sesion.saldo);
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("   ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA + LOGO 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("  ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 15
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("     ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 16
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(149);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 17
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("     ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf(" ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 18
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("  ");
        color(159);
        printf("    ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("       ");
        color(159);
        printf("   ");
        color(249);
        printf("          ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 19
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LOGO 20
        color(249);
        printf("   ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf("    ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("    ");
        color(249);
        printf(" ");
        color(159);
        printf("   ");
        color(249);
        printf("   ");
        color(159);
        printf("   ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf(" ");
        color(159);
        printf("         ");
        color(249);
        printf("    ");
        color(159);
        printf("   ");
        color(249);
        printf("      ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 24
        switch(sesion.tipo)
        {
            case 1:
            {
                color(249);
                printf("                                                                     ");
                color(159);
                printf(" DEPOSITAR (3) ");
                color(249);
                printf(" ");
                color(159);
                printf(" COBRAR (4) ");
                color(249);
                printf(" ");
                color(0);
                printf(" \n");
            }
            break;
            case 2:
            {
                color(249);
                printf("                                                                                     ");
                color(159);
                printf(" COBRAR (4) ");
                color(249);
                printf(" ");
                color(0);
                printf(" \n");
            }
            break;
            case 3:
            {
                color(249);
                printf("                                                                                     ");
                color(159);
                printf(" COBRAR (4) ");
                color(249);
                printf(" ");
                color(0);
                printf(" \n");
            }
            break;
        }
    }
    {   //LINEA 25
        switch(sesion.tipo)
        {
            case 1:
            {
                color(249);
                printf("                                                                     ");
                color(159);
                printf("               ");
                color(249);
                printf(" ");
                color(159);
                printf("            ");
                color(249);
                printf(" ");
                color(0);
                printf(" \n");
            }
            break;
            case 2:
            {
                color(249);
                printf("                                                                                     ");
                color(159);
                printf("            ");
                color(249);
                printf(" ");
                color(0);
                printf(" \n");
            }
            break;
            case 3:
            {
                color(249);
                printf("                                                                                     ");
                color(159);
                printf("            ");
                color(249);
                printf(" ");
                color(0);
                printf(" \n");
            }
            break;
        }
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    {   //LINEA 27
        color(144);
        printf("                      AGUSTIN ROJAS - FRANCISCO PEREZ UGALDE - GONZALO MARSALA - ZEUS JESUA TESTA ");
        color(0);
        printf(" \n");
    }
}
//COLOR
int color(int num)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),num);
	return 0;
}
//FECHA
stFecha fechaActual()
{
    stFecha fecha;
    time_t now;
    time(&now);
    struct tm *local=localtime(&now);
    fecha.dia=local->tm_mday;           //DIA (1-31)
    fecha.mes=local->tm_mon+1;          //MES (0-11)
    fecha.ano=local->tm_year+1900;      //ANO DESDE 1900
    return fecha;
}
