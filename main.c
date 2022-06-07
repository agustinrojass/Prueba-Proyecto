#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <time.h>
#include "pantallas.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//UTN WALLET: VERSION ALPHA 1.9
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//FALTA HACER LA PARTE DE PAGOS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//INICIO
void inicio();                                          //MENU INICIO
//ALUMNOS
void alumnos();                                             //BOTON 1: MENU ALUMNOS
//INICIAR SESION
int iniciarSesionAlumno();                                      //BOTON 3: INICIAR SESION
//CREAR CUENTA
int crearCuentaAlumno();                                        //BOTON 4: CREAR CUENTA
//VETANAS
int ventanasAlumnos(stUsuario sesion,int boton);                //VENTANAS
int estadoDeCuentaAlumno(stUsuario sesion);                         //BOTON 1
int datosPersonales(stUsuario sesion);                              //BOTON 2
int deposito(stUsuario aux);                                        //BOTON 3
int historial(stUsuario sesion);                                    //BOTON 5
//ADMINSITRADORES
int administradores();                                      //BOTON 2: MENU ADMINISTRADORES
//INICIAR SESION
int iniciarSesionAdmin();                                       //BOTON 3: INICIAR SESION
//CREAR CUENTA
int crearCuentaAdmin(int tipo);                                 //BOTON 4: CREAR CUENTA
//VENTANAS
int ventanasAdmin(stAdmin sesion,int boton);                    //VENTANAS
int estadoDeCuentaAdmin(stAdmin sesion);                            //BOTON 1
int adminDeposito();                                                //BOTON 3
//MUESTRA TRANSACCIONES
void muestra();
//VER
int pago(stUsuario sesion);                                         //BOTON 4
int buffet(stUsuario sesion,float *pesos);                          //BOTON 7
int cuota(stUsuario sesion,float *pesos);                           //BOTON 8
int fotocopiadora(stUsuario sesion,float *pesos);                   //BOTON 9
//MAIN
int main()
{
    //color(15);
    //muestra();
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
                        p++;
                    }
                    else
                    {
                        if(p>0)
                        {
                            printf("\b \b");
                            p--;
                        }
                    }

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
    do
    {
        switch(boton)
        {
            case 1:
            {
                system("cls");
                boton=estadoDeCuentaAlumno(sesion);
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
                color(15);
                boton=deposito(sesion);
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
                boton=historial(sesion);
            }
            break;
        }
    }
    while(boton!=0);
    return boton;
}
int estadoDeCuentaAlumno(stUsuario sesion)                          //BOTON 1
{
    int boton;
    do
    {
        estadoDeCuentaAlumnoPantalla(sesion);
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=2 && boton!=3 && boton!=4 && boton!=5 && boton!=0);
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
int deposito(stUsuario aux)                                         //BOTON 3
{
    stFecha fecha=fechaActual();
    int boton,ronda=1;
    stToken transaccion;
    transaccion.dni=aux.dni;
    strcpy(transaccion.origen,"UTN");
    strcpy(transaccion.destino,aux.usuario);
    transaccion.fecha=fecha;
    strcpy(transaccion.detalle,"CARGA DE DINERO");
    transaccion.acreditado=0;
    do
    {
        do
        {
            depositoPantalla1(ronda);
            scanf("%f",&transaccion.monto);
            system("cls");
            ronda++;
        }
        while(transaccion.monto<=0);
        depositoPantalla2(transaccion);
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=1 && boton!=0);
    if(boton==0)
    {
        boton=1;
        transaccion.monto=0;
    }
    else
    {
        int flag=0,repetido=1;
        stToken taux;
        srand(time(NULL));
        FILE *archivo=fopen("Transacciones","rb");
        if(archivo!=NULL)
        {
            while(repetido==1)
            {
                while((fread(&taux,sizeof(stToken),1,archivo)>0) && flag==0)
                {
                    transaccion.token=rand()%89999+10000;
                    //VER COMO SOLUCIONARLO
                    /*int i;
                    char arreglo[]={'1','2','3','4','5','6','7','8','9','0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
                    srand(time(NULL));
                    for(i=0;i<5;i++)
                    {
                        transaccion.token[i]=arreglo[rand()%37-1];
                    }*/
                    if(transaccion.token==taux.token)
                    {
                        flag=1;
                    }
                }
                if(flag==0)
                {
                    repetido=0;
                }
                else
                {
                    flag=0;
                }
            }
            fclose(archivo);
            archivo=fopen("Transacciones","ab");
            if(archivo!=NULL)
            {
                fwrite(&transaccion,sizeof(stToken),1,archivo);
                fclose(archivo);
            }
        }
        else
        {
            transaccion.token=rand()%89999+10000;
            //VER COMO SOLUCIONARLO
            /*int i;
            char arreglo[]={'1','2','3','4','5','6','7','8','9','0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
            srand(time(NULL));
            for(i=0;i<5;i++)
            {
                transaccion.token[i]=arreglo[rand()%37-1];
            }*/
            archivo=fopen("Transacciones","ab");
            if(archivo!=NULL)
            {
                fwrite(&transaccion,sizeof(stToken),1,archivo);
                fclose(archivo);
            }
        }
        depositoPantalla3(transaccion);
        system("cls");
    }
    return boton;
}
int historial(stUsuario sesion)                                     //BOTON 5
{
    int boton=4,i,d=0,flag=0,ultimo=0;
    stToken aux;
    int t=sizeof(stToken);
    FILE *archivo=fopen("Transacciones","rb");
    if(archivo!=NULL)
    {
        do
        {
            if(boton==4)
            {
                flag=0;
                if(!feof(archivo))
                {
                    historialPantalla1();
                }
                d=0;
                while(fread(&aux,sizeof(stToken),1,archivo)>0 && d<9)
                {
                    if(feof(archivo))
                    {
                        aux.dni=0;
                    }
                    if(sesion.dni==aux.dni)
                    {
                        flag=historialPantalla2(aux,flag);
                        d++;
                    }
                }
                if(d==9 && !feof(archivo))
                {
                    fseek(archivo,-t,SEEK_CUR);
                }
                if(d>0)
                {
                    for(i=d;i<9;i++)
                    {
                        flag=historialPantalla3(flag);
                    }
                    if(d<9)
                    {
                        ultimo=1;
                    }
                    else
                    {
                        ultimo=0;
                    }
                    historialPantalla4(ultimo);
                }
            }
            do
            {
                scanf("%i",&boton);
            }
            while(boton!=4 && boton!=0);
            if(d<9 || feof(archivo))
            {
                rewind(archivo);
            }
            system("cls");
        }
        while(boton!=0);
        fclose(archivo);
    }
    boton=1;
    return boton;
}
//ADMINS
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
int iniciarSesionAdmin()                                        //BOTON 3: INICIAR SESION
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
                        p++;
                    }
                    else
                    {
                        if(p>0)
                        {
                            printf("\b \b");
                            p--;
                        }
                    }

                }
            }
            while(sesion.contrasena[p]!='\r');
            sesion.contrasena[p]='\0';
        }   //FIN ASTERISCOS
        if(strcmp(sesion.contrasena,"0")==0||ronda>4)
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
    //DEPENDE TIPO DE ADMIN
    do
    {
        switch(boton)
        {
            case 1:
            {
                system("cls");
                boton=estadoDeCuentaAdmin(sesion);
            }
            break;
            case 3:
            {
                boton=adminDeposito(sesion);
            }
        }
    }
    while(boton!=0);
    return boton;
}
int estadoDeCuentaAdmin(stAdmin sesion)                             //BOTON 1
{
    int boton=1;
    do
    {
        estadoDeCuentaAdminPantalla(sesion);
        scanf("%i",&boton);
        system("cls");
    }
    while(boton!=3 && boton!=4 && boton!=0);
    if(sesion.tipo!=1 && boton==3)
    {
        boton=1;
    }
    return boton;
}
int adminDeposito()                                                 //BOTON 3               //VER QUE SI CAMBIAMOS A TOKEN ALFANUMERICO
{
    int boton;
    stToken transaccion;
    stToken to;
    int token,flag=0;
    FILE *archivo=fopen("Transacciones","rb");
    if(archivo!=NULL)
    {
        rewind(archivo);
        adminDepositoPantalla1();
        scanf("%i",&token);
        system("cls");
        while((fread(&to,sizeof(stToken),1,archivo)>0) && flag==0)
        {
            if(token==to.token)
            {
                flag=1;
                transaccion=to;
            }
        }
        rewind(archivo);
        fclose(archivo);
    }
    adminDepositoPantalla2(token);
    system("cls");
    if(flag==1 && transaccion.acreditado==0)
    {
        do
        {
            adminDepositoPantalla3(transaccion);
            scanf("%i",&boton);
            system("cls");
        }
        while(boton!=1 && boton!=0);
        flag=0;
        if(boton==0)
        {
            boton=1;
        }
        else
        {
            stToken aux;
            stUsuario alumno;
            int t=sizeof(stToken);
            int u=sizeof(stUsuario);
            FILE *archivo2=fopen("Transacciones","r+b");
            if(archivo2!=NULL)
            {
                while((fread(&aux,sizeof(stToken),1,archivo2)>0) && flag==0)
                {
                    if(transaccion.token==aux.token)
                    {
                        transaccion.acreditado=1;
                        fseek(archivo2,-t,SEEK_CUR);
                        fwrite(&transaccion,sizeof(stToken),1,archivo2);
                        flag=1;
                    }
                }
                rewind(archivo2);
                fclose(archivo2);
            }
            flag=0;
            FILE *archivo3=fopen("Registro","r+b");
            if(archivo3!=NULL)
            {
                while((fread(&alumno,sizeof(stUsuario),1,archivo3)>0) && flag==0)
                {
                    if(transaccion.dni==alumno.dni)
                    {
                        alumno.saldo=alumno.saldo+transaccion.monto;
                        fseek(archivo3,-u,SEEK_CUR);
                        fwrite(&alumno,sizeof(stUsuario),1,archivo3);
                        flag=1;
                    }
                }
                rewind(archivo3);
                fclose(archivo3);
            }
        }
    }
    else
    {
        boton=1;
        adminDepositoPantalla4(token);
    }
    return boton;
}
//VER SI SE USA
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
/*archivo=fopen("Transacciones","rb");
        if(archivo!=NULL)
        {
            fread(&taux,sizeof(stToken),1,archivo);
            printf("dni: i\n",taux.dni);
            printf("usuario: %s\n",taux.destino);
            printf("UTN: %s\n",taux.origen);
            printf("Monto: %.2f\n",taux.monto);
            printf("detalle: %s\n",taux.detalle);
            printf("token: %i\n",taux.token);
            printf("fecha: %02i/%02i/%i%i ",taux.fecha.dia,taux.fecha.mes,(taux.fecha.ano%100)/10,taux.fecha.ano%10);
            system("pause");
            fclose(archivo);
        }

*/
//FIN
void muestra()
{
    stToken aux;
    FILE *archivo=fopen("Transacciones","rb");
    if(archivo!=NULL)
    {
        while(fread(&aux,sizeof(stToken),1,archivo)>0)
        {
            printf("USUARIO: %-15s |",aux.destino);
            printf("MONTO: %-8.2f |",aux.monto);
            printf("DETALLE: %-20s |",aux.detalle);
            printf("TOKEN: %-8i |",aux.token);
            printf("ACREDITADO: %i \n",aux.acreditado);
        }
        fclose(archivo);
    }
}
