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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 4
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 5
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 7
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 8
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 10
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 11
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
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
        printf(".\n");
    }
}
//ALUMNOS
void pantallaAlumnos()                                                          //PANTALLA ALUMNOS
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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 7
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 8
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 10
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 11
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
//CREAR CUENTA
void crearCuentaAlumnoPantalla1()                                                   //PANTALLA QUE PIDE NOMBRE
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" INGRESE SU NOMBRE Y APELLIDO: ");
        color(15);
    }
}
void crearCuentaAlumnoPantalla2(int ronda,stUsuario datos)                          //PANTALLA QUE PIDE DOCUMENTO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE SU NUMERO DE DOCUMENTO: ");
        color(15);
    }
}
void crearCuentaAlumnoPantalla3(int ronda,int parte,stUsuario datos)                //PANTALLA QUE PIDE FECHA DE NACIMIENTO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 12
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA 13
        switch(parte)
        {
            case(1):
            {   //SUBCABECERA 13
                color(128);
                printf(" INGRESE SU FECHA DE NACIMIENTO (DIA): ");
                color(15);
            }
            break;
            case(2):
            {   //SUBCABECERA 13
                color(128);
                printf(" INGRESE SU FECHA DE NACIMIENTO (MES): ");
                color(15);
            }
            break;
            case(3):
            {   //SUBCABECERA 13
                color(128);
                printf(" INGRESE SU FECHA DE NACIMIENTO (ANO): ");
                color(15);
            }
            break;
        }
    }
}
void crearCuentaAlumnoPantalla4(int ronda,stUsuario datos)                          //PANTALLA QUE PIDE USUARIO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    if(ronda==1)
    {   //LINEA 15
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
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
        printf(".\n");
    }
    {   //SUBCABECERA 16
        color(128);
        printf(" ESCRIBA UN NOMBRE DE USUARIO: ");
        color(15);
    }
}
void crearCuentaAlumnoPantalla5(int ronda,stUsuario datos)                          //PANTALLA QUE PIDE CONTRASENA
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 15
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 16
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 17
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
            printf(".\n");
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA 19
        color(128);
        printf(" INGRESE UNA CONTRASENA: ");
        color(15);
    }
}
void crearCuentaAlumnoPantalla6(int ronda,stUsuario datos)                          //PANTALLA QUE PIDE REPETIR CONTRASENA
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 15
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 16
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 17
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 18
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 19
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 20
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 21
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA 22
        color(128);
        printf(" VUELVA A INGRESAR LA CONTRASENA: ");
        color(15);
    }
}
void crearCuentaAlumnoPantalla7(stUsuario datos)                                    //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO: CREAR CUENTA                                                                             ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NUMERO DE DOCUMENTO: %-27i ",datos.dni);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" FECHA DE NACIMIENTO: %02i/%02i/%i%i                    ",datos.nacimiento.dia,datos.nacimiento.mes,(datos.nacimiento.ano%100)/10,datos.nacimiento.ano%10);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 15
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 16
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 17
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 18
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 19
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 20
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
//VENTANAS
void estadoDeCuentaAlumnoPantalla(stUsuario sesion,int acceso)                      //PANTALLA ESTADO DE LA CUENTA DEL ALUMNO
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        if(acceso==0)
        {
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
        else
        {
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
    }
    {   //CABECERA 2
        if(acceso==0)
        {
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
        else
        {
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
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        if(acceso==0)
        {
            color(128);
            printf(" ALUMNO                                                                                           ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(128);
            printf(" ADMINISTRADOR UTN                                                                                ");
            color(0);
            printf(".\n");
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" ESTADO DE LA CUENTA                                                                              ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",sesion.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
    }
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
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        if(acceso==0)
        {
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
        else
        {
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
    }
    {   //CABECERA 2
        if(acceso==0)
        {
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
        else
        {
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
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        if(acceso==0)
        {
            color(128);
            printf(" ALUMNO                                                                                           ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(128);
            printf(" ADMINISTRADOR UTN                                                                                ");
            color(0);
            printf(".\n");
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" DATOS PERSONALES                                                                                 ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE: %-40s ",sesion.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
       color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
void depositoPantalla1(int ronda)                                                   //PANTALLA DEPOSITO QUE PIDE MONTO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" DEPOSITAR                                                                                        ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ ");
        color(15);
    }
}
void depositoPantalla2(stToken transaccion)                                         //PANTALLA DEPOSITO QUE PIDE CONFIRMAR/CANCELAR
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" DEPOSITAR                                                                                        ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
void depositoPantalla3(stToken transaccion)                                         //PANTALLA DEPOSITO QUE MUESTRA TOKEN
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                                       ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" DEPOSITAR                                                                                        ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
    sleep(5);
}
void pagoPantalla1()                                                                //PANTALLA PAGO QUE PIDE TOKEN
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" PAGAR                                                                                            ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE EL TOKEN: ");
        color(15);
    }
}
void pagoPantalla2(int token)                                                       //PANTALLA PAGO QUE MUESTRA TOKEN
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" PAGAR                                                                                            ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
    sleep(2);
}
void pagoPantalla3(stToken taux)                                                    //PANTALLA PAGO DEL CONFIRMAR/CANCELAR
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" PAGAR                                                                                            ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",taux.destino);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //SUBCABECERA + LOGO 23
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
void pagoPantalla4(int token)                                                       //PANTALLA PAGO TOKEN NO ENCONTRADO
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                                       ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" PAGAR                                                                                            ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
    sleep(2);
}
void pagoPantalla5(int token)                                                       //PANTALLA PAGO SALDO INSUFICIENTE
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                                       ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" PAGAR                                                                                            ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
    sleep(2);
}
void historialPantalla1()                                                           //PANTALLA HISTORIAL PRINCIPIO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                           ");
        color(79);
        printf(" VOLVER (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                      ");
        color(79);
        printf("            ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ALUMNO                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" HISTORIAL DE TRANSACCIONES                                                                       ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" FECHA    - ORIGEN          - DESTINO         - TOKEN - MONTO      - DETALLE            - ESTADO  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    stFecha fecha=fechaActual();
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
//ADMINS
void pantallaAdministradores()                                                  //PANTALLA ADMINISTRADORES
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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR                                                                                    ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 7
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 8
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 10
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 11
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
//CREAR CUENTA
void claveAdmin()                                                                   //PANTALLA QUE PIDE CLAVE DE ADMIN
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR: CREAR CUENTA                                                                      ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" INGRESE LA CLAVE DE ADMINISTRADOR: ");
        color(15);
    }
}
void crearCuentaAdminPantalla1(stAdmin datos)                                       //PANTALLA QUE PIDE NOMBRE
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case(1):
            {
                color(128);
                printf(" ADMINISTRADOR UTN: CREAR CUENTA                                                                  ");
                color(0);
                printf(".\n");
            }
            break;
            case(2):
            {
                color(128);
                printf(" ADMINISTRADOR BUFFET: CREAR CUENTA                                                               ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA: CREAR CUENTA                                                        ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" INGRESE SU NOMBRE Y APELLIDO: ");
        color(15);
    }
}
void crearCuentaAdminPantalla2(int ronda,stAdmin datos)                             //PANTALLA QUE PIDE USUARIO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case(1):
            {
                color(128);
                printf(" ADMINISTRADOR UTN: CREAR CUENTA                                                                  ");
                color(0);
                printf(".\n");
            }
            break;
            case(2):
            {
                color(128);
                printf(" ADMINISTRADOR BUFFET: CREAR CUENTA                                                               ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA: CREAR CUENTA                                                        ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
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
        printf(" INGRESE UN NOMBRE DE USUARIO: ");
        color(15);
    }
}
void crearCuentaAdminPantalla3(int ronda,stAdmin datos)                             //PANTALLA QUE PIDE CONTRASENA
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case(1):
            {
                color(128);
                printf(" ADMINISTRADOR UTN: CREAR CUENTA                                                                  ");
                color(0);
                printf(".\n");
            }
            break;
            case(2):
            {
                color(128);
                printf(" ADMINISTRADOR BUFFET: CREAR CUENTA                                                               ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA: CREAR CUENTA                                                        ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
            printf(".\n");
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" INGRESE UNA CONTRASENA: ");
        color(15);
    }
}
void crearCuentaAdminPantalla4(int ronda,stAdmin datos)                             //PANTALLA QUE PIDE REPETIR CONTRASENA
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case(1):
            {
                color(128);
                printf(" ADMINISTRADOR UTN: CREAR CUENTA                                                                  ");
                color(0);
                printf(".\n");
            }
            break;
            case(2):
            {
                color(128);
                printf(" ADMINISTRADOR BUFFET: CREAR CUENTA                                                               ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA: CREAR CUENTA                                                        ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 15
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
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
            printf(".\n");
        }
    }
    {   //SUBCABECERA 16
        color(128);
        printf(" VUELVA A INGRESAR LA CONTRASENA: ");
        color(15);
    }
}
void crearCuentaAdminPantalla5(stAdmin datos)                                       //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(datos.tipo)
        {
            case(1):
            {
                color(128);
                printf(" ADMINISTRADOR UTN: CREAR CUENTA                                                                  ");
                color(0);
                printf(".\n");
            }
            break;
            case(2):
            {
                color(128);
                printf(" ADMINISTRADOR BUFFET: CREAR CUENTA                                                               ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA: CREAR CUENTA                                                        ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" NOMBRE Y APELLIDO: %-29s ",datos.nombre);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" NOMBRE DE USUARIO: %-29s ",datos.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 13
        color(128);
        printf(" CONTRASENA: %-36s ",datos.contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 14
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 15
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 16
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 17
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 18
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 19
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 20
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(1):
            {
                color(128);
                printf(" ADMINISTRADOR UTN                                                                                ");
                color(0);
                printf(".\n");
            }
            break;
            case(2):
            {
                color(128);
                printf(" ADMINISTRADOR BUFFET                                                                             ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA                                                                      ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" ESTADO DE LA CUENTA                                                                              ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",sesion.usuario);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        switch(sesion.tipo)
        {
            case(1):
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
            break;
            case(2):
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
            break;
            case(3):
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
            break;
        }
    }
    {   //LINEA 25
        switch(sesion.tipo)
        {
            case(1):
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
            break;
            case(2):
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
            break;
            case(3):
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
            break;
        }
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR UTN                                                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" DEPOSITAR                                                                                        ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE EL TOKEN: ");
        color(15);
    }
}
void adminDepositoPantalla2(int token)                                              //PANTALLA DEPOSITO QUE MUESTRA TOKEN
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR UTN                                                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" DEPOSITAR                                                                                        ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
    sleep(2);
}
void adminDepositoPantalla3(stToken taux)                                           //PANTALLA DEPOSITO DEL CONFIRMAR/CANCELAR
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR UTN                                                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" DEPOSITAR                                                                                        ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",taux.destino);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //SUBCABECERA + LOGO 23
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
void adminDepositoPantalla4(int token)                                              //PANTALLA DEPOSITO TOKEN NO ENCONTRADO
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                                       ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR UTN                                                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" DEPOSITAR                                                                                        ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
    sleep(2);
}
void adminPagoPantalla1(int ronda,stAdmin sesion)                                   //PANTALLA PAGO QUE PIDE DOCUMENTO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(1):
            {
                color(128);
                printf(" ADMINISTRADOR UTN                                                                                ");
                color(0);
                printf(".\n");
            }
            break;
            case(2):
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR BUFFET                                                                             ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA                                                                      ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" COBRAR                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" DOCUMENTO: ");
        color(15);
    }
}
void adminPagoPantalla2(int ronda,stAdmin sesion)                                   //PANTALLA PAGO QUE PIDE MONTO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(1):
            {
                color(128);
                printf(" ADMINISTRADOR UTN                                                                                ");
                color(0);
                printf(".\n");
            }
            break;
            case(2):
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR BUFFET                                                                             ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA                                                                      ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" COBRAR                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ ");
        color(15);
    }
}
void adminPagoPantalla3(stToken transaccion,stAdmin sesion)                         //PANTALLA PAGO QUE PIDE CONFIRMAR/CANCELAR
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(1):
            {
                color(128);
                printf(" ADMINISTRADOR UTN                                                                                ");
                color(0);
                printf(".\n");
            }
            break;
            case(2):
            {
                color(128);
                printf(" ADMINISTRADOR BUFFET                                                                             ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA                                                                      ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" COBRAR                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
void adminPagoPantalla4(stToken transaccion,stAdmin sesion)                         //PANTALLA PAGO QUE MUESTRA TOKEN
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                                       ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(1):
            {
                color(128);
                printf(" ADMINISTRADOR UTN                                                                                ");
                color(0);
                printf(".\n");
            }
            break;
            case(2):
            {
                color(128);
                printf(" ADMINISTRADOR BUFFET                                                                             ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA                                                                      ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" COBRAR                                                                                           ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
    sleep(5);
}
void listaUsuariosPantalla1()                                                       //PANTALLA LISTA DE USUARIOS PRINCIPIO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                           ");
        color(79);
        printf(" VOLVER (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                      ");
        color(79);
        printf("            ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR UTN                                                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" LISTADO DE USUARIOS                                                                              ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" ESTADO   - NOMBRE Y APELLIDO    - DOCUMENTO - SALDO                                              ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 12
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    stFecha fecha=fechaActual();
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
void retiroPantalla1(int ronda,stAdmin sesion)                                      //PANTALLA RETIRO QUE PIDE MONTO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(2):
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR BUFFET                                                                             ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {   //SUBCABECERA 4
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA                                                                      ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" RETIRAR DINERO                                                                                   ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
        }
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ ");
        color(15);
    }
}
void retiroPantalla2(stToken transaccion,stAdmin sesion)                            //PANTALLA RETIRO QUE PIDE CONFIRMAR/CANCELAR
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(2):
            {
                color(128);
                printf(" ADMINISTRADOR BUFFET                                                                             ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA                                                                      ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" RETIRAR DINERO                                                                                   ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
void retiroPantalla3(stToken transaccion,stAdmin sesion)                            //PANTALLA RETIRO QUE MUESTRA TOKEN
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                                       ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        switch(sesion.tipo)
        {
            case(2):
            {
                color(128);
                printf(" ADMINISTRADOR BUFFET                                                                             ");
                color(0);
                printf(".\n");
            }
            break;
            case(3):
            {
                color(128);
                printf(" ADMINISTRADOR FOTOCOPIADORA                                                                      ");
                color(0);
                printf(".\n");
            }
            break;
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" RETIRAR DINERO                                                                                   ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" MONTO: $ %-39.2f ",transaccion.monto);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
    sleep(5);
}
void adminRetiroPantalla1()                                                         //PANTALLA RETIRO QUE PIDE TOKEN
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR UTN                                                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" RETIRAR DINERO                                                                                   ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" INGRESE EL TOKEN: ");
        color(15);
    }
}
void adminRetiroPantalla2(int token)                                                //PANTALLA RETIRO QUE MUESTRA TOKEN
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR UTN                                                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" RETIRAR DINERO                                                                                   ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
    sleep(2);
}
void adminRetiroPantalla3(stToken taux)                                             //PANTALLA RETIRO DEL CONFIRMAR/CANCELAR
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR UTN                                                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" RETIRAR DINERO                                                                                   ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" USUARIO: %-39s ",taux.destino);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //SUBCABECERA + LOGO 23
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
void adminRetiroPantalla4(int token)                                                //PANTALLA RETIRO TOKEN NO ENCONTRADO
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                                       ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        color(128);
        printf(" ADMINISTRADOR UTN                                                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 7
        color(128);
        printf(" DEPOSITAR                                                                                        ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 8
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" TOKEN: %-5i                                     ",token);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
    sleep(2);
}
//INICIAR SESION
void iniciarSesionPantalla1(int ronda,int acceso)                                   //PANTALLA QUE PIDE USUARIO
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        if(acceso==0)
            {
            color(128);
            printf(" ALUMNO: INICIAR SESION                                                                           ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(128);
            printf(" ADMINISTRADOR: INICIAR SESION                                                                    ");
            color(0);
            printf(".\n");
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
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
        printf(" NOMBRE DE USUARIO: ");
        color(15);
    }
}
void iniciarSesionPantalla2(int ronda,int acceso,stUsuario sesion,stAdmin admin)    //PANTALLA QUE PIDE CONTRASENA
{
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        if(acceso==0)
        {
            color(128);
            printf(" ALUMNO: INICIAR SESION                                                                           ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(128);
            printf(" ADMINISTRADOR: INICIAR SESION                                                                    ");
            color(0);
            printf(".\n");
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        if(ronda==1)
        {
            color(249);
            printf("                                                                                                  ");
            color(0);
            printf(".\n");
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
        printf(" CONTRASENA: ");
        color(15);
    }
}
void iniciarSesionPantalla3(int acceso,stUsuario sesion,stAdmin admin)              //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
{
    stFecha fecha=fechaActual();
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
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                         ");
        color(79);
        printf(" CANCELAR (0) ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                    ");
        color(79);
        printf("              ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        if(acceso==0)
            {
            color(128);
            printf(" ALUMNO: INICIAR SESION                                                                           ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(128);
            printf(" ADMINISTRADOR: INICIAR SESION                                                                    ");
            color(0);
            printf(".\n");
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //SUBCABECERA 8
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 10
        color(128);
        printf(" CONTRASENA: ********%-28s ",contrasena);
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 11
        color(128);
        printf("                                                  ");
        color(249);
        printf("                                                ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
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
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
}
void iniciandoPantalla(int acceso)                                                  //PANTALLA INICIANDO SESION
{
    stFecha fecha=fechaActual();
    {   //CABECERA 1
        color(159);
        printf(" UTN WALLET                                                                                       ");
        color(0);
        printf(".\n");
    }
    {   //CABECERA 2
        color(159);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 3
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //SUBCABECERA 4
        if(acceso==0)
        {
            color(128);
            printf(" ALUMNO                                                                                           ");
            color(0);
            printf(".\n");
        }
        else
        {
            color(128);
            printf(" ADMINISTRADOR                                                                                    ");
            color(0);
            printf(".\n");
        }
    }
    {   //SUBCABECERA 5
        color(128);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 6
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 7
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 8
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 9
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 10
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 11
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
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
        printf(".\n");
    }
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
    {   //LINEA 21
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 22
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 23
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 24
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 25
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 26
        color(249);
        printf("                                                                                                  ");
        color(0);
        printf(".\n");
    }
    {   //LINEA 27
        color(144);
        printf("                         AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA ");
        color(128);
        printf(" %02i/%02i/%i%i ",fecha.dia,fecha.mes,(fecha.ano%100)/10,fecha.ano%10);
        color(0);
        printf(".\n");
    }
    sleep(2);
}
//FIN
