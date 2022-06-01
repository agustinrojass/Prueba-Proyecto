#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <dos.h>
#include <windows.h>
#include <unistd.h>


//VERSION 1.2

//CREAR APLICACION DE UTN WALLET


//FALTA PARTE ADMIN


//SE PUEDE AGREGAR CONFIRMACIONES, DETALLES, ERRORES, ETC EN PAGOS/COMPRAS/DEPOSITOS

//AGREGAR "TOKEN" PARA LA COMPRA/VENTA


//AGREGAR TIMEOUTS


//AGREGAR COLORES


//AGREGAR ARCHIVO DE TRANSACCIONES



typedef struct
{
    char nombre[20];
    int dni;
    int edad;
    char usuario[20];
    char contrasena[20];
    float saldo;
} stUsuario;

typedef struct
{
    char nombre[20];
    char usuario[20];
    char contrasena[20];
} stAdmin;

void edad()
{

    printf("INGRESE SU FECHA DE NACIMIENTO:\n");
    printf("DIA");
    printf("MES");
    printf("ANO");


}


//INICIO
void inicio();
void pantallaInicio();

//ALUMNOS
void alumnos();                                     //BOTON 1
void pantallaAlumnos();
int iniciarSesionAlumno();                          //BOTON 3
void iniciando();
int crearCuentaAlumno();                            //BOTON 4

//VETANASALUMNOS
int ventanasAlumnos(stUsuario sesion,int boton);
int estadoDeCuenta(stUsuario sesion,float pesos);   //BOTON 1
int datosPersonales(stUsuario aux);                 //BOTON 2
int deposito(stUsuario aux,float *pesos);           //BOTON 3
int pago(stUsuario sesion);                         //BOTON 4
int editarDatos(stUsuario sesion);                  //BOTON 5
int buffet(stUsuario sesion,float *pesos);          //BOTON 7
int cuota(stUsuario sesion,float *pesos);           //BOTON 8
int fotocopiadora(stUsuario sesion,float *pesos);   //BOTON 9

//ADMINSITRADORES
int administradores();                              //BOTON 2
void pantallaAdministradores();

//COLORES
int color(int num);

int main()
{
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
        printf(" ");
        color(159);
        printf("     ");
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
        printf("  ");
        color(159);
        printf("    ");
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
        printf(" 31/05/22 ");
        color(0);
        printf(" \n");
    }
}

//ALUMNOS
void alumnos()
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
void pantallaAlumnos()
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
        printf(" ");
        color(159);
        printf("     ");
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
        printf("  ");
        color(159);
        printf("    ");
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
int iniciarSesionAlumno()
{
    int flag=0,boton;
    stUsuario sesion,cuenta;
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
        printf(" NOMBRE DE USUARIO: ");
        color(15);
    }
    fflush(stdin);
    gets(sesion.usuario);
    FILE *archivo=fopen("Usuarios","rb");
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
    system("cls");
    while(flag!=1)
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
            printf(" ");
            color(79);
            printf(" USUARIO NO ENCONTRADO ");
            color(249);
            printf("                                                                          ");
            color(0);
            printf(" \n");
        }
        {   //SUBCABECERA 7
            color(128);
            printf(" NOMBRE DE USUARIO: ");
            color(15);
        }
        fflush(stdin);
        gets(sesion.usuario);
        FILE *archivo=fopen("Usuarios","rb");
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
        system("cls");
    }
    flag=0;
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
        printf(" CONTRASENA: ");
        color(15);
    }
    fflush(stdin);
    gets(sesion.contrasena);
    archivo=fopen("Usuarios","rb");
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
    system("cls");
    while(flag!=1)
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
            printf(" ");
            color(79);
            printf(" CONTRASENA INCORRECTA ");
            color(249);
            printf("                                                                          ");
            color(0);
            printf(" \n");
        }
        {   //SUBCABECERA 10
            color(128);
            printf(" CONTRASENA: ");
            color(15);
        }
        fflush(stdin);
        gets(sesion.contrasena);
        FILE *archivo=fopen("Usuarios","rb");
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
        system("cls");
    }
    do
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
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        {   //SUBCABECERA 10
            color(128);
            printf(" CONTRASENA: %-36s ",sesion.contrasena);
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
        {   //LINEA 13
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        {   //LINEA 14
            color(249);
            printf("                                                                                                  ");
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
            printf(" 31/05/22 ");
            color(0);
            printf(" \n");
        }
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=1 && boton!=0);
    if(boton==1)
    {
        FILE *archivo=fopen("Usuarios","rb");
        if(archivo!=NULL)
        {
            while((fread(&cuenta,sizeof(stUsuario),1,archivo)>0))
            {
                if(strcmp(sesion.usuario,cuenta.usuario)==0)
                {
                    iniciando();
                    system("cls");
                    boton=ventanasAlumnos(cuenta,boton);
                }
            }
            fclose (archivo);
        }
    }
    return boton;
}
void iniciando()
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
        printf(" ");
        color(159);
        printf("     ");
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
        printf("  ");
        color(159);
        printf("    ");
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

void pantalla1CrearCuenta()
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
void pantalla2CrearCuenta(int ronda,stUsuario datos)
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
    if(ronda==1)
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(" \n");
    }
    else
    {   //LINEA 9
        color(249);
        printf(" ");
        color(79);
        printf(" ESE NUMERO DE DOCUMENTO YA ESTA REGISTRADO ");
        color(249);
        printf("                                                     ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE SU NUMERO DE DOCUMENTO: ");
        color(15);
    }
}
void pantalla3CrearCuenta(stUsuario datos)
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
        printf(" INGRESE SU EDAD: ");
        color(15);
    }
}
void pantalla4CrearCuenta(int ronda,stUsuario datos)
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
        printf(" EDAD: %-42i ",datos.edad);
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



int crearCuentaAlumno()
{
    stUsuario datos,datosAux;
    int boton,ronda=1,repetido=1,flag=0;
    //NOMBRE
    pantalla1CrearCuenta();
    fflush(stdin);
    gets(datos.nombre);
    system("cls");
    //DOCUMENTO
    while(repetido==1)
    {
        pantalla2CrearCuenta(ronda,datos);
        scanf("%i",&datos.dni);
        FILE *archivoUsuarios=fopen("Usuarios","rb");
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
    //VER SI SE HACE CON FECHA DE NACIMIENTO
    pantalla3CrearCuenta(datos);
    scanf("%i",&datos.edad);
    system("cls");
    //USUARIO
    ronda=1;
    repetido=1;
    flag=0;
    while(repetido==1)
    {
        pantalla4CrearCuenta(ronda,datos);
        fflush(stdin);
        gets(datos.usuario);
        FILE *archivoUsuarios=fopen("Usuarios","rb");
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
    //CAMBIAR
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
        printf(" EDAD: %-42i ",datos.edad);
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
        printf(" ");
        color(79);
        printf(" DEBE TENER 8 CARACTERES COMO MINIMO ");
        color(249);
        printf("                                                            ");
        color(0);
        printf(" \n");
    }
    {   //SUBCABECERA 19
        color(128);
        printf(" INGRESE UNA CONTRASENA: ");
        color(15);
    }
    fflush(stdin);
    gets(datos.contrasena);
    system("cls");
    while(strlen(datos.contrasena)<8)
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
            printf(" EDAD: %-42i ",datos.edad);
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
            printf(" ");
            color(79);
            printf(" LA CONTRASENA NO TIENE 8 CARACTERES ");
            color(249);
            printf("                                                            ");
            color(0);
            printf(" \n");
        }
        {   //SUBCABECERA 19
            color(128);
            printf(" INGRESE UNA CONTRASENA: ");
            color(15);
        }
        fflush(stdin);
        gets(datos.contrasena);
        system("cls");
    }
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
        printf(" EDAD: %-42i ",datos.edad);
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
    {   //SUBCABECERA 22
        color(128);
        printf(" VUELVA A INGRESAR LA CONTRASENA: ");
        color(15);
    }
    fflush(stdin);
    gets(datosAux.contrasena);
    system("cls");
    while(strcmp(datos.contrasena,datosAux.contrasena)!=0)
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
            printf(" EDAD: %-42i ",datos.edad);
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
            printf(" ");
            color(79);
            printf(" LAS CONTRASENAS NO COINCIDEN ");
            color(249);
            printf("                                                           ");
            color(0);
            printf(" \n");
        }
        {   //SUBCABECERA 22
            color(128);
            printf(" VUELVA A INGRESAR LA CONTRASENA: ");
            color(15);
        }
        fflush(stdin);
        gets(datosAux.contrasena);
        system("cls");
    }
    do
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
            printf(" EDAD: %-42i ",datos.edad);
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
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=1 && boton!=0);
    if(boton==1)
    {
        FILE *archivoUsuarios=fopen("Usuarios","ab");
        if(archivoUsuarios!=NULL)
        {
            fwrite(&datos,sizeof(stUsuario),1,archivoUsuarios);
            fclose(archivoUsuarios);
        }
        boton=0;
    }
    return boton;
}

//VENTANASALUMNOS
int ventanasAlumnos(stUsuario sesion,int boton)
{
    float pesos=0;
    do
    {
        switch(boton)
        {
            case 1:
            {
                system("cls");
                boton=estadoDeCuenta(sesion,pesos);
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
int estadoDeCuenta(stUsuario sesion,float pesos)        //BOTON 1
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
        {   //LINEA 12
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        {   //SUBCABECERA 13
            color(128);
            printf(" SALDO: $ %-39.2f ",sesion.saldo);
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
int datosPersonales(stUsuario sesion)                   //BOTON 2
{
    color(15);
    int boton;
    do
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
        {   //LINEA 12
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(" \n");
        }
        {   //SUBCABECERA 13
            color(128);
            printf(" DOCUMENTO: %-37i ",sesion.dni);
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
            printf(" EDAD: %-42i ",sesion.edad);
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
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=1 && boton!=0);
    return boton;
}
int deposito(stUsuario aux,float *pesos)                //BOTON 3
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
int pago(stUsuario sesion)                              //BOTON 4
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
int editarDatos(stUsuario sesion)                       //BOTON 5
{
    int boton=0;

    return boton;
}
int buffet(stUsuario sesion,float *pesos)               //BOTON 7
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
int cuota(stUsuario sesion,float *pesos)                //BOTON 8
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
int fotocopiadora(stUsuario sesion,float *pesos)        //BOTON 9
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
int administradores()
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
        while(boton!=1 && boton!=2 && boton!=0);
        switch(boton)
        {
            case 5:
            {
                system("cls");
                iniciarSesionAlumno();
                system("pause");
                system("cls");
            }
            break;
            case 6:
            {
                system("cls");
                crearCuentaAlumno();
                system("pause");
                system("cls");
            }
            break;
        }
    }
    while(boton!=0);
    return boton;
}
void pantallaAdministradores()
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
        printf(" ");
        color(159);
        printf("     ");
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
        printf("  ");
        color(159);
        printf("    ");
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

//COLOR
int color(int num)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),num);
	return 0;
}
