#include "pantallas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <time.h>
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
//INICIO
void pantallaInicio()                                           //PANTALLA INICIO
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
void pantallaAlumnos()                                              //PANTALLA ALUMNOS
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
//INICIAR SESION
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
//CREAR CUENTA
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
//ESTADO DE LA CUENTA
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
//DATOS PERSONALES
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
//ADMINS
void pantallaAdministradores()                                      //PANTALLA ADMINISTRADORES
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
//INICIAR SESION
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
//CREAR CUENTA
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
//ESTADO DE LA CUENTA
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


//FIN
