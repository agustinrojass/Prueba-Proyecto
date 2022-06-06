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
typedef struct  //STRUCT TOKEN
{
    int token;
    int dni;
    char origen[20];
    char destino[20];
    char detalle[50];
    float monto;
    stFecha fecha;
    int acreditado;
} stToken;
//COLORES
int color(int num);
//FECHA
stFecha fechaActual();
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
//VENTANAS
void estadoDeCuentaAlumnoPantalla(stUsuario sesion);                    //PANTALLA ESTADO DE LA CUENTA DEL ALUMNO
void datosPersonalesPantalla(stUsuario sesion);                         //PANTALLA DATOS PERSONALES DEL ALUMNO
void depositoPantalla1();                                               //PANTALLA DEPOSITO QUE PIDE MONTO
void depositoPantalla2(stToken transaccion);                            //PANTALLA DEPOSITO QUE PIDE CONFIRMAR/CANCELAR
void depositoPantalla3(stToken transaccion);                            //PANTALLA DEPOSITO QUE MUESTRA TOKEN
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
//VENTANAS
void estadoDeCuentaAdminPantalla(stAdmin sesion);                       //PANTALLA ESTADO DE LA CUENTA DEL ADMIN
void adminDepositoPantalla1();                                          //PANTALLA DEPOSITO QUE PIDE TOKEN
void adminDepositoPantalla2(int token);                                 //PANTALLA DEPOSITO QUE MUESTRA TOKEN
void adminDepositoPantalla3(stToken taux);                              //PANTALLA DEPOSITO CONFIRMAR/CANCELAR
void adminDepositoPantalla4(int token);                                 //PANTALLA DEPOSITO TOKEN NO ENCONTRADO
//FIN
