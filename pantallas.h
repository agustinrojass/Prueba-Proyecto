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
    int estado;
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
//COORDENADAS
void gotoxy(int X,int Y);
//FECHA
stFecha fechaActual();
//INICIO
void pantallaInicio();                                                      //PANTALLA INICIO
//ALUMNOS
void pantallaAlumnos();                                                         //PANTALLA ALUMNOS
//CREAR CUENTA
void claveAdmin();                                                                  //PANTALLA QUE PIDE CLAVE DE ADMIN
void crearCuentaAlumnoPantalla1();                                                  //PANTALLA QUE PIDE NOMBRE
void crearCuentaAlumnoPantalla2(int ronda,stUsuario datos);                         //PANTALLA QUE PIDE DOCUMENTO
void crearCuentaAlumnoPantalla3(int ronda,int parte,stUsuario datos);               //PANTALLA QUE PIDE FECHA DE NACIMIENTO
void crearCuentaAlumnoPantalla4(int ronda,stUsuario datos);                         //PANTALLA QUE PIDE USUARIO
void crearCuentaAlumnoPantalla5(int ronda,stUsuario datos);                         //PANTALLA QUE PIDE CONTRASENA
void crearCuentaAlumnoPantalla6(int ronda,stUsuario datos);                         //PANTALLA QUE PIDE REPETIR CONTRASENA
void crearCuentaAlumnoPantalla7(stUsuario datos);                                   //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
//VENTANAS
void estadoDeCuentaAlumnoPantalla(stUsuario sesion,int acceso);                     //PANTALLA ESTADO DE LA CUENTA DEL ALUMNO
void datosPersonalesPantalla(stUsuario sesion,int acceso);                          //PANTALLA DATOS PERSONALES DEL ALUMNO
void depositoPantalla1(int ronda);                                                  //PANTALLA DEPOSITO QUE PIDE MONTO
void depositoPantalla2(stToken transaccion);                                        //PANTALLA DEPOSITO QUE PIDE CONFIRMAR/CANCELAR
void depositoPantalla3(stToken transaccion);                                        //PANTALLA DEPOSITO QUE MUESTRA TOKEN
void pagoPantalla1();                                                               //PANTALLA PAGO QUE PIDE TOKEN
void pagoPantalla2(int token);                                                      //PANTALLA PAGO QUE MUESTRA TOKEN
void pagoPantalla3(stToken taux);                                                   //PANTALLA PAGO DEL CONFIRMAR/CANCELAR
void pagoPantalla4(int token);                                                      //PANTALLA PAGO TOKEN NO ENCONTRADO
void pagoPantalla5(int token);                                                      //PANTALLA PAGO SALDO INSUFICIENTE
void historialPantalla1();                                                          //PANTALLA HISTORIAL PRINCIPIO
int historialPantalla2(stToken aux,int flag);                                       //PANTALLA HISTORIAL EXISTENTE
int historialPantalla3(int flag);                                                   //PANTALLA HISTORIAL NO EXISTENTE
void historialPantalla4(int ultimo);                                                //PANTALLA HISTORIAL FIN
//ADMINS
void pantallaAdministradores();                                                 //PANTALLA ADMINISTRADORES
//CREAR CUENTA
void crearCuentaAdminPantalla1(stAdmin sesion);                                     //PANTALLA QUE PIDE NOMBRE
void crearCuentaAdminPantalla2(int ronda,stAdmin datos);                            //PANTALLA QUE PIDE USUARIO
void crearCuentaAdminPantalla3(int ronda,stAdmin datos);                            //PANTALLA QUE PIDE CONTRASENA
void crearCuentaAdminPantalla4(int ronda,stAdmin datos);                            //PANTALLA QUE PIDE REPETIR CONTRASENA
void crearCuentaAdminPantalla5(stAdmin datos);                                      //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
//VENTANAS
void estadoDeCuentaAdminPantalla(stAdmin sesion);                                   //PANTALLA ESTADO DE LA CUENTA DEL ADMIN
void adminDepositoPantalla1();                                                      //PANTALLA DEPOSITO QUE PIDE TOKEN
void adminDepositoPantalla2(int token);                                             //PANTALLA DEPOSITO QUE MUESTRA TOKEN
void adminDepositoPantalla3(stToken taux);                                          //PANTALLA DEPOSITO CONFIRMAR/CANCELAR
void adminDepositoPantalla4(int token);                                             //PANTALLA DEPOSITO TOKEN NO ENCONTRADO
void adminPagoPantalla1(int ronda,int acceso,stAdmin sesion);                       //PANTALLA PAGO QUE PIDE DOCUMENTO
void adminPagoPantalla2(int ronda,stAdmin sesion);                                  //PANTALLA PAGO QUE PIDE MONTO
void adminPagoPantalla3(stToken transaccion,stAdmin sesion);                        //PANTALLA PAGO QUE PIDE CONFIRMAR/CANCELAR
void adminPagoPantalla4(stToken transaccion,stAdmin sesion);                        //PANTALLA PAGO QUE MUESTRA TOKEN
void listaUsuariosPantalla1();                                                      //PANTALLA LISTA DE USUARIOS PRINCIPIO
int listaUsuariosPantalla2(stUsuario aux,int flag);                                 //PANTALLA USUARIO EXISTENTE
int listaUsuariosPantalla3(int flag);                                               //PANTALLA USUARIO NO EXISTENTE
void listaUsuariosPantalla4(int ultimo);                                            //PANTALLA LISTA DE USUARIOS FIN
void retiroPantalla1(int ronda,stAdmin sesion);                                     //PANTALLA RETIRO QUE PIDE MONTO
void retiroPantalla2(stToken transaccion,stAdmin sesion);                           //PANTALLA RETIRO QUE PIDE CONFIRMAR/CANCELAR
void retiroPantalla3(stToken transaccion,stAdmin sesion);                           //PANTALLA RETIRO QUE MUESTRA TOKEN
void adminRetiroPantalla1();                                                        //PANTALLA RETIRO QUE PIDE TOKEN
void adminRetiroPantalla2(int token);                                               //PANTALLA RETIRO QUE MUESTRA TOKEN
void adminRetiroPantalla3(stToken taux);                                            //PANTALLA RETIRO DEL CONFIRMAR/CANCELAR
void adminRetiroPantalla4(int token);                                               //PANTALLA RETIRO TOKEN NO ENCONTRADO
//INICIAR SESION
void iniciarSesionPantalla1(int ronda,int acceso);                                  //PANTALLA QUE PIDE USUARIO
void iniciarSesionPantalla2(int ronda,int acceso,stUsuario sesion,stAdmin admin);   //PANTALLA QUE PIDE CONTRASENA
void iniciarSesionPantalla3(int acceso,stUsuario sesion,stAdmin admin);             //PANTALLA QUE PIDE CONFIRMAR/CANCELAR
void iniciandoPantalla(int acceso);                                                 //PANTALLA INICIANDO SESION
//UNIVERSAL
void linea1();
void linea2();
void linea3();
void linea4();
void linea5();
void linea6();
void linea7();
void linea8();
void linea9();
void linea10();
void linea11();
void logo12();
void logo13();
void logo14();
void logo15();
void logo16();
void logo17();
void logo18();
void logo19();
void logo20();
void linea21();
void linea22();
void linea23();
void linea24();
void linea25();
void linea26();
void linea27();
void alumnoLinea1();
void alumnoLinea2();
void crearIniciarLinea1();
void crearIniciarLinea2();
void cancelarLinea1();
void cancelarLinea2();
void volverLinea1();
void volverLinea2();
void datCerrarLinea1();
void datCerrarLinea2();
void datVolverLinea1();
void datVolverLinea2();
void estCerrarLinea1();
void estCerrarLinea2();
void estVolverLinea1();
void estVolverLinea2();
void alumnoLinea4();
void adminUTNLinea4();
void adminBuffetLinea4();
void adminFotocopiadoraLinea4();
void alumnoIniciarLinea4();
void adminIniciarLinea4();
void alumnoCrearLinea4();
void UTNCrearLinea4();
void buffetCrearLinea4();
void fotocopiadoraCrearLinea4();
void subcabecera();
void semiSubcabecera();
void estadoLinea7();
void datosLinea7();
void depositarlinea7();
void pagarLinea7();
void cobrarLinea7();
void retirarLinea7();
void historialLinea7();
void semiLogo14();
void buscandoTokenLogo16();
void tokenNoEncontradoLogo16();
void saldoInsuficienteLogo16();
void semiLogo17();
void semiLogo20();
void crearLinea24();
void crearLinea25();
void confirmarLinea24();
void confirmarLinea25();
void generarLinea24();
void generarLinea25();
void siguientePrincipioLinea25();
void adminLinea27();
//FIN
