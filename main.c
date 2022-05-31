#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//CREAR APLICACION DE UTN WALLET


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
    char usuario[20];
    float saldo;
} stSaldo;

//INICIO
void inicio();
void pantallaInicio();
//FIN

//CREAR CUENTA
void crearCuenta();
//FIN

//INICIAR SESION
void iniciarSesion();
//FIN

//VETANAS
void ventanas(stUsuario sesion,int boton);
int estadoDeCuenta(stUsuario sesion,float pesos);   //BOTON 1
int datosPersonales(stUsuario aux);                 //BOTON 2
int deposito(stUsuario aux,float *pesos);           //BOTON 3
int pago(stUsuario sesion);                         //BOTON 4
int editarDatos(stUsuario sesion);                  //BOTON 5
int buffet(stUsuario sesion,float *pesos);          //BOTON 7
int cuota(stUsuario sesion,float *pesos);           //BOTON 8
int fotocopiadora(stUsuario sesion,float *pesos);   //BOTON 9
//FIN


int main()
{

    inicio();
    //muestra();
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
        }
        while(navegacion!=1 && navegacion!=2 && navegacion!=0);
        switch(navegacion)
        {
            case 1:
            {
                system("cls");
                iniciarSesion();
                system("pause");
                system("cls");
            }
            break;
            case 2:
            {
                crearCuenta();
                system("pause");
                system("cls");
            }
            break;
        }
    }
    while(navegacion!=0);
}
void pantallaInicio()
{
    printf(" _____________________________ ____________________ __________________ ___________ \n");
    printf("| UTN WALLET                  | INICIAR SESION (1) | CREAR CUENTA (2) | SALIR (0) |\n");
    printf("|_____________________________|____________________|__________________|___________|\n");
    printf("|                                                                                 |\n");
    printf("|  ##   ## ######## ##   ##       ##    ## ####### ##     ##     ###### ########  |\n");
    printf("|  ##   ## ######## ###  ##       ##    ## ####### ##     ##     ###### ########  |\n");
    printf("|  ##   ##    ##    ###  ##       ##    ## ##   ## ##     ##     ##        ##     |\n");
    printf("|  ##   ##    ##    #### ##       ##    ## ##   ## ##     ##     ##        ##     |\n");
    printf("|  ##   ##    ##    #### ##       ##    ## ####### ##     ##     ######    ##     |\n");
    printf("|  ##   ##    ##    ## ####       ## ## ## ####### ##     ##     ##        ##     |\n");
    printf("|  ##   ##    ##    ## ####       ######## ##   ## ##     ##     ##        ##     |\n");
    printf("|  #######    ##    ##  ###       ######## ##   ## ###### ###### ######    ##     |\n");
    printf("|  #######    ##    ##  ###       ###  ### ##   ## ###### ###### ######    ##     |\n");
    printf("|_________________________________________________________________________________|\n");
}
//FIN

//CREAR CUENTA
void crearCuenta()
{
    stUsuario datos;
    stUsuario datosAux;
    FILE *archivoUsuarios=fopen("Usuarios","ab");
    if(archivoUsuarios!=NULL)
    {
        printf("Ingrese su nombre y apellido: ");
        fflush(stdin);
        gets(datos.nombre);
        printf("Ingrese su numero de documento: ");
        scanf("%i",&datos.dni);
        printf("Ingrese su edad: ");
        scanf("%i",&datos.edad);

        printf("Ingrese su nombre de usuario: ");
        fflush(stdin);
        gets(datos.usuario);

        //VER SI EL NOMBRE DE USUARIO ESTA DISPONIBLE

        do
        {
            do
            {
                printf("Ingrese una contrasena (8 caracteres minimo): ");
                fflush(stdin);
                gets(datos.contrasena);
            }
            while(strlen(datos.contrasena)<8);
            printf("Vuelva a ingresar la misma contrasena: ");
            fflush(stdin);
            gets(datosAux.contrasena);
        }
        while(strcmp(datos.contrasena,datosAux.contrasena)!=0);
        fwrite(&datos,sizeof(stUsuario),1,archivoUsuarios);
        fclose(archivoUsuarios);
    }
}
//FIN

//INICIAR SESION
void iniciarSesion()
{
    int flag=0,boton;
    stUsuario sesion,cuenta;
    do
    {
        printf(" _________________________________________________________________________________ \n");
        printf("| UTN WALLET                                                                      |\n");
        printf("|_________________________________________________________________________________|\n");
        printf("|                                                                                 |\n");
        printf("|_________________________________________                                        |\n");
        printf("| NOMBRE DE USUARIO: ");
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
    while(flag!=1);
    flag=0;
    do
    {
        printf(" _________________________________________________________________________________ \n");
        printf("| UTN WALLET                                                                      |\n");
        printf("|_________________________________________________________________________________|\n");
        printf("|                                                                                 |\n");
        printf("|_________________________________________                                        |\n");
        printf("| NOMBRE DE USUARIO: %-20s |                                       |\n",sesion.usuario);
        printf("|_________________________________________|                                       |\n");
        printf("| CONTRASENA: ");
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
    while(flag!=1);
    printf(" __________________________________________________________________ ______________ \n");
    printf("| UTN WALLET                                                       | CANCELAR (0) |\n");
    printf("|__________________________________________________________________|______________|\n");
    printf("|                                                                                 |\n");
    printf("|_________________________________________                                        |\n");
    printf("| NOMBRE DE USUARIO: %-20s |                                       |\n",sesion.usuario);
    printf("|_________________________________________|                                       |\n");
    printf("| CONTRASENA: %-27s |                                       |\n",sesion.contrasena);
    printf("|_________________________________________|                                       |\n");
    printf("|                                                                                 |\n");
    printf("|                                                           ____________________  |\n");
    printf("|                                                          | INICIAR SESION (1) | |\n");
    printf("|                                                          |____________________| |\n");
    printf("|_________________________________________________________________________________|\n");
    scanf("%i",&boton);
    FILE *archivo=fopen("Usuarios","rb");
    if(archivo!=NULL)
    {
        while((fread(&cuenta,sizeof(stUsuario),1,archivo)>0))
        {
            if(strcmp(sesion.usuario,cuenta.usuario)==0)
            {
                ventanas(cuenta,boton);
            }
        }
        fclose (archivo);
    }
}
//FIN

//VENTANAS
void ventanas(stUsuario sesion,int boton)
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
        printf(" _______________________________________ _____________________ ___________________ \n");
        printf("| UTN WALLET                            | DATOS PERSONALES (2)| CERRAR SESION (0) |\n");
        printf("|_______________________________________|_____________________|___________________|\n");
        printf("| ESTADO DE LA CUENTA                                                             |\n");
        printf("|________________________________________ ________________________________________|\n");
        printf("| USUARIO: %-29s |                                        |\n",sesion.usuario);
        printf("|________________________________________|                                        |\n");
        printf("| SALDO: $ %-29.2f |                                        |\n",suma);
        printf("|________________________________________|                                        |\n");
        printf("|                                                                                 |\n");
        printf("|                                                    ______________  ___________  |\n");
        printf("|                                                   | DEPOSITAR (3)|| PAGAR (4) | |\n");
        printf("|                                                   |______________||___________| |\n");
        printf("|_________________________________________________________________________________|\n");
        scanf("%i",&boton);
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
    int boton;
    do
    {
        printf(" ___________________________________ _________________________ ___________________ \n");
        printf("| UTN WALLET                        | ESTADO DE LA CUENTA (1) | CERRAR SESION (0) |\n");
        printf("|___________________________________|____ ____________________|___________________|\n");
        printf("| DATOS PERSONALES                       |                                        |\n");
        printf("|________________________________________|                                        |\n");
        printf("| NOMBRE: %-30s |                                        |\n",sesion.nombre);
        printf("|________________________________________|                                        |\n");
        printf("| DOCUMENTO: %-27i |                                        |\n",sesion.dni);
        printf("|________________________________________|                                        |\n");
        printf("| EDAD: %-32i |                                        |\n",sesion.edad);
        printf("|________________________________________|         _____________________________  |\n");
        printf("|                                                 | EDITAR DATOS PERSONALES (5) | |\n");
        printf("|                                                 |_____________________________| |\n");
        printf("|_________________________________________________________________________________|\n");
        scanf("%i",&boton);
    }
    while(boton!=1 && boton!=0);
    return boton;
}
int deposito(stUsuario aux,float *pesos)                //BOTON 3
{
    int boton;
    do
    {
        printf(" _________________________________________________________________________________ \n");
        printf("| UTN WALLET                                                                      |\n");
        printf("|_________________________________________________________________________________|\n");
        printf("| DEPOSITAR                                                                       |\n");
        printf("|_________________________________________________________________________________|\n");
        printf("| SALDO: $ ");
        scanf("%f",pesos);
        system("cls");
        printf(" __________________________________________________________________ ______________ \n");
        printf("| UTN COIN                                                         | CANCELAR (0) |\n");
        printf("|__________________________________________________________________|______________|\n");
        printf("| DEPOSITAR                                                                       |\n");
        printf("|________________________________________ ________________________________________|\n");
        printf("| SALDO: $ %-29.2f |                                        |\n",*pesos);
        printf("|________________________________________|                                        |\n");
        printf("|                                                                                 |\n");
        printf("|                                                                                 |\n");
        printf("|                                                                                 |\n");
        printf("|                                                                _______________  |\n");
        printf("|                                                               | CONFIRMAR (1) | |\n");
        printf("|                                                               |_______________| |\n");
        printf("|_________________________________________________________________________________|\n");
        scanf("%i",&boton);
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
        printf(" __________________________________________________________________ ______________ \n");
        printf("| UTN WALLET                                                       | CANCELAR (0) |\n");
        printf("|__________________________________________________________________|______________|\n");
        printf("| PAGAR                                                                           |\n");
        printf("|_________________________________________________________________________________|\n");
        printf("| DESTINATARIO:                                                                   |\n");
        printf("|_________________________________________________________________________________|\n");
        printf("|                                                                                 |\n");
        printf("|                                                                                 |\n");
        printf("|                                                                                 |\n");
        printf("|                                 ____________  ___________  ___________________  |\n");
        printf("|                                | BUFFET (7) || CUOTA (8) || FOTOCOPIADORA (9) | |\n");
        printf("|                                |____________||___________||___________________| |\n");
        printf("|_________________________________________________________________________________|\n");
        scanf("%i",&boton);
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
            printf(" _________________________________________________________________________________ \n");
            printf("| UTN WALLET                                                                      |\n");
            printf("|_________________________________________________________________________________|\n");
            printf("| PAGAR                                                                           |\n");
            printf("|________________________________________ ________________________________________|\n");
            printf("| DESTINATARIO: BUFFET                   |                                        |\n");
            printf("|________________________________________|                                        |\n");
            printf("| MONTO: $ ");
            scanf("%f",pesos);
            system("cls");
        }
        while(*pesos<sesion.saldo);
        printf(" __________________________________________________________________ ______________ \n");
        printf("| UTN WALLET                                                       | CANCELAR (0) |\n");
        printf("|__________________________________________________________________|______________|\n");
        printf("| PAGAR                                                                           |\n");
        printf("|________________________________________ ________________________________________|\n");
        printf("| DESTINATARIO: BUFFET                   |                                        |\n");
        printf("|________________________________________|                                        |\n");
        printf("| MONTO: $ %-29.2f |                                        |\n",*pesos);
        printf("|________________________________________|                                        |\n");
        printf("|                                                                                 |\n");
        printf("|                                                                _______________  |\n");
        printf("|                                                               | CONFIRMAR (1) | |\n");
        printf("|                                                               |_______________| |\n");
        printf("|_________________________________________________________________________________|\n");
        scanf("%i",&boton);
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
//FIN

