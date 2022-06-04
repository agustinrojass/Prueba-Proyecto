#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <time.h>
#include "pantallas.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//UTN WALLET: VERSION ALPHA 1.5
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ARREGLAR: SI BORRAS EN LOS ASTERISCOS, NO FUNCIONA LA CONTRSENA
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//AGREGAR "TOKEN" PARA LA COMPRA/VENTA
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//SE PUEDE AGREGAR CONFIRMACIONES, DETALLES, ERRORES, ETC EN PAGOS/COMPRAS/DEPOSITOS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//AGREGAR ARCHIVO DE TRANSACCIONES
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct  //STRUCT TOKEN
{
    int token;
    char origen[20];
    char destino[20];
    char detalle[50];
    int monto;
    stFecha fecha;
} stToken;
//INICIO
void inicio();                                          //MENU INICIO
//ALUMNOS
void alumnos();                                             //BOTON 1: MENU ALUMNOS
//INICIAR SESION
int iniciarSesionAlumno();                                      //BOTON 3: INICIAR SESION
//CREAR CUENTA
int crearCuentaAlumno();                                        //BOTON 4: CREAR CUENTA
//VETANAS ALUMNOS
int ventanasAlumnos(stUsuario sesion,int boton);                //VENTANAS ALUMNOS
int estadoDeCuentaAlumno(stUsuario sesion,float pesos);             //BOTON 1
int datosPersonales(stUsuario sesion);                              //BOTON 2
//VER
//int deposito(stUsuario aux,float *pesos,int *boton);                           //BOTON 3
int pago(stUsuario sesion);                                         //BOTON 4
int editarDatos(stUsuario sesion);                                  //BOTON 5
int buffet(stUsuario sesion,float *pesos);                          //BOTON 7
int cuota(stUsuario sesion,float *pesos);                           //BOTON 8
int fotocopiadora(stUsuario sesion,float *pesos);                   //BOTON 9
//ADMINSITRADORES
int administradores();                                      //BOTON 2: MENU ADMINISTRADORES
//INICIAR SESION
int iniciarSesionAdmin();                                       //BOTON 3: INICIAR SESION
//CREAR CUENTA
int crearCuentaAdmin(int tipo);                                 //BOTON 4: CREAR CUENTA
//VENTANAS ADMINS
int ventanasAdmin(stAdmin sesion,int boton);                    //VENTANAS ADMINS
int estadoDeCuentaAdmin(stAdmin sesion,int pesos);                  //BOTON 1
//MAIN
int main()
{
    inicio();
    color(15);
    return 0;
}
//INICIO
void inicio()                                           //MENU INICIO
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
//INICIAR SESION
int iniciarSesionAlumno()                                       //BOTON 3: INICIAR SESION
{
    int flag=0,boton,ronda=1;
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
//CREAR CUENTA
int crearCuentaAlumno()                                         //BOTON 4: CREAR CUENTA
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
                //boton=deposito(sesion,&pesos,&transaccion);
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
//ADMINIS
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
//INICIAR SESION
int iniciarSesionAdmin()                                        //BOTON 3
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
//CREAR CUENTA
int crearCuentaAdmin(int tipo)                                  //BOTON 4: CREAR CUENTA
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

//VER
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
/*int deposito(stUsuario aux,float *pesos,int *boton)                            //BOTON 3
{
    stToken transaccion;
    do
    {
        printf(" ________________________________________________________________________________________________ \n");
        printf("| UTN WALLET                                                                                     |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| ADMINISTRADOR                                                                                  |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| DEPOSITAR                                                                                      |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| MONTO: $ ");
        scanf("%f",pesos);
        system("cls");
        printf(" _________________________________________________________________________________ ______________ \n");
        printf("| UTN WALLET                                                                      | CANCELAR (0) |\n");
        printf("|_________________________________________________________________________________|______________|\n");
        printf("| ADMINISTRADOR                                                                                  |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| DEPOSITAR                                                                                      |\n");
        printf("|________________________________________ _______________________________________________________|\n");
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
        printf("|                                                                                                |\n");
        printf("|                                                                                                |\n");
        printf("|                                                                           ___________________  |\n");
        printf("|                                                                          | GENERAR TOKEN (1) | |\n");
        printf("|                                                                          |___________________| |\n");
        printf("|________________________________________________________________________________________________|\n");
        scanf("%i",boton);
        system("cls");
    }
    while(*boton!=1 && *boton!=0);
    if(*boton==0)
    {
        *boton=1;
        *pesos=0;
    }
    else
    {
        srand(time(NULL));
        transaccion.token=rand()%100000;
    }
    return transaccion.token;
}*/


//FIN
