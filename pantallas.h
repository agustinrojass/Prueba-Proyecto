//STRUCTS
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
//INICIO
void pantallaInicio();                                          //PANTALLA INICIO
//ALUMNOS
void pantallaAlumnos();                                             //PANTALLA ALUMNOS
//INICIAR SESION
void iniciarSesionAlumnoPantalla1(int ronda);                           //PANTALLA QUE PIDE USUARIO
void iniciarSesionAlumnoPantalla2(int ronda,stUsuario sesion);          //PANTALLA QUE PIDE CONTRASENA
void iniciarSesionAlumnoPantalla3(stUsuario sesion);                    //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
void iniciandoPantalla();                                               //PANTALLA INICIANDO SESION
//CREAR CUENTA
void crearCuentaAlumnoPantalla1();                                      //PANTALLA QUE PIDE NOMBRE
void crearCuentaAlumnoPantalla2(int ronda,stUsuario datos);             //PANTALLA QUE PIDE DOCUMENTO
void crearCuentaAlumnoPantalla3(int ronda,int parte,stUsuario datos);   //PANTALLA QUE PIDE FECHA DE NACIMIENTO
void crearCuentaAlumnoPantalla4(int ronda,stUsuario datos);             //PANTALLA QUE PIDE USUARIO
void crearCuentaAlumnoPantalla5(int ronda,stUsuario datos);             //PANTALLA QUE PIDE CONTRASENA
void crearCuentaAlumnoPantalla6(int ronda,stUsuario datos);             //PANTALLA QUE PIDE REPETIR CONTRASENA
void crearCuentaAlumnoPantalla7(int boton,stUsuario datos);             //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
//ESTADO DE LA CUENTA
void estadoDeCuentaAlumnoPantalla(stUsuario sesion);                    //PANTALLA ESTADO DE LA CUENTA DEL ALUMNO
//DATOS PERSONALES
void datosPersonalesPantalla(stUsuario sesion);                         //PANTALLA DATOS PERSONALES DEL ALUMNO
//ADMINS
void pantallaAdministradores();                                     //PANTALLA ADMINISTRADORES
//INICIAR SESION
void iniciarSesionAdminPantalla1(int ronda);                            //PANTALLA QUE PIDE USUARIO
void iniciarSesionAdminPantalla2(int ronda,stAdmin sesion);             //PANTALLA QUE PIDE CONTRASENA
void iniciarSesionAdminPantalla3(stAdmin sesion);                       //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
void iniciandoAdminPantalla();                                          //PANTALLA INICIANDO SESION
//CREAR CUENTA
void crearCuentaAdminPantalla1(stAdmin sesion);                         //PANTALLA QUE PIDE NOMBRE
void crearCuentaAdminPantalla2(int ronda,stAdmin datos);                //PANTALLA QUE PIDE USUARIO
void crearCuentaAdminPantalla3(int ronda,stAdmin datos);                //PANTALLA QUE PIDE CONTRASENA
void crearCuentaAdminPantalla4(int ronda,stAdmin datos);                //PANTALLA QUE PIDE REPETIR CONTRASENA
void crearCuentaAdminPantalla5(int boton,stAdmin datos);                //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
//ESTADO DE LA CUENTA
void estadoDeCuentaAdminPantalla(stAdmin sesion);                       //PANTALLA ESTADO DE LA CUENTA DEL ADMIN
//COLORES
int color(int num);
//FECHA
stFecha fechaActual();

//FIN
