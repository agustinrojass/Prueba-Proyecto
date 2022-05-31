#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//VERSION 1.1


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
void crearCuentaAlumno();                           //BOTON 4

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
int administradores();                             //BOTON 2
void pantallaAdministradores();

int main()
{
    inicio();
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
    printf(" ___________________________________________________ ____________ ___________________ ___________ \n");
    printf("| UTN WALLET                                        | ALUMNO (1) | ADMINISTRADOR (2) | SALIR (0) |\n");
    printf("|___________________________________________________|____________|___________________|___________|\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|  ###   ### ######### ###   ###    ###   ### ######### ###       ###       ######### #########  |\n");
    printf("|  ###   ### ######### ####  ###    ###   ### ######### ###       ###       ######### #########  |\n");
    printf("|  ###   ###    ###    ####  ###    ###   ### ###   ### ###       ###       ###          ###     |\n");
    printf("|  ###   ###    ###    ##### ###    ###   ### ###   ### ###       ###       ###          ###     |\n");
    printf("|  ###   ###    ###    ##### ###    ###   ### ######### ###       ###       #########    ###     |\n");
    printf("|  ###   ###    ###    ### #####    ### # ### ######### ###       ###       ###          ###     |\n");
    printf("|  ###   ###    ###    ### #####    ######### ###   ### ###       ###       ###          ###     |\n");
    printf("|  #########    ###    ###  ####    ######### ###   ### ######### ######### #########    ###     |\n");
    printf("|  #########    ###    ###  ####    #### #### ###   ### ######### ######### #########    ###     |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|________________________________________________________________________________________________|\n");
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
                crearCuentaAlumno();
                system("cls");
            }
            break;
        }
    }
    while(boton!=0);
}
void pantallaAlumnos()
{
    printf(" ___________________________________________ ____________________ __________________ ____________ \n");
    printf("| UTN WALLET                                | INICIAR SESION (3) | CREAR CUENTA (4) | VOLVER (0) |\n");
    printf("|___________________________________________|____________________|__________________|____________|\n");
    printf("| ALUMNO                                                                                         |\n");
    printf("|________________________________________________________________________________________________|\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|  ###   ### ######### ###   ###    ###   ### ######### ###       ###       ######### #########  |\n");
    printf("|  ###   ### ######### ####  ###    ###   ### ######### ###       ###       ######### #########  |\n");
    printf("|  ###   ###    ###    ####  ###    ###   ### ###   ### ###       ###       ###          ###     |\n");
    printf("|  ###   ###    ###    ##### ###    ###   ### ###   ### ###       ###       ###          ###     |\n");
    printf("|  ###   ###    ###    ##### ###    ###   ### ######### ###       ###       #########    ###     |\n");
    printf("|  ###   ###    ###    ### #####    ### # ### ######### ###       ###       ###          ###     |\n");
    printf("|  ###   ###    ###    ### #####    ######### ###   ### ###       ###       ###          ###     |\n");
    printf("|  #########    ###    ###  ####    ######### ###   ### ######### ######### #########    ###     |\n");
    printf("|  #########    ###    ###  ####    #### #### ###   ### ######### ######### #########    ###     |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|________________________________________________________________________________________________|\n");
}
int iniciarSesionAlumno()
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
    printf("| NOMBRE DE USUARIO: %-20s |                                                      |\n",sesion.usuario);
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
                boton=ventanasAlumnos(cuenta,boton);
            }
        }
        fclose (archivo);
    }
    return boton;
}
void crearCuentaAlumno()
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
        printf(" ______________________________________________________ _____________________ ___________________ \n");
        printf("| UTN WALLET                                           | DATOS PERSONALES (2)| CERRAR SESION (0) |\n");
        printf("|______________________________________________________|_____________________|___________________|\n");
        printf("| ALUMNO                                                                                         |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| ESTADO DE LA CUENTA                                                                            |\n");
        printf("|________________________________________ _______________________________________________________|\n");
        printf("| USUARIO: %-29s |                                                       |\n",sesion.usuario);
        printf("|________________________________________|                                                       |\n");
        printf("| SALDO: $ %-29.2f |                                                       |\n",suma);
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
        printf("|                                                                   ______________  ___________  |\n");
        printf("|                                                                  | DEPOSITAR (3)|| PAGAR (4) | |\n");
        printf("|                                                                  |______________||___________| |\n");
        printf("|________________________________________________________________________________________________|\n");
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
    int boton;
    do
    {
        printf(" __________________________________________________ _________________________ ___________________ \n");
        printf("| UTN WALLET                                       | ESTADO DE LA CUENTA (1) | CERRAR SESION (0) |\n");
        printf("|__________________________________________________|_________________________|___________________|\n");
        printf("| ALUMNO                                                                                         |\n");
        printf("|________________________________________________________________________________________________|\n");
        printf("| DATOS PERSONALES                                                                               |\n");
        printf("|________________________________________ _______________________________________________________|\n");
        printf("| NOMBRE: %-30s |                                                       |\n",sesion.nombre);
        printf("|________________________________________|                                                       |\n");
        printf("| DOCUMENTO: %-27i |                                                       |\n",sesion.dni);
        printf("|________________________________________|                                                       |\n");
        printf("| EDAD: %-32i |                                                       |\n",sesion.edad);
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
        printf("|                                                                 _____________________________  |\n");
        printf("|                                                                | EDITAR DATOS PERSONALES (5) | |\n");
        printf("|                                                                |_____________________________| |\n");
        printf("|________________________________________________________________________________________________|\n");
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
            pantallaAlumnos();
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
    printf(" ___________________________________________ ____________________ __________________ ____________ \n");
    printf("| UTN WALLET                                | INICIAR SESION (5) | CREAR CUENTA (6) | VOLVER (0) |\n");
    printf("|___________________________________________|____________________|__________________|____________|\n");
    printf("| ADMINISTRADOR                                                                                  |\n");
    printf("|________________________________________________________________________________________________|\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|  ###   ### ######### ###   ###    ###   ### ######### ###       ###       ######### #########  |\n");
    printf("|  ###   ### ######### ####  ###    ###   ### ######### ###       ###       ######### #########  |\n");
    printf("|  ###   ###    ###    ####  ###    ###   ### ###   ### ###       ###       ###          ###     |\n");
    printf("|  ###   ###    ###    ##### ###    ###   ### ###   ### ###       ###       ###          ###     |\n");
    printf("|  ###   ###    ###    ##### ###    ###   ### ######### ###       ###       #########    ###     |\n");
    printf("|  ###   ###    ###    ### #####    ### # ### ######### ###       ###       ###          ###     |\n");
    printf("|  ###   ###    ###    ### #####    ######### ###   ### ###       ###       ###          ###     |\n");
    printf("|  #########    ###    ###  ####    ######### ###   ### ######### ######### #########    ###     |\n");
    printf("|  #########    ###    ###  ####    #### #### ###   ### ######### ######### #########    ###     |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|                                                                                                |\n");
    printf("|________________________________________________________________________________________________|\n");
}
