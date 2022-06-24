#include "pantallas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <time.h>
//COLORES
int color(int num)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),num);
    return 0;
}
//COORDENADAS
void gotoxy(int X,int Y)
{
    HANDLE hcon;
    hcon=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=X;
    dwPos.Y=Y;
    SetConsoleCursorPosition(hcon,dwPos);
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
//INICIO
void pantallaInicio()                                                       //PANTALLA INICIO
{
    alumnoLinea1();
    alumnoLinea2();
    linea3();
    linea4();
    linea5();
    linea6();
    linea7();
    linea8();
    linea9();
    linea10();
    linea11();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    adminLinea27();
}
//ALUMNOS
void pantallaAlumnos()                                                          //PANTALLA ALUMNOS
{
    crearIniciarLinea1();
    crearIniciarLinea2();
    linea3();
    alumnoLinea4();
    subcabecera();
    linea6();
    linea7();
    linea8();
    linea9();
    linea10();
    linea11();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
//CREAR CUENTA
void crearCuentaAlumnoPantalla1()                                                   //PANTALLA QUE PIDE NOMBRE
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    alumnoCrearLinea4();
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" INGRESE NOMBRE Y APELLIDO:                       ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    linea10();
    linea11();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void crearCuentaAlumnoPantalla2(int ronda,stUsuario datos)                          //PANTALLA QUE PIDE DOCUMENTO
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    alumnoCrearLinea4();
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    {   //LINEA 9
        switch(ronda)
        {
            case(1):
            {
                linea9();
            }
            break;
            case(2):
            {
                color(249);
                printf(" ");
                color(79);
                printf(" ESE NUMERO DE DOCUMENTO YA ESTA REGISTRADO ");
                color(249);
                printf("                                                     ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {
                color(249);
                printf(" ");
                color(79);
                printf(" INGRESE UN NUMERO DE DOCUMENTO VALIDO ");
                color(249);
                printf("                                                          ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE NUMERO DE DOCUMENTO:                     ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void crearCuentaAlumnoPantalla3(int ronda,int parte,stUsuario datos)                //PANTALLA QUE PIDE FECHA DE NACIMIENTO
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    alumnoCrearLinea4();
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    {   //LOGO 12
        if(ronda==1)
        {
            logo12();
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" INGRESE UNA FECHA VALIDA ");
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA + LOGO 13
        switch(parte)
        {
            case(1):
            {   //SUBCABECERA 13
                color(128);
                printf(" INGRESE SU FECHA DE NACIMIENTO (DIA):            ");
                color(15);
            }
            break;
            case(2):
            {   //SUBCABECERA 13
                color(128);
                printf(" INGRESE SU FECHA DE NACIMIENTO (MES):            ");
                color(15);
            }
            break;
            case(3):
            {   //SUBCABECERA 13
                color(128);
                printf(" INGRESE SU FECHA DE NACIMIENTO (ANO):            ");
                color(15);
            }
            break;
        }
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void crearCuentaAlumnoPantalla4(int ronda,stUsuario datos)                          //PANTALLA QUE PIDE USUARIO
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    alumnoCrearLinea4();
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
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
        printf(".\n");
    }
    semiLogo14();
    {   //LOGO 15
        if(ronda==1)
        {
            logo15();
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" ESE NOMBRE DE USUARIO YA ESTA REGISTRADO ");
            color(159);
            printf("  ");
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA + LOGO 16
        color(128);
        printf(" ESCRIBA NOMBRE DE USUARIO:                       ");
        color(159);
        printf("     ");
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
        printf(".\n");
    }
    semiLogo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void crearCuentaAlumnoPantalla5(int ronda,stUsuario datos)                          //PANTALLA QUE PIDE CONTRASENA
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    alumnoCrearLinea4();
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    {   //SUBCABECERA + LOGO 16
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(159);
        printf("     ");
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
        printf(".\n");
    }
    semiLogo17();
    {   //LOGO 18
        if(ronda==1)
        {
            color(249);
            printf(" ");
            color(79);
            printf(" DEBE TENER 8 CARACTERES COMO MINIMO ");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" LA CONTRASENA NO TIENE 8 CARACTERES ");
        }
        color(159);
        printf("       ");
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
        printf(".\n");
    }
    {   //SUBCABECERA + LOGO 19
        color(128);
        printf(" INGRESE UNA CONTRASENA:                          ");
        color(249);
        printf("  ");
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
        printf(".\n");
    }
    semiLogo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void crearCuentaAlumnoPantalla6(int ronda,stUsuario datos)                          //PANTALLA QUE PIDE REPETIR CONTRASENA
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    alumnoCrearLinea4();
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    {   //SUBCABECERA + LOGO 16
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(159);
        printf("     ");
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
        printf(".\n");
    }
    semiLogo17();
    logo18();
    {   //SUBCABECERA + LOGO 19
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
        color(249);
        printf("  ");
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
        printf(".\n");
    }
    semiLogo20();
    {   //LINEA 21
        if(ronda==1)
        {
            linea21();
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" LAS CONTRASENAS NO COINCIDEN ");
            color(249);
            printf("                                                                   ");
            color(0);
            printf(".\n");
        }
    }
    {   //SUBCABECERA 22
        color(128);
        printf(" VUELVA A INGRESAR LA CONTRASENA:                 ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea24();
    linea25();
    linea26();
    linea27();
}
void crearCuentaAlumnoPantalla7(stUsuario datos)                                    //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    alumnoCrearLinea4();
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    {   //SUBCABECERA + LOGO 16
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(159);
        printf("     ");
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
        printf(".\n");
    }
    semiLogo17();
    logo18();
    {   //SUBCABECERA + LOGO 19
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
        color(249);
        printf("  ");
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
        printf(".\n");
    }
    semiLogo20();
    linea21();
    linea22();
    linea23();
    linea24();
    crearLinea24();
    crearLinea25();
    linea27();
}
//VENTANAS
void estadoDeCuentaAlumnoPantalla(stUsuario sesion,int acceso)                      //PANTALLA ESTADO DE LA CUENTA DEL ALUMNO
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        if(acceso==0)
        {
            datCerrarLinea1();
        }
        else
        {
            datVolverLinea1();
        }
    }
    {   //CABECERA 2
        if(acceso==0)
        {
            datCerrarLinea2();
        }
        else
        {
            datVolverLinea2();
        }
    }
    linea3();
    {   //SUBCABECERA 4
        if(acceso==0)
        {
            alumnoLinea4();
        }
        else
        {
            adminUTNLinea4();
        }
    }
    subcabecera();
    linea6();
    estadoLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",sesion.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" CONTRASENA: %-36s ",sesion.contrasena);
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    {   //SUBCABECERA + LOGO 16
        color(128);
        printf(" SALDO: $ %-39.2f ",sesion.saldo);
        color(159);
        printf("     ");
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
        printf(".\n");
    }
    semiLogo17();
    logo18();
    {   //SUBCABECERA + LOGO 19
        color(128);
        printf(" ESTADO: %-40i ",sesion.estado);
        color(249);
        printf("  ");
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
        printf(".\n");
    }
    semiLogo20();
    linea21();
    linea22();
    linea23();
    {   //LINEA 24
        if(acceso==0)
        {
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
            printf(".\n");
        }
        else
        {
            color(249);
            printf("                                                              ");
            color(159);
            printf(" DAR DE ALTA (3) ");
            color(249);
            printf(" ");
            color(159);
            printf(" DAR DE BAJA (4) ");
            color(249);
            printf(" ");
            color(0);
            printf(".\n");
        }
    }
    {   //LINEA 25
        if(acceso==0)
        {
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
            printf(".\n");
        }
        else
        {
            color(249);
            printf("                                                              ");
            color(159);
            printf("                 ");
            color(249);
            printf(" ");
            color(159);
            printf("                 ");
            color(249);
            printf(" ");
            color(0);
            printf(".\n");
        }
    }
    linea26();
    {   //LINEA 27
        color(144);
        printf(" ");
        color(63);
        printf(" HISTORIAL (5) ");
        color(144);
        printf("         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
void datosPersonalesPantalla(stUsuario sesion,int acceso)                           //PANTALLA DATOS PERSONALES DEL ALUMNO
{
    {   //CABECERA 1
        if(acceso==0)
        {
            estCerrarLinea1();
        }
        else
        {
            estVolverLinea1();
        }
    }
    {   //CABECERA 2
        if(acceso==0)
        {
            estCerrarLinea2();
        }
        else
        {
            estVolverLinea2();
        }
    }
    linea3();
    {   //SUBCABECERA 4
        if(acceso==0)
        {
            alumnoLinea4();
        }
        else
        {
            adminUTNLinea4();
        }
    }
    subcabecera();
    linea6();
    datosLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE: %-40s ",sesion.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
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
        printf(".\n");
    }
    semiLogo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void depositoPantalla1(int ronda)                                                   //PANTALLA DEPOSITO QUE PIDE MONTO
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    alumnoLinea4();
    subcabecera();
    linea6();
    depositarlinea7();
    subcabecera();
    {   //LINEA 9
        if(ronda!=1)
        {
            color(249);
            printf(" ");
            color(79);
            printf(" INGRESE UN MONTO VALIDO ");
            color(249);
            printf("                                                                        ");
            color(0);
            printf(".\n");
        }
        else
        {
            linea9();
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $                                         ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void depositoPantalla2(stToken transaccion)                                         //PANTALLA DEPOSITO QUE PIDE CONFIRMAR/CANCELAR
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    alumnoLinea4();
    subcabecera();
    linea6();
    depositarlinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    generarLinea24();
    generarLinea25();
    linea26();
    linea27();
}
void depositoPantalla3(stToken transaccion)                                         //PANTALLA DEPOSITO QUE MUESTRA TOKEN
{
    linea1();
    linea2();
    linea3();
    alumnoLinea4();
    subcabecera();
    linea6();
    depositarlinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    {   //TOKEN + LOGO 16
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
        printf(" ");
        color(79);
        printf(" TOKEN: %05i ",transaccion.token);
        color(159);
        printf("  ");
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
        printf(".\n");
    }
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
    sleep(5);
}
void pagoPantalla1()                                                                //PANTALLA PAGO QUE PIDE TOKEN
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    alumnoLinea4();
    subcabecera();
    linea6();
    pagarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE EL TOKEN:                                ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void pagoPantalla2(int token)                                                       //PANTALLA PAGO QUE MUESTRA TOKEN
{
    linea1();
    linea2();
    linea3();
    alumnoLinea4();
    subcabecera();
    linea6();
    pagarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    buscandoTokenLogo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
    sleep(2);
}
void pagoPantalla3(stToken taux)                                                    //PANTALLA PAGO DEL CONFIRMAR/CANCELAR
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    alumnoLinea4();
    subcabecera();
    linea6();
    pagarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",taux.destino);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" DNI: %-43i ",taux.dni);
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    {   //SUBCABECERA + LOGO 16
        color(128);
        printf(" MONTO: $ %-39.2f ",taux.monto);
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
        printf(".\n");
    }
    semiLogo17();
    logo18();
    {   //SUBCABECERA + LOGO 19
        color(128);
        printf(" DETALLE: %-39s ",taux.detalle);
        color(249);
        printf("  ");
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
        printf(".\n");
    }
    semiLogo20();
    linea21();
    {   //SUBCABECERA 22
        if(taux.acreditado==0)
        {
            color(128);
            printf(" ACREDITADO: NO                                   ");
            color(249);
            printf("                                                ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(128);
            printf(" ACREDITADO: SI                                   ");
            color(249);
            printf("                                                ");
            color(0);
            printf(".\n");
        }
    }
    semiSubcabecera();
    confirmarLinea24();
    confirmarLinea25();
    linea26();
    linea27();
}
void pagoPantalla4(int token)                                                       //PANTALLA PAGO TOKEN NO ENCONTRADO
{
    linea1();
    linea2();
    linea3();
    alumnoLinea4();
    subcabecera();
    linea6();
    pagarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    tokenNoEncontradoLogo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
    sleep(2);
}
void pagoPantalla5(int token)                                                       //PANTALLA PAGO SALDO INSUFICIENTE
{
    linea1();
    linea2();
    linea3();
    alumnoLinea4();
    subcabecera();
    linea6();
    pagarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    saldoInsuficienteLogo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
    sleep(2);
}
void historialPantalla1()                                                           //PANTALLA HISTORIAL PRINCIPIO
{
    volverLinea1();
    volverLinea2();
    linea3();
    alumnoLinea4();
    subcabecera();
    linea6();
    historialLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" FECHA    - ORIGEN          - DESTINO         - TOKEN - MONTO      - DETALLE            - ESTADO  ");
        color(0);
        printf(".\n");
    }
    subcabecera();
    linea9();
}
int historialPantalla2(stToken aux,int flag)                                        //PANTALLA HISTORIAL EXISTENTE
{
    {   //SUBCABECERA 13
        if(flag==0)
        {
            color(128);
            printf(" %02i/%02i/%i%i - %-15s - %-15s - %i -",aux.fecha.dia,aux.fecha.mes,(aux.fecha.ano%100)/10,aux.fecha.ano%10,aux.origen,aux.destino,aux.token);
            if(strcmp(aux.origen,"UTN")==0)
            {
                color(32);
            }
            else
            {
                color(192);
            }
            printf(" $ %8.2f ",aux.monto);
            color(128);
            printf("- %-18s - ",aux.detalle);
            if(aux.acreditado==1)
            {
                printf("PAGO    ");
            }
            else
            {
                printf("NO PAGO ");
            }
            color(0);
            printf(".\n");
            flag=1;
        }
        else
        {
            color(159);
            printf(" %02i/%02i/%i%i - %-15s - %-15s - %i -",aux.fecha.dia,aux.fecha.mes,(aux.fecha.ano%100)/10,aux.fecha.ano%10,aux.origen,aux.destino,aux.token);
            if(strcmp(aux.origen,"UTN")==0)
            {
                color(47);
            }
            else
            {
                color(207);
            }
            printf(" $ %8.2f ",aux.monto);
            color(159);
            printf("- %-18s - ",aux.detalle);
            if(aux.acreditado==1)
            {
                printf("PAGO    ");
            }
            else
            {
                printf("NO PAGO ");
            }
            color(0);
            printf(".\n");
            flag=0;
        }
    }
    return flag;
}
int historialPantalla3(int flag)                                                    //PANTALLA HISTORIAL NO EXISTENTE
{
    {   //SUBCABECERA 13
        if(flag==0)
        {
            color(128);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
            flag=1;
        }
        else
        {
            color(159);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
            flag=0;
        }
    }
    return flag;
}
void historialPantalla4(int ultimo)                                                 //PANTALLA HISTORIAL FIN
{
    linea23();
    {   //LINEA 24
        if(ultimo==1)
        {
            color(249);
            printf("                                                                                  ");
            color(159);
            printf(" PRINCIPIO (4) ");
            color(249);
            printf(" ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(249);
            printf("                                                                                  ");
            color(159);
            printf(" SIGUIENTE (4) ");
            color(249);
            printf(" ");
            color(0);
            printf(".\n");
        }
    }
    siguientePrincipioLinea25();
    linea26();
    linea27();
}
//ADMINS
void pantallaAdministradores()                                                  //PANTALLA ADMINISTRADORES
{
    crearIniciarLinea1();
    crearIniciarLinea2();
    linea3();
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR                                                                                    ");
        color(0);
        printf(".\n");
    }
    subcabecera();
    linea6();
    linea7();
    linea8();
    linea9();
    linea10();
    linea11();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
//CREAR CUENTA
void claveAdmin()                                                                   //PANTALLA QUE PIDE CLAVE DE ADMIN
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR: CREAR CUENTA                                                                      ");
        color(0);
        printf(".\n");
    }
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" CLAVE DE ADMINISTRADOR:                          ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    linea10();
    linea11();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void crearCuentaAdminPantalla1(stAdmin datos)                                       //PANTALLA QUE PIDE NOMBRE
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case(1):
            {
                UTNCrearLinea4();
            }
            break;
            case(2):
            {
                buffetCrearLinea4();
            }
            break;
            case(3):
            {
                fotocopiadoraCrearLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" INGRESE NOMBRE Y APELLIDO:                       ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    linea10();
    linea11();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void crearCuentaAdminPantalla2(int ronda,stAdmin datos)                             //PANTALLA QUE PIDE USUARIO
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case(1):
            {
                UTNCrearLinea4();
            }
            break;
            case(2):
            {
                buffetCrearLinea4();
            }
            break;
            case(3):
            {
                fotocopiadoraCrearLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    {   //LINEA 9
        if(ronda==1)
        {
            linea9();
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE NOMBRE DE USUARIO:                       ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void crearCuentaAdminPantalla3(int ronda,stAdmin datos)                             //PANTALLA QUE PIDE CONTRASENA
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case(1):
            {
                UTNCrearLinea4();
            }
            break;
            case(2):
            {
                buffetCrearLinea4();
            }
            break;
            case(3):
            {
                fotocopiadoraCrearLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    {   //LOGO 12
        if(ronda==1)
        {
            color(249);
            printf(" ");
            color(79);
            printf(" DEBE TENER 8 CARACTERES COMO MINIMO ");
            color(159);
            printf(" ");
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
            printf(".\n");
        }
        else
        {
            color(249);
            printf(" ");
            color(79);
            printf(" LA CONTRASENA NO TIENE 8 CARACTERES ");
            printf(" ");
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" INGRESE UNA CONTRASENA:                          ");
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void crearCuentaAdminPantalla4(int ronda,stAdmin datos)                             //PANTALLA QUE PIDE REPETIR CONTRASENA
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case(1):
            {
                UTNCrearLinea4();
            }
            break;
            case(2):
            {
                buffetCrearLinea4();
            }
            break;
            case(3):
            {
                fotocopiadoraCrearLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    {   //SUBCABECERA + LOGO 16
        color(128);
        printf(" VUELVA A INGRESAR LA CONTRASENA:                 ");
        color(159);
        printf("     ");
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
        printf(".\n");
    }
    semiLogo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void crearCuentaAdminPantalla5(stAdmin datos)                                       //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case(1):
            {
                UTNCrearLinea4();
            }
            break;
            case(2):
            {
                buffetCrearLinea4();
            }
            break;
            case(3):
            {
                fotocopiadoraCrearLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    crearLinea24();
    crearLinea25();
    linea26();
    linea27();
}
//VENTANAS
void estadoDeCuentaAdminPantalla(stAdmin sesion)                                    //PANTALLA ESTADO DE LA CUENTA DEL ADMIN
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        if(sesion.tipo==1)
        {
            color(159);
            printf(" UTN WALLET                            ");
            color(63);
            printf(" LISTA ALUMNOS (5) ");
            color(159);
            printf(" ");
            color(63);
            printf(" BUSCAR ALUMNO (9) ");
            color(159);
            printf(" ");
            color(79);
            printf(" CERRAR SESION (0) ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(159);
            printf(" UTN WALLET                                                                    ");
            color(79);
            printf(" CERRAR SESION (0) ");
            color(0);
            printf(".\n");
        }
    }
    {   //CABECERA 2
        if(sesion.tipo==1)
        {
            color(159);
            printf("                                       ");
            color(63);
            printf("                   ");
            color(159);
            printf(" ");
            color(63);
            printf("                   ");
            color(159);
            printf(" ");
            color(79);
            printf("                   ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(159);
            printf("                                                                               ");
            color(79);
            printf("                   ");
            color(0);
            printf(".\n");
        }
    }
    linea3();
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(1):
            {
                adminUTNLinea4();
            }
            break;
            case(2):
            {
                adminBuffetLinea4();
            }
            break;
            case(3):
            {
                adminFotocopiadoraLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    estadoLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",sesion.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    {   //LINEA 24
        if(sesion.tipo==1)
        {
            color(249);
            printf("                                                       ");
            color(159);
            printf(" RETIRAR (7) ");
            color(249);
            printf(" ");
            color(159);
            printf(" DEPOSITAR (3) ");
            color(249);
            printf(" ");
            color(159);
            printf(" COBRAR (4) ");
            color(249);
            printf(" ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(249);
            printf("                                                                                     ");
            color(159);
            printf(" COBRAR (4) ");
            color(249);
            printf(" ");
            color(0);
            printf(".\n");
        }
    }
    {   //LINEA 25
        if(sesion.tipo==1)
        {
            color(249);
            printf("                                                       ");
            color(159);
            printf("             ");
            color(249);
            printf(" ");
            color(159);
            printf("               ");
            color(249);
            printf(" ");
            color(159);
            printf("            ");
            color(249);
            printf(" ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(249);
            printf("                                                                                     ");
            color(159);
            printf("            ");
            color(249);
            printf(" ");
            color(0);
            printf(".\n");
        }
    }
    linea26();
    {   //LINEA 27
        color(144);
        printf(" ");
        color(63);
        if(sesion.tipo==1)
        {
            printf(" HISTORIAL (8) ");
            color(144);
            printf("     ");
        }
        else
        {
            printf(" RETIRAR DINERO (6) ");
            color(144);
        }
        printf("    AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
void adminDepositoPantalla1()                                                       //PANTALLA DEPOSITO QUE PIDE TOKEN
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    adminUTNLinea4();
    subcabecera();
    linea6();
    depositarlinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE EL TOKEN:                                ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void adminDepositoPantalla2(int token)                                              //PANTALLA DEPOSITO QUE MUESTRA TOKEN
{
    linea1();
    linea2();
    linea3();
    adminUTNLinea4();
    subcabecera();
    linea6();
    depositarlinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    buscandoTokenLogo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
    sleep(2);
}
void adminDepositoPantalla3(stToken taux)                                           //PANTALLA DEPOSITO DEL CONFIRMAR/CANCELAR
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    adminUTNLinea4();
    subcabecera();
    linea6();
    depositarlinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",taux.destino);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" DNI: %-43i ",taux.dni);
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    {   //SUBCABECERA + LOGO 16
        color(128);
        printf(" MONTO: $ %-39.2f ",taux.monto);
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
        printf(".\n");
    }
    semiLogo17();
    logo18();
    {   //SUBCABECERA + LOGO 19
        color(128);
        printf(" DETALLE: %-39s ",taux.detalle);
        color(249);
        printf("  ");
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
        printf(".\n");
    }
    semiLogo20();
    linea21();
    {   //SUBCABECERA + LOGO 22
        if(taux.acreditado==0)
        {
            color(128);
            printf(" ACREDITADO: NO                                   ");
            color(249);
            printf("                                                ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(128);
            printf(" ACREDITADO: SI                                   ");
            color(249);
            printf("                                                ");
            color(0);
            printf(".\n");
        }
    }
    semiSubcabecera();
    confirmarLinea24();
    confirmarLinea25();
    linea26();
    linea27();
}
void adminDepositoPantalla4(int token)                                              //PANTALLA DEPOSITO TOKEN NO ENCONTRADO
{
    linea1();
    linea2();
    linea3();
    adminUTNLinea4();
    subcabecera();
    linea6();
    depositarlinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    tokenNoEncontradoLogo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
    sleep(2);
}
void adminPagoPantalla1(int ronda,int acceso,stAdmin sesion)                        //PANTALLA PAGO QUE PIDE DOCUMENTO
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(1):
            {
                adminUTNLinea4();
            }
            break;
            case(2):
            {
                adminBuffetLinea4();
            }
            break;
            case(3):
            {
                adminFotocopiadoraLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        if(acceso==1)
        {
            color(128);
            printf(" BUSCAR ALUMNO                                                                                    ");
            color(0);
            printf(".\n");
        }
        else
        {
            cobrarLinea7();
        }
    }
    subcabecera();
    {   //LINEA 9
        if(ronda!=1)
        {
            color(249);
            printf(" ");
            color(79);
            printf(" INGRESE UN DOCUMENTO VALIDO ");
            color(249);
            printf("                                                                    ");
            color(0);
            printf(".\n");
        }
        else
        {
            linea9();
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" DOCUMENTO:                                       ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void adminPagoPantalla2(int ronda,stAdmin sesion)                                   //PANTALLA PAGO QUE PIDE MONTO
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(1):
            {
                adminUTNLinea4();
            }
            break;
            case(2):
            {
                adminBuffetLinea4();
            }
            break;
            case(3):
            {
                adminFotocopiadoraLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    cobrarLinea7();
    subcabecera();
    {   //LINEA 9
        if(ronda!=1)
        {
            color(249);
            printf(" ");
            color(79);
            printf(" INGRESE UN MONTO VALIDO ");
            color(249);
            printf("                                                                        ");
            color(0);
            printf(".\n");
        }
        else
        {
            linea9();
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $                                         ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void adminPagoPantalla3(stToken transaccion,stAdmin sesion)                         //PANTALLA PAGO QUE PIDE CONFIRMAR/CANCELAR
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(1):
            {
                adminUTNLinea4();
            }
            break;
            case(2):
            {
                adminBuffetLinea4();
            }
            break;
            case(3):
            {
                adminFotocopiadoraLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    cobrarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    generarLinea24();
    generarLinea25();
    linea26();
    linea27();
}
void adminPagoPantalla4(stToken transaccion,stAdmin sesion)                         //PANTALLA PAGO QUE MUESTRA TOKEN
{
    linea1();
    linea2();
    linea3();
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(1):
            {
                adminUTNLinea4();
            }
            break;
            case(2):
            {
                adminBuffetLinea4();
            }
            break;
            case(3):
            {
                adminFotocopiadoraLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    cobrarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    {   //TOKEN + LOGO 16
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
        printf(" ");
        color(79);
        printf(" TOKEN: %05i ",transaccion.token);
        color(159);
        printf("  ");
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
        printf(".\n");
    }
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
    sleep(5);
}
void listaUsuariosPantalla1()                                                       //PANTALLA LISTA DE USUARIOS PRINCIPIO
{
    volverLinea1();
    volverLinea2();
    linea3();
    adminUTNLinea4();
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        color(128);
        printf(" LISTADO DE USUARIOS                                                                              ");
        color(0);
        printf(".\n");
    }
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" ESTADO   - NOMBRE Y APELLIDO    - DOCUMENTO - SALDO                                              ");
        color(0);
        printf(".\n");
    }
    subcabecera();
    linea9();
}
int listaUsuariosPantalla2(stUsuario aux,int flag)                                  //PANTALLA USUARIO EXISTENTE
{
    {   //SUBCABECERA 13
        if(flag==0)
        {
            if(aux.estado==1)
            {
                color(32);
                printf(" ACTIVO   ");
            }
            else
            {
                color(192);
                printf(" INACTIVO ");
            }
            color(128);
            printf("- %-20s - %-9i - $ %8.2f                                         ",aux.nombre,aux.dni,aux.saldo);
            color(0);
            printf(".\n");
            flag=1;
        }
        else
        {
            if(aux.estado==1)
            {
                color(47);
                printf(" ACTIVO   ");
            }
            else
            {
                color(207);
                printf(" INACTIVO ");
            }
            color(159);
            printf("- %-20s - %-9i - $ %8.2f                                         ",aux.nombre,aux.dni,aux.saldo);
            color(0);
            printf(".\n");
            flag=0;
        }
    }
    return flag;
}
int listaUsuariosPantalla3(int flag)                                                //PANTALLA USUARIO NO EXISTENTE
{
    {   //SUBCABECERA 13
        if(flag==0)
        {
            color(128);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
            flag=1;
        }
        else
        {
            color(159);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
            flag=0;
        }
    }
    return flag;
}
void listaUsuariosPantalla4(int ultimo)                                             //PANTALLA LISTA DE USUARIOS FIN
{
    linea23();
    {   //LINEA 24
        if(ultimo==1)
        {
            color(249);
            printf("                                                                                  ");
            color(159);
            printf(" PRINCIPIO (4) ");
            color(249);
            printf(" ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(249);
            printf("                                                                                  ");
            color(159);
            printf(" SIGUIENTE (4) ");
            color(249);
            printf(" ");
            color(0);
            printf(".\n");
        }
    }
    siguientePrincipioLinea25();
    linea26();
    linea27();
}
void retiroPantalla1(int ronda,stAdmin sesion)                                      //PANTALLA RETIRO QUE PIDE MONTO
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(2):
            {
                adminBuffetLinea4();
            }
            break;
            case(3):
            {
                adminFotocopiadoraLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    retirarLinea7();
    subcabecera();
    {   //LINEA 9
        if(ronda!=1)
        {
            color(249);
            printf(" ");
            color(79);
            printf(" INGRESE UN MONTO VALIDO ");
            color(249);
            printf("                                                                        ");
            color(0);
            printf(".\n");
        }
        else
        {
            linea9();
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $                                         ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void retiroPantalla2(stToken transaccion,stAdmin sesion)                            //PANTALLA RETIRO QUE PIDE CONFIRMAR/CANCELAR
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(2):
            {
                adminBuffetLinea4();
            }
            break;
            case(3):
            {
                adminFotocopiadoraLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    retirarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    generarLinea24();
    generarLinea25();
    linea26();
    linea27();
}
void retiroPantalla3(stToken transaccion,stAdmin sesion)                            //PANTALLA RETIRO QUE MUESTRA TOKEN
{
    linea1();
    linea2();
    linea3();
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(1):
            {
                adminUTNLinea4();
            }
            break;
            case(2):
            {
                adminBuffetLinea4();
            }
            break;
            case(3):
            {
                adminFotocopiadoraLinea4();
            }
            break;
        }
    }
    subcabecera();
    linea6();
    retirarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    {   //TOKEN + LOGO 16
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
        printf(" ");
        color(79);
        printf(" TOKEN: %05i ",transaccion.token);
        color(159);
        printf("  ");
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
        printf(".\n");
    }
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
    sleep(5);
}
void adminRetiroPantalla1()                                                         //PANTALLA RETIRO QUE PIDE TOKEN
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    adminUTNLinea4();
    subcabecera();
    linea6();
    retirarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE EL TOKEN:                                ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void adminRetiroPantalla2(int token)                                                //PANTALLA RETIRO QUE MUESTRA TOKEN
{
    linea1();
    linea2();
    linea3();
    adminUTNLinea4();
    subcabecera();
    linea6();
    retirarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    buscandoTokenLogo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
    sleep(2);
}
void adminRetiroPantalla3(stToken taux)                                             //PANTALLA RETIRO DEL CONFIRMAR/CANCELAR
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    adminUTNLinea4();
    subcabecera();
    linea6();
    retirarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",taux.destino);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    {   //SUBCABECERA + LOGO 13
        color(128);
        printf(" DNI: %-43i ",taux.dni);
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
        printf(".\n");
    }
    semiLogo14();
    logo15();
    {   //SUBCABECERA + LOGO 16
        color(128);
        printf(" MONTO: $ %-39.2f ",taux.monto);
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
        printf(".\n");
    }
    semiLogo17();
    logo18();
    {   //SUBCABECERA + LOGO 19
        color(128);
        printf(" DETALLE: %-39s ",taux.detalle);
        color(249);
        printf("  ");
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
        printf(".\n");
    }
    semiLogo20();
    linea21();
    {   //SUBCABECERA + LOGO 22
        if(taux.acreditado==0)
        {
            color(128);
            printf(" ACREDITADO: NO                                   ");
            color(249);
            printf("                                                ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(128);
            printf(" ACREDITADO: SI                                   ");
            color(249);
            printf("                                                ");
            color(0);
            printf(".\n");
        }
    }
    semiSubcabecera();
    confirmarLinea24();
    confirmarLinea25();
    linea26();
    linea27();
}
void adminRetiroPantalla4(int token)                                                //PANTALLA RETIRO TOKEN NO ENCONTRADO
{
    linea1();
    linea2();
    linea3();
    adminUTNLinea4();
    subcabecera();
    linea6();
    retirarLinea7();
    subcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    tokenNoEncontradoLogo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
    sleep(2);
}
//INICIAR SESION
void iniciarSesionPantalla1(int ronda,int acceso)                                   //PANTALLA QUE PIDE USUARIO
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        if(acceso==0)
        {
            alumnoIniciarLinea4();
        }
        else
        {
            adminIniciarLinea4();
        }
    }
    subcabecera();
    {   //LINEA 6
        if(ronda==1)
        {
            linea6();
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE DE USUARIO:                               ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    linea9();
    linea10();
    linea11();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void iniciarSesionPantalla2(int ronda,int acceso,stUsuario sesion,stAdmin admin)    //PANTALLA QUE PIDE CONTRASENA
{
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        if(acceso==0)
        {
            alumnoIniciarLinea4();
        }
        else
        {
            adminIniciarLinea4();
        }
    }
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        if(acceso==0)
        {
            color(128);
            printf(" NOMBRE DE USUARIO: %-29s ",sesion.usuario);
            color(249);
            printf("                                                ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(128);
            printf(" NOMBRE DE USUARIO: %-29s ",admin.usuario);
            color(249);
            printf("                                                ");
            color(0);
            printf(".\n");
        }
    }
    semiSubcabecera();
    {   //LINEA 9
        if(ronda==1)
        {
            linea9();
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" CONTRASENA:                                      ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
}
void iniciarSesionPantalla3(int acceso,stUsuario sesion,stAdmin admin)              //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
{
    int i;
    char contrasena[20];
    if(acceso==0)
    {
        for(i=0;i<strlen(sesion.contrasena)-8;i++)
        {
            contrasena[i]='*';
        }
    }
    else
    {
        for(i=0;i<strlen(admin.contrasena)-8;i++)
        {
            contrasena[i]='*';
        }
    }
    cancelarLinea1();
    cancelarLinea2();
    linea3();
    {   //SUBCABECERA 4
        if(acceso==0)
        {
            alumnoIniciarLinea4();
        }
        else
        {
            adminIniciarLinea4();
        }
    }
    subcabecera();
    linea6();
    {   //SUBCABECERA 7
        if(acceso==0)
        {
            color(128);
            printf(" NOMBRE DE USUARIO: %-29s ",sesion.usuario);
            color(249);
            printf("                                                ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(128);
            printf(" NOMBRE DE USUARIO: %-29s ",admin.usuario);
            color(249);
            printf("                                                ");
            color(0);
            printf(".\n");
        }
    }
    semiSubcabecera();
    linea9();
    {   //SUBCABECERA 10
        color(128);
        printf(" CONTRASENA: ********%-28s ",contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    semiSubcabecera();
    logo12();
    logo13();
    logo14();
    logo15();
    logo16();
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    {   //LINEA 24
        color(249);
        printf("                                                                             ");
        color(32);
        printf(" INICIAR SESION (1) ");
        color(249);
        printf(" ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                             ");
        color(32);
        printf("                    ");
        color(249);
        printf(" ");
        color(0);
        printf(".\n");
    }
    linea26();
    linea27();
}
void iniciandoPantalla(int acceso)                                                  //PANTALLA INICIANDO SESION
{
    linea1();
    linea2();
    linea3();
    {   //SUBCABECERA 4
        if(acceso==0)
        {
            alumnoLinea4();
        }
        else
        {
            color(128);
            printf(" ADMINISTRADOR                                                                                    ");
            color(0);
            printf(".\n");
        }
    }
    subcabecera();
    linea6();
    linea7();
    linea8();
    linea9();
    linea10();
    linea11();
    logo12();
    logo13();
    logo14();
    logo15();
    {   //INICIANDO + LOGO 16
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
        printf(".\n");
    }
    logo17();
    logo18();
    logo19();
    logo20();
    linea21();
    linea22();
    linea23();
    linea24();
    linea25();
    linea26();
    linea27();
    sleep(2);
}
//UNIVERSAL
void linea1()
{   //CABECERA 1
    color(159);
    printf(" UTN WALLET                                                                                       ");
    color(0);
    printf(".\n");
}
void linea2()
{   //CABECERA 2
    color(159);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea3()
{   //LINEA 3
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea4()
{   //LINEA 4
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea5()
{   //LINEA 5
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea6()
{   //LINEA 6
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea7()
{   //LINEA 7
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea8()
{   //LINEA 8
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea9()
{   //LINEA 9
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea10()
{   //LINEA 10
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea11()
{   //LINEA 11
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void logo12()
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
    printf(".\n");
}
void logo13()
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
    printf(".\n");
}
void logo14()
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
    printf(".\n");
}
void logo15()
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
    printf(".\n");
}
void logo16()
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
    printf(".\n");
}
void logo17()
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
    printf(".\n");
}
void logo18()
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
    printf(".\n");
}
void logo19()
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
    printf(".\n");
}
void logo20()
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
    printf(".\n");
}
void linea21()
{   //LINEA 21
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea22()
{   //LINEA 22
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea23()
{   //LINEA 23
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea24()
{   //LINEA 24
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea25()
{   //LINEA 25
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea26()
{   //LINEA 26
    color(249);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void linea27()
{   //LINEA 27
    stFecha fecha=fechaActual();
    color(144);
    printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
    color(128);
    printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
    color(0);
    printf(".\n");
}
void alumnoLinea1()
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
    printf(".\n");
}
void alumnoLinea2()
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
    printf(".\n");
}
void crearIniciarLinea1()
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
    printf(".\n");
}
void crearIniciarLinea2()
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
    printf(".\n");
}
void cancelarLinea1()
{   //CABECERA 1
    color(159);
    printf(" UTN WALLET                                                                         ");
    color(79);
    printf(" CANCELAR (0) ");
    color(0);
    printf(".\n");
}
void cancelarLinea2()
{   //CABECERA 2
    color(159);
    printf("                                                                                    ");
    color(79);
    printf("              ");
    color(0);
    printf(".\n");
}
void volverLinea1()
{   //CABECERA 1
    color(159);
    printf(" UTN WALLET                                                                           ");
    color(79);
    printf(" VOLVER (0) ");
    color(0);
    printf(".\n");
}
void volverLinea2()
{   //CABECERA 2
    color(159);
    printf("                                                                                      ");
    color(79);
    printf("            ");
    color(0);
    printf(".\n");
}
void datCerrarLinea1()
{   //CABECERA 1
    color(159);
    printf(" UTN WALLET                                             ");
    color(63);
    printf(" DATOS PERSONALES (2) ");
    color(159);
    printf(" ");
    color(79);
    printf(" CERRAR SESION (0) ");
    color(0);
    printf(".\n");
}
void datCerrarLinea2()
{   //CABECERA 2
    color(159);
    printf("                                                        ");
    color(63);
    printf("                      ");
    color(159);
    printf(" ");
    color(79);
    printf("                   ");
    color(0);
    printf(".\n");
}
void datVolverLinea1()
{   //CABECERA 1
    color(159);
    printf(" UTN WALLET                                                    ");
    color(63);
    printf(" DATOS PERSONALES (2) ");
    color(159);
    printf(" ");
    color(79);
    printf(" VOLVER (0) ");
    color(0);
    printf(".\n");
}
void datVolverLinea2()
{   //CABECERA 2
    color(159);
    printf("                                                               ");
    color(63);
    printf("                      ");
    color(159);
    printf(" ");
    color(79);
    printf("            ");
    color(0);
    printf(".\n");
}
void estCerrarLinea1()
{   //CABECERA 1
    color(159);
    printf(" UTN WALLET                                          ");
    color(63);
    printf(" ESTADO DE LA CUENTA (1) ");
    color(159);
    printf(" ");
    color(79);
    printf(" CERRAR SESION (0) ");
    color(0);
    printf(".\n");
}
void estCerrarLinea2()
{   //CABECERA 2
    color(159);
    printf("                                                     ");
    color(63);
    printf("                         ");
    color(159);
    printf(" ");
    color(79);
    printf("                   ");
    color(0);
    printf(".\n");
}
void estVolverLinea1()
{   //CABECERA 1
    color(159);
    printf(" UTN WALLET                                                 ");
    color(63);
    printf(" ESTADO DE LA CUENTA (1) ");
    color(159);
    printf(" ");
    color(79);
    printf(" VOLVER (0) ");
    color(0);
    printf(".\n");
}
void estVolverLinea2()
{   //CABECERA 2
    color(159);
    printf("                                                            ");
    color(63);
    printf("                         ");
    color(159);
    printf(" ");
    color(79);
    printf("            ");
    color(0);
    printf(".\n");
}
void alumnoLinea4()
{   //SUBCABECERA 4
    color(128);
    printf(" ALUMNO                                                                                           ");
    color(0);
    printf(".\n");
}
void adminUTNLinea4()
{   //SUBCABECERA 4
    color(128);
    printf(" ADMINISTRADOR UTN                                                                                ");
    color(0);
    printf(".\n");
}
void adminBuffetLinea4()
{   //SUBCABECERA 4
    color(128);
    printf(" ADMINISTRADOR BUFFET                                                                             ");
    color(0);
    printf(".\n");
}
void adminFotocopiadoraLinea4()
{   //SUBCABECERA 4
    color(128);
    printf(" ADMINISTRADOR FOTOCOPIADORA                                                                      ");
    color(0);
    printf(".\n");
}
void alumnoIniciarLinea4()
{   //SUBCABECERA 4
    color(128);
    printf(" ALUMNO: INICIAR SESION                                                                           ");
    color(0);
    printf(".\n");
}
void adminIniciarLinea4()
{   //SUBCABECERA 4
    color(128);
    printf(" ADMINISTRADOR: INICIAR SESION                                                                    ");
    color(0);
    printf(".\n");
}
void alumnoCrearLinea4()
{   //SUBCABECERA 4
    color(128);
    printf(" ALUMNO: CREAR CUENTA                                                                             ");
    color(0);
    printf(".\n");
}
void UTNCrearLinea4()
{   //SUBCABECERA 4
    color(128);
    printf(" ADMINISTRADOR UTN: CREAR CUENTA                                                                  ");
    color(0);
    printf(".\n");
}
void buffetCrearLinea4()
{   //SUBCABECERA 4
    color(128);
    printf(" ADMINISTRADOR BUFFET: CREAR CUENTA                                                               ");
    color(0);
    printf(".\n");
}
void fotocopiadoraCrearLinea4()
{   //SUBCABECERA 4
    color(128);
    printf(" ADMINISTRADOR FOTOCOPIADORA: CREAR CUENTA                                                        ");
    color(0);
    printf(".\n");
}
void subcabecera()
{
    color(128);
    printf("                                                                                                  ");
    color(0);
    printf(".\n");
}
void semiSubcabecera()
{
    color(128);
    printf("                                                  ");
    color(249);
    printf("                                                ");
    color(0);
    printf(".\n");
}
void estadoLinea7()
{   //SUBCABECERA 7
    color(128);
    printf(" ESTADO DE LA CUENTA                                                                              ");
    color(0);
    printf(".\n");
}
void datosLinea7()
{   //SUBCABECERA 7
    color(128);
    printf(" DATOS PERSONALES                                                                                 ");
    color(0);
    printf(".\n");
}
void depositarlinea7()
{   //SUBCABECERA 7
    color(128);
    printf(" DEPOSITAR                                                                                        ");
    color(0);
    printf(".\n");
}
void pagarLinea7()
{   //SUBCABECERA 7
    color(128);
    printf(" PAGAR                                                                                            ");
    color(0);
    printf(".\n");
}
void cobrarLinea7()
{   //SUBCABECERA 7
    color(128);
    printf(" COBRAR                                                                                           ");
    color(0);
    printf(".\n");
}
void retirarLinea7()
{   //SUBCABECERA 7
    color(128);
    printf(" RETIRAR DINERO                                                                                   ");
    color(0);
    printf(".\n");
}
void historialLinea7()
{   //SUBCABECERA 7
    color(128);
    printf(" HISTORIAL DE TRANSACCIONES                                                                       ");
    color(0);
    printf(".\n");
}
void semiLogo14()
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
    printf(".\n");
}
void buscandoTokenLogo16()
{   //BUSCANDO TOKEN + LOGO 16
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
    color(79);
    printf(" BUSCANDO TOKEN ");
    color(159);
    printf(" ");
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
    printf(".\n");
}
void tokenNoEncontradoLogo16()
{   //TOKEN NO ENCONTRADO + LOGO 16
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
    color(79);
    printf(" TOKEN NO ENCONTRADO ");
    color(249);
    printf("      ");
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
    printf(".\n");
}
void saldoInsuficienteLogo16()
{   //SALDO INSUFICIENTE + LOGO 16
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
    color(79);
    printf(" SALDO INSUFICIENTE ");
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
    printf(".\n");
}
void semiLogo17()
{   //SUBCABECERA + LOGO 17
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
    printf(".\n");
}
void semiLogo20()
{   //SUBCABECERA + LOGO 20
    color(128);
    printf("                                                  ");
    color(249);
    printf("  ");
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
    printf(".\n");
}
void crearLinea24()
{   //LINEA 24
    color(249);
    printf("                                                                               ");
    color(32);
    printf(" CREAR CUENTA (1) ");
    color(249);
    printf(" ");
    color(0);
    printf(".\n");
}
void crearLinea25()
{   //LINEA 25
    color(249);
    printf("                                                                               ");
    color(32);
    printf("                  ");
    color(249);
    printf(" ");
    color(0);
    printf(".\n");
}
void confirmarLinea24()
{   //LINEA 24
    color(249);
    printf("                                                                                  ");
    color(159);
    printf(" CONFIRMAR (1) ");
    color(249);
    printf(" ");
    color(0);
    printf(".\n");
}
void confirmarLinea25()
{   //LINEA 25
    color(249);
    printf("                                                                                  ");
    color(159);
    printf("               ");
    color(249);
    printf(" ");
    color(0);
    printf(".\n");
}
void generarLinea24()
{   //LINEA 24
    color(249);
    printf("                                                                              ");
    color(32);
    printf(" GENERAR TOKEN (1) ");
    color(249);
    printf(" ");
    color(0);
    printf(".\n");
}
void generarLinea25()
{   //LINEA 25
    color(249);
    printf("                                                                              ");
    color(32);
    printf("                   ");
    color(249);
    printf(" ");
    color(0);
    printf(".\n");
}
void siguientePrincipioLinea25()
{   //LINEA 25
    color(249);
    printf("                                                                                  ");
    color(159);
    printf("               ");
    color(249);
    printf(" ");
    color(0);
    printf(".\n");
}
void adminLinea27()
{   //LINEA 27
    stFecha fecha=fechaActual();
    color(144);
    printf(" ");
    color(63);
    printf(" ADMINISTRADOR (2) ");
    color(144);
    printf("     AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
    color(128);
    printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
    color(0);
    printf(".\n");
}
//FIN
