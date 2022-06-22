#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <time.h>
#include "pantallas.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//UTN WALLET (AGUSTIN ROJAS - FRANCISCO PEREZ - GONZALO MARSALA - ZEUS TESTA): VERSION 1.19
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ALUMNOS
void alumnos();                                             //BOTON 1: MENU ALUMNOS
//INICIAR SESION
char iniciarSesionAlumno();                                     //BOTON 3: INICIAR SESION
//CREAR CUENTA
char crearCuentaAlumno();                                       //BOTON 4: CREAR CUENTA
//VETANAS
char ventanasAlumnos(stUsuario sesion,char boton);              //VENTANAS
char estadoDeCuentaAlumno(stUsuario sesion);                        //BOTON 1
char datosPersonales(stUsuario sesion);                             //BOTON 2
char deposito(stUsuario aux);                                       //BOTON 3
char pago(stUsuario *sesion);                                       //BOTON 4
char historial(stUsuario sesion);                                   //BOTON 5
//ADMINSITRADORES
char administradores();                                     //BOTON 2: MENU ADMINISTRADORES
//INICIAR SESION
char iniciarSesionAdmin();                                      //BOTON 3: INICIAR SESION
//CREAR CUENTA
char crearCuentaAdmin(int tipo);                                //BOTON 4: CREAR CUENTA
//VENTANAS
char ventanasAdmin(stAdmin sesion,char boton);                  //VENTANAS
char estadoDeCuentaAdmin(stAdmin sesion);                           //BOTON 1
char adminDeposito();                                               //BOTON 3
char adminPago(stAdmin admin);                                      //BOTON 4
char listaUsuarios();                                               //BOTON 5
char retiroDinero(stAdmin admin);                                   //BOTON 6
char adminRetiro();                                                 //BOTON 7
char historialTransacciones(stAdmin sesion);                        //BOTON 8
char busquedaUsuario(int dni);                                      //BOTON 9
//UNIVERSAL
void contrasena(char cont[30]);                                 //ASTERISCOS
stToken generadorToken(stToken transaccion);                    //TOKEN
void acreditacionToken(stToken transaccion);                    //ACREDITACION DEL TOKEN
//MAIN
int main()                                              //MENU INICIO
{
    char navegacion;
    do
    {
        do
        {
            pantallaInicio();
            fflush(stdin);
            navegacion=getch();
            system("cls");
        }
        while(navegacion!='1' && navegacion!='2' && navegacion!='0');
        switch(navegacion)
        {
            case('1'):
            {
                alumnos();
                system("cls");
            }
            break;
            case('2'):
            {
                administradores();
                system("cls");
            }
            break;
        }
    }
    while(navegacion!='0');
    color(15);
    return 0;
}
//ALUMNOS
void alumnos()                                              //BOTON 1: MENU ALUMNOS
{
    char boton;
    do
    {
        do
        {
            pantallaAlumnos();
            fflush(stdin);
            boton=getch();
            system("cls");
        }
        while(boton!='3' && boton!='4' && boton!='0');
        switch(boton)
        {
            case('3'):
            {
                boton=iniciarSesionAlumno();
                system("cls");
            }
            break;
            case('4'):
            {
                boton=crearCuentaAlumno();
                system("cls");
            }
            break;
        }
    }
    while(boton!='0');
}
//INICIAR SESION
char iniciarSesionAlumno()                                      //BOTON 3: INICIAR SESION
{
    int flag=0,ronda=1,acceso=0;
    char boton;
    stUsuario sesion,cuenta;
    stAdmin admin;
    //USUARIO
    while(flag!=1)
    {
        iniciarSesionPantalla1(ronda,acceso);
        fflush(stdin);
        gets(sesion.usuario);
        if(strcmp(sesion.usuario,"0")==0)
        {
            boton='0';
            return boton;
        }
        FILE *archivo=fopen("Registro","rb");
        if(archivo!=NULL)
        {
            while((fread(&cuenta,sizeof(stUsuario),1,archivo)>0) && flag==0)
            {
                if(strcmp(sesion.usuario,cuenta.usuario)==0 && cuenta.estado==1)
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
        iniciarSesionPantalla2(ronda,acceso,sesion,admin);
        contrasena(sesion.contrasena);
        if((strcmp(sesion.contrasena,"0")==0)||ronda>4)
        {
            boton='0';
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
        iniciarSesionPantalla3(acceso,sesion,admin);
        fflush(stdin);
        boton=getch();
        system("cls");
    }
    while(boton!='1' && boton!='0');
    if(boton=='1')
    {
        FILE *archivo=fopen("Registro","rb");
        if(archivo!=NULL)
        {
            while((fread(&cuenta,sizeof(stUsuario),1,archivo)>0))
            {
                if(strcmp(sesion.usuario,cuenta.usuario)==0)
                {
                    iniciandoPantalla(acceso);
                    system("cls");
                    boton=ventanasAlumnos(cuenta,boton);
                }
            }
            fclose(archivo);
        }
    }
    return boton;
}
//CREAR CUENTA
char crearCuentaAlumno()                                        //BOTON 4: CREAR CUENTA
{
    stFecha fecha=fechaActual();
    stUsuario datos,datosAux;
    char boton='2';
    int ronda=1,repetido=1,flag=0;
    //ESTADO
    datos.estado=1;
    //NOMBRE
    crearCuentaAlumnoPantalla1();
    fflush(stdin);
    gets(datos.nombre);
    if(strcmp(datos.nombre,"0")==0)
    {
        boton='0';
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
            boton='0';
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
    //NACIMIENTO
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
                boton='0';
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
                boton='0';
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
                boton='0';
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
    //SALDO
    datos.saldo=0;
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
            boton='0';
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
            boton='0';
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
            boton='0';
            return boton;
        }
        ronda++;
        system("cls");
    }
    while(strcmp(datos.contrasena,datosAux.contrasena)!=0);
    //CONFIRMACION
    while(boton!='1' && boton!='0')
    {
        crearCuentaAlumnoPantalla7(datos);
        fflush(stdin);
        boton=getch();
        system("cls");
    }
    if(boton=='1')
    {
        FILE *archivoUsuarios=fopen("Registro","ab");
        if(archivoUsuarios!=NULL)
        {
            fwrite(&datos,sizeof(stUsuario),1,archivoUsuarios);
            fclose(archivoUsuarios);
        }
        boton='0';
    }
    return boton;
}
//VENTANAS ALUMNOS
char ventanasAlumnos(stUsuario sesion,char boton)               //VENTANAS ALUMNOS
{
    do
    {
        switch(boton)
        {
            case('1'):
            {
                system("cls");
                boton=estadoDeCuentaAlumno(sesion);
            }
            break;
            case('2'):
            {
                system("cls");
                boton=datosPersonales(sesion);
            }
            break;
            case('3'):
            {
                system("cls");
                color(15);
                boton=deposito(sesion);
            }
            break;
            case('4'):
            {
                system("cls");
                boton=pago(&sesion);
            }
            break;
            case('5'):
            {
                system("cls");
                boton=historial(sesion);
            }
            break;
        }
    }
    while(boton!='0');
    return boton;
}
char estadoDeCuentaAlumno(stUsuario sesion)                         //BOTON 1
{
    int acceso=0;
    char boton;
    do
    {
        estadoDeCuentaAlumnoPantalla(sesion,acceso);
        fflush(stdin);
        boton=getch();
        system("cls");
    }
    while(boton!='2' && boton!='3' && boton!='4' && boton!='5' && boton!='0');
    return boton;
}
char datosPersonales(stUsuario sesion)                              //BOTON 2
{
    int acceso=0;
    char boton;
    do
    {
        datosPersonalesPantalla(sesion,acceso);
        fflush(stdin);
        boton=getch();
        system("cls");
    }
    while(boton!='1' && boton!='0');
    return boton;
}
char deposito(stUsuario aux)                                        //BOTON 3
{
    stFecha fecha=fechaActual();
    char boton;
    int ronda=1;
    stToken transaccion;
    transaccion.dni=aux.dni;
    strcpy(transaccion.origen,"UTN");
    strcpy(transaccion.destino,aux.usuario);
    transaccion.fecha=fecha;
    strcpy(transaccion.detalle,"CARGA DE DINERO");
    transaccion.acreditado=0;
    do
    {
        depositoPantalla1(ronda);
        scanf("%f",&transaccion.monto);
        system("cls");
        ronda++;
    }
    while(transaccion.monto<=0);
    do
    {
        depositoPantalla2(transaccion);
        fflush(stdin);
        boton=getch();
        system("cls");
    }
    while(boton!='1' && boton!='0');
    if(boton=='0')
    {
        boton='1';
        transaccion.monto=0;
    }
    else
    {
        transaccion=generadorToken(transaccion);
        depositoPantalla3(transaccion);
        system("cls");
    }
    return boton;
}
char pago(stUsuario *sesion)                                        //BOTON 4
{
    char boton;
    stToken transaccion;
    stToken to;
    int token,flag=0;
    FILE *archivo=fopen("Transacciones","rb");
    if(archivo!=NULL)
    {
        do
        {
            pagoPantalla1();
            scanf("%i",&token);
            system("cls");
        }
        while(token<0 || (token>0 && token<10000));
        if(token==0)
        {
            boton='1';
            return boton;
        }
        while((fread(&to,sizeof(stToken),1,archivo)>0) && flag==0)
        {
            if(token==to.token)
            {
                flag=1;
                transaccion=to;
            }
        }
        fclose(archivo);
    }
    pagoPantalla2(token);
    system("cls");
    if(flag==1 && transaccion.acreditado==0 && strcmp(transaccion.origen,sesion->usuario)==0 && transaccion.monto<=sesion->saldo)
    {
        do
        {
            pagoPantalla3(transaccion);
            fflush(stdin);
            boton=getch();
            system("cls");
        }
        while(boton!='1' && boton!='0');
        flag=0;
        if(boton=='0')
        {
            boton='1';
        }
        else
        {
            acreditacionToken(transaccion);
            flag=0;
            stUsuario alumno;
            int u=sizeof(stUsuario);
            FILE *archivo3=fopen("Registro","r+b");
            if(archivo3!=NULL)
            {
                while((fread(&alumno,sizeof(stUsuario),1,archivo3)>0) && flag==0)
                {
                    if(transaccion.dni==alumno.dni)
                    {
                        alumno.saldo=alumno.saldo-transaccion.monto;
                        *sesion=alumno;
                        fseek(archivo3,-u,SEEK_CUR);
                        fwrite(&alumno,sizeof(stUsuario),1,archivo3);
                        flag=1;
                        fseek(archivo3,0,SEEK_END);
                    }
                }
                fclose(archivo3);
            }
            flag=0;
            stAdmin admin;
            int v=sizeof(stAdmin);
            char tipo[15];
            FILE *archivo4=fopen("Admin","r+b");
            if(archivo4!=NULL)
            {
                while((fread(&admin,sizeof(stAdmin),1,archivo4)>0) && flag==0)
                {
                    switch(admin.tipo)
                    {
                        case(1):
                        {
                            strcpy(tipo,"UTN");
                        }
                        break;
                        case(2):
                        {
                            strcpy(tipo,"BUFFET");
                        }
                        break;
                        case(3):
                        {
                            strcpy(tipo,"FOTOCOPIADORA");
                        }
                        break;
                    }
                    if(strcmp(transaccion.destino,tipo)==0)
                    {
                        admin.saldo=admin.saldo+transaccion.monto;
                        fseek(archivo4,-v,SEEK_CUR);
                        fwrite(&admin,sizeof(stAdmin),1,archivo4);
                        flag=1;
                        fseek(archivo4,0,SEEK_END);
                    }
                }
                fclose(archivo4);
            }
        }
    }
    else
    {
        boton='1';
        if(transaccion.monto>sesion->saldo)
        {
            pagoPantalla5(token);
        }
        else
        {
            pagoPantalla4(token);
        }
    }
    return boton;
}
char historial(stUsuario sesion)                                    //BOTON 5
{
    char boton='4';
    int i,d=0,flag=0,ultimo=0;
    stToken aux;
    int t=sizeof(stToken);
    FILE *archivo=fopen("Transacciones","rb");
    if(archivo!=NULL)
    {
        do
        {
            if(boton=='4')
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
                fflush(stdin);
                boton=getch();
            }
            while(boton!='4' && boton!='0');
            if(d<9 || feof(archivo))
            {
                rewind(archivo);
            }
            system("cls");
        }
        while(boton!='0');
        fclose(archivo);
    }
    boton='1';
    return boton;
}
//ADMINS
char administradores()                                      //BOTON 2: MENU ADMINISTRADORES
{
    char boton;
    do
    {
        do
        {
            pantallaAdministradores();
            fflush(stdin);
            boton=getch();
            system("cls");
        }
        while(boton!='3' && boton!='4' && boton!='0');
        switch(boton)
        {
            case('3'):
            {
                boton=iniciarSesionAdmin();
                system("cls");
            }
            break;
            case('4'):
            {
                char admin[20]="utn2022";
                char buffet[20]="buffet2022";
                char fotocopiadora[20]="fotocopia2022";
                system("cls");
                color(15);
                char clave[20];
                claveAdmin();
                contrasena(clave);
                system("cls");
                if(strcmp(admin,clave)==0)
                {
                    boton=crearCuentaAdmin(1);
                    system("cls");
                }
                if(strcmp(buffet,clave)==0)
                {
                    boton=crearCuentaAdmin(2);
                    system("cls");
                }
                if(strcmp(fotocopiadora,clave)==0)
                {
                    boton=crearCuentaAdmin(3);
                    system("cls");
                }
                else
                {
                    boton='0';
                }
            }
            break;
        }
    }
    while(boton!='0');
    return boton;
}
//INICIAR SESION
char iniciarSesionAdmin()                                       //BOTON 3: INICIAR SESION
{
    char boton='1',volverString[10]="0";
    int flag=0,ronda=1,acceso=1;
    stAdmin sesion,cuenta;
    stUsuario usuario;
    //USUARIO
    while(flag!=1)
    {
        iniciarSesionPantalla1(ronda,acceso);
        fflush(stdin);
        gets(sesion.usuario);
        if(strcmp(sesion.usuario,volverString)==0)
        {
            boton='0';
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
        iniciarSesionPantalla2(ronda,acceso,usuario,sesion);
        contrasena(sesion.contrasena);
        if(strcmp(sesion.contrasena,"0")==0||ronda>4)
        {
            boton='0';
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
    //INICIANDO
    do
    {
        iniciarSesionPantalla3(acceso,usuario,sesion);
        fflush(stdin);
        boton=getch();
        system("cls");
    }
    while(boton!='1' && boton!='0');
    if(boton=='1')
    {
        FILE *archivo=fopen("Admin","rb");
        if(archivo!=NULL)
        {
            while((fread(&cuenta,sizeof(stAdmin),1,archivo)>0))
            {
                if(strcmp(sesion.usuario,cuenta.usuario)==0)
                {
                    iniciandoPantalla(acceso);
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
char crearCuentaAdmin(int tipo)                                 //BOTON 4: CREAR CUENTA
{
    stAdmin datos,datosAux;
    char boton=4;
    int ronda=1,repetido=1,flag=0;
    //TIPO
    datos.tipo=tipo;
    system("cls");
    //NOMBRE
    crearCuentaAdminPantalla1(datos);
    fflush(stdin);
    gets(datos.nombre);
    if(strcmp(datos.nombre,"0")==0)
    {
        boton='0';
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
            boton='0';
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
            boton='0';
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
            boton='0';
            return boton;
        }
        ronda++;
        system("cls");
    }
    while(strcmp(datos.contrasena,datosAux.contrasena)!=0);
    //CONFIRMACION
    while(boton!='1' && boton!='0')
    {
        crearCuentaAdminPantalla5(datos);
        fflush(stdin);
        boton=getch();
        system("cls");
    }
    if(boton=='1')
    {
        FILE *archivoAdmin=fopen("Admin","ab");
        if(archivoAdmin!=NULL)
        {
            fwrite(&datos,sizeof(stAdmin),1,archivoAdmin);
            fclose(archivoAdmin);
        }
        boton='0';
    }
    return boton;
}
//VENTANAS ADMIN
char ventanasAdmin(stAdmin sesion,char boton)                   //VENTANAS ADMIN
{
    //DEPENDE TIPO DE ADMIN
    do
    {
        switch(boton)
        {
            case('1'):
            {
                system("cls");
                boton=estadoDeCuentaAdmin(sesion);
            }
            break;
            case('3'):
            {
                system("cls");
                boton=adminDeposito(sesion);
            }
            break;
            case('4'):
            {
                system("cls");
                boton=adminPago(sesion);
            }
            break;
            case('5'):
            {
                system("cls");
                boton=listaUsuarios();
            }
            break;
            case('6'):
            {
                system("cls");
                boton=retiroDinero(sesion);
            }
            break;
            case('7'):
            {
                system("cls");
                boton=adminRetiro();
            }
            break;
            case('8'):
            {
                system("cls");
                boton=historialTransacciones(sesion);
            }
            break;
            case('9'):
            {
                int dni,ronda=1,acceso=1;
                do
                {
                    adminPagoPantalla1(ronda,acceso,sesion);
                    scanf("%i",&dni);
                    system("cls");
                    if(dni==0)
                    {
                        boton='1';
                    }
                    else
                    {
                        boton=busquedaUsuario(dni);
                    }
                    ronda++;
                }
                while(boton!='1');
            }
            break;
        }
    }
    while(boton!='0');
    return boton;
}
char estadoDeCuentaAdmin(stAdmin sesion)                            //BOTON 1
{
    char boton='1';
    do
    {
        estadoDeCuentaAdminPantalla(sesion);
        fflush(stdin);
        boton=getch();
        system("cls");
    }
    while(boton!='3' && boton!='4' && boton!='5' && boton!='6' && boton!='7' && boton!='8' && boton!='9' && boton!='0');
    if(sesion.tipo!=1 && (boton=='3' || boton=='7'))
    {
        boton='1';
    }
    if(sesion.tipo!=1 && boton=='5')
    {
        boton='1';
    }
    if(sesion.tipo==1 && boton=='6')
    {
        boton='1';
    }
    if(sesion.tipo!=1 && boton=='8')
    {
        boton='1';
    }
    if(sesion.tipo!=1 && boton=='9')
    {
        boton='1';
    }
    return boton;
}
char adminDeposito()                                                //BOTON 3
{
    char boton;
    stToken transaccion;
    stToken to;
    int token,flag=0;
    FILE *archivo=fopen("Transacciones","rb");
    if(archivo!=NULL)
    {
        do
        {
            adminDepositoPantalla1();
            scanf("%i",&token);
            system("cls");
        }
        while(token<0 || (token>0 && token<10000));
        if(token==0)
        {
            boton='1';
            return boton;
        }
        while((fread(&to,sizeof(stToken),1,archivo)>0) && flag==0)
        {
            if(token==to.token)
            {
                flag=1;
                transaccion=to;
            }
        }
        fclose(archivo);
    }
    adminDepositoPantalla2(token);
    system("cls");
    if(flag==1 && transaccion.acreditado==0 && strcmp(transaccion.origen,"UTN")==0)
    {
        do
        {
            adminDepositoPantalla3(transaccion);
            fflush(stdin);
            boton=getch();
            system("cls");
        }
        while(boton!='1' && boton!='0');
        flag=0;
        if(boton=='0')
        {
            boton='1';
        }
        else
        {
            acreditacionToken(transaccion);
            flag=0;
            stUsuario alumno;
            int u=sizeof(stUsuario);
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
                        fseek(archivo3,0,SEEK_END);
                    }
                }
                fclose(archivo3);
            }
        }
    }
    else
    {
        boton='1';
        adminDepositoPantalla4(token);
    }
    return boton;
}
char adminPago(stAdmin admin)                                       //BOTON 4
{
    stFecha fecha=fechaActual();
    char boton;
    int ronda=1,existe=0,acceso=2;
    stToken transaccion;
    stUsuario aux;
    color(15);
    FILE *archivo=fopen("Registro","rb");
    if(archivo!=NULL)
    {
        do
        {
            adminPagoPantalla1(ronda,acceso,admin);
            scanf("%i",&transaccion.dni);
            if(transaccion.dni==0)
            {
                boton='1';
                return boton;
            }
            while(fread(&aux,sizeof(stUsuario),1,archivo)>0 && existe==0)
            {
                if(aux.dni==transaccion.dni)
                {
                    strcpy(transaccion.origen,aux.usuario);
                    existe=1;
                }
            }
            rewind(archivo);
            ronda++;
            system("cls");
        }
        while(existe==0);
        fclose(archivo);
    }
    switch(admin.tipo)
    {
        case(1):
        {
            strcpy(transaccion.destino,"UTN");
            strcpy(transaccion.detalle,"PAGO CUOTA");
        }
        break;
        case(2):
        {
            strcpy(transaccion.destino,"BUFFET");
            strcpy(transaccion.detalle,"PAGO BUFFET");
        }
        break;
        case(3):
        {
            strcpy(transaccion.destino,"FOTOCOPIADORA");
            strcpy(transaccion.detalle,"PAGO FOTOCOPIADORA");
        }
        break;
    }
    transaccion.fecha=fecha;
    transaccion.acreditado=0;
    ronda=1;
    do
    {
        adminPagoPantalla2(ronda,admin);
        scanf("%f",&transaccion.monto);
        system("cls");
        ronda++;
    }
    while(transaccion.monto<=0);
    do
    {
        adminPagoPantalla3(transaccion,admin);
        fflush(stdin);
        boton=getch();
        system("cls");
    }
    while(boton!='1' && boton!='0');
    if(boton=='0')
    {
        boton='1';
        transaccion.monto=0;
    }
    else
    {
        transaccion=generadorToken(transaccion);
        adminPagoPantalla4(transaccion,admin);
        system("cls");
    }
    return boton;
}
char listaUsuarios()                                                //BOTON 5
{
    char boton='4';
    int i,d=0,flag=0,ultimo=0;
    stUsuario user;
    int u=sizeof(stUsuario);
    FILE *archivo=fopen("Registro","rb");
    if(archivo!=NULL)
    {
        do
        {
            if(boton=='4')
            {
                flag=0;
                if(!feof(archivo))
                {
                    listaUsuariosPantalla1();
                }
                d=0;
                while(fread(&user,sizeof(stUsuario),1,archivo)>0 && d<9)
                {
                    flag=listaUsuariosPantalla2(user,flag);
                    d++;
                }
                if(d==9 && !feof(archivo))
                {
                    fseek(archivo,-u,SEEK_CUR);
                }
                if(d>0)
                {
                    for(i=d;i<9;i++)
                    {
                        flag=listaUsuariosPantalla3(flag);
                    }
                    if(d<9)
                    {
                        ultimo=1;
                    }
                    else
                    {
                        ultimo=0;
                    }
                    listaUsuariosPantalla4(ultimo);
                }
            }
            do
            {
                fflush(stdin);
                boton=getch();
            }
            while(boton!='4' && boton!='0');
            if(d<9 || feof(archivo))
            {
                rewind(archivo);
            }
            system("cls");
        }
        while(boton!='0');
        fclose(archivo);
    }
    boton='1';
    return boton;
}
char retiroDinero(stAdmin admin)                                    //BOTON 6
{
    stFecha fecha=fechaActual();
    char boton;
    int ronda=1;
    stToken transaccion;
    switch(admin.tipo)
    {
        case(2):
        {
            strcpy(transaccion.origen,"BUFFET");
            transaccion.dni=2;
        }
        break;
        case(3):
        {
            strcpy(transaccion.origen,"FOTOCOPIADORA");
            transaccion.dni=3;
        }
        break;
    }
    strcpy(transaccion.destino,"UTN");
    strcpy(transaccion.detalle,"RETIRO DE DINERO");
    transaccion.fecha=fecha;
    transaccion.acreditado=0;
    ronda=1;
    do
    {
        retiroPantalla1(ronda,admin);
        scanf("%f",&transaccion.monto);
        system("cls");
        ronda++;
    }
    while((transaccion.monto<=0 || transaccion.monto>50000) && transaccion.monto<=admin.saldo);
    do
    {
        retiroPantalla2(transaccion,admin);
        fflush(stdin);
        boton=getch();
        system("cls");
    }
    while(boton!='1' && boton!='0');
    if(boton=='0')
    {
        boton='1';
        transaccion.monto=0;
    }
    else
    {
        transaccion=generadorToken(transaccion);
        retiroPantalla3(transaccion,admin);
        system("cls");
    }
    return boton;
}
char adminRetiro()                                                  //BOTON 7
{
    char boton;
    stToken transaccion;
    stToken to;
    int token,flag=0;
    FILE *archivo=fopen("Transacciones","rb");
    if(archivo!=NULL)
    {
        do
        {
            adminRetiroPantalla1();
            scanf("%i",&token);
            system("cls");
        }
        while(token<0 || (token>0 && token<10000));
        if(token==0)
        {
            boton='1';
            return boton;
        }
        while((fread(&to,sizeof(stToken),1,archivo)>0) && flag==0)
        {
            if(token==to.token)
            {
                flag=1;
                transaccion=to;
            }
        }
        fclose(archivo);
    }
    adminRetiroPantalla2(token);
    system("cls");
    if(flag==1 && transaccion.acreditado==0 && (strcmp(transaccion.origen,"BUFFET")==0 || strcmp(transaccion.origen,"FOTOCOPIADORA")==0))
    {
        do
        {
            adminRetiroPantalla3(transaccion);
            fflush(stdin);
            boton=getch();
            system("cls");
        }
        while(boton!='1' && boton!='0');
        flag=0;
        if(boton=='0')
        {
            boton='1';
        }
        else
        {
            acreditacionToken(transaccion);
            flag=0;
            stAdmin admin;
            char tipo[15];
            int v=sizeof(stAdmin);
            FILE *archivo3=fopen("Admin","r+b");
            if(archivo3!=NULL)
            {
                while((fread(&admin,sizeof(stAdmin),1,archivo3)>0) && flag==0)
                {
                    switch(admin.tipo)
                    {
                        case(1):
                        {
                            strcpy(tipo,"UTN");
                        }
                        break;
                        case(2):
                        {
                            strcpy(tipo,"BUFFET");
                        }
                        break;
                        case(3):
                        {
                            strcpy(tipo,"FOTOCOPIADORA");
                        }
                        break;
                    }
                    if(strcmp(transaccion.origen,tipo)==0)
                    {
                        admin.saldo=admin.saldo-transaccion.monto;
                        fseek(archivo3,-v,SEEK_CUR);
                        fwrite(&admin,sizeof(stAdmin),1,archivo3);
                        flag=1;
                        fseek(archivo3,0,SEEK_END);
                    }
                }
                fclose(archivo3);
            }
        }
    }
    else
    {
        boton='1';
        adminRetiroPantalla4(token);
    }
    return boton;
}
char historialTransacciones(stAdmin sesion)                         //BOTON 8
{
    char boton='4';
    int i,d=0,flag=0,ultimo=0;
    stToken aux;
    int t=sizeof(stToken);
    FILE *archivo=fopen("Transacciones","rb");
    if(archivo!=NULL)
    {
        do
        {
            if(boton=='4')
            {
                flag=0;
                if(!feof(archivo))
                {
                    historialPantalla1();
                }
                d=0;
                while(fread(&aux,sizeof(stToken),1,archivo)>0 && d<9)
                {
                    flag=historialPantalla2(aux,flag);
                    d++;
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
                fflush(stdin);
                boton=getch();
            }
            while(boton!='4' && boton!='0');
            if(d<9 || feof(archivo))
            {
                rewind(archivo);
            }
            system("cls");
        }
        while(boton!='0');
        fclose(archivo);
    }
    boton='1';
    return boton;
}
char busquedaUsuario(int dni)                                       //BOTON 9
{
    int existe=0,u=sizeof(stUsuario),acceso=1;
    char boton;
    stUsuario aux,alumno;
    FILE *archivo=fopen("Registro","r+b");
    if(archivo!=NULL)
    {
        while((fread(&aux,sizeof(stUsuario),1,archivo)>0) && existe==0)
        {
            if(dni==aux.dni)
            {
                existe=1;
                alumno=aux;
                fseek(archivo,-u,SEEK_CUR);
                do
                {
                    estadoDeCuentaAlumnoPantalla(alumno,acceso);
                    fflush(stdin);
                    boton=getch();
                    system("cls");
                }
                while(boton!='2' && boton!='3' && boton!='4' && boton!='5' && boton!='0');
                if(boton=='3')
                {
                    alumno.estado=1;
                }
                if(boton=='4')
                {
                    alumno.estado=0;
                }
                fwrite(&alumno,sizeof(stUsuario),1,archivo);
                fseek(archivo,0,SEEK_END);
            }
        }
        fclose(archivo);
    }
    if(boton=='2')
    {
        do
        {
            datosPersonalesPantalla(alumno,acceso);
            fflush(stdin);
            boton=getch();
            system("cls");
        }
        while(boton!='1' && boton!='0');
    }
    if(boton=='5')
    {
        boton=historial(alumno);
    }
    if(boton=='3' || boton=='4')
    {
        boton='1';
    }
    if(boton=='1')
    {
        boton=busquedaUsuario(dni);
    }
    if(boton=='0')
    {
        boton='1';
    }
    return boton;
}
//UNIVERSAL
void contrasena(char cont[30])                                  //ASTERISCOS
{
    int p=0;
    do
    {
        fflush(stdin);
        cont[p]=getch();
        if(cont[p]!= '\r')
        {
            if(cont[p]!='\b')
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
    while(cont[p]!='\r');
    cont[p]='\0';
}
stToken generadorToken(stToken transaccion)                     //TOKEN
{
    int flag=0,repetido=1;
    stToken taux;
    srand(time(NULL));
    FILE *archivo=fopen("Transacciones","r+b");
    if(archivo!=NULL)
    {
        fseek(archivo,0,SEEK_SET);
        while(repetido==1)
        {
            while((fread(&taux,sizeof(stToken),1,archivo)>0) && flag==0)
            {
                transaccion.token=rand()%89999+10000;
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
        fseek(archivo,0,SEEK_END);
        fwrite(&transaccion,sizeof(stToken),1,archivo);
        fclose(archivo);
    }
    else
    {
        transaccion.token=rand()%89999+10000;
        archivo=fopen("Transacciones","ab");
        if(archivo!=NULL)
        {
            fwrite(&transaccion,sizeof(stToken),1,archivo);
            fclose(archivo);
        }
    }
    return transaccion;
}
void acreditacionToken(stToken transaccion)                     //ACREDITACION DEL TOKEN
{
    stToken aux;
    int flag=0,t=sizeof(stToken);
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
                rewind(archivo2);
            }
        }
        fclose(archivo2);
    }
}
//FIN
