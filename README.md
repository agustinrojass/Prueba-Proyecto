# UTN WALLET
Wallet virtual de la UTN para poder pagar el buffet, la fotocopiadora y la cuota de la carrera.

## Creado por
- Agustin Rojas
- Gonzalo Marsala
- Francisco Ugalde
- Zeus Testa

## Ruta de trabajo
### Structs
Files por struct (persistencia)<br>
Registro -> stUsuarios<br>
Admin -> stAdmins<br>
Transacciones -> stToken<br>
### ABML
Alta: Creación de cuentas - Activar cuentas<br>
Baja: Desactivar cuentas<br>
Modificación: Acreditación de depósitos/pagos - Alta/Baja de alumnos - Saldo de alumnos y admins<br>
Listados: Historiales (general y por alumno) - Lista de usuarios<br>
### Extras
Asteriscos - Generación y acreditación de token - Pantallas

## Progreso semanal
| Semana | Progreso |
| - | - |
| Semana 1 | Funciones de creación de cuenta e inicio de sesión, menús de navegación. | 
| Semana 2 | Funciones de muestra "pantallas", estado de cuenta, datos personales, generación de token. |
| Semana 3 | Funciones de modificación de datos, acreditación, historiales, listas. |
| Semana 4 | Más funciones de muestra "pantallas", asteriscos para las contraseñas, modularización, alta y baja del alumno. |

## Vista de la aplicación
### Inicio
![Image text](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Screenshots/Inicio.png)
### Inicio de sesión
![Image text](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Screenshots/Inicio%20de%20sesi%C3%B3n.png)
### Estado de cuenta
![Image text](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Screenshots/Estado%20de%20cuenta%20alumno.png)
### Historial de transacciones
![Image text](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Screenshots/Historial%20transacciones%20del%20alumno.png)
### Depósito alumno
![Image text](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Screenshots/Depositar%20alumno.png)
### Token depósito
![Image text](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Screenshots/Token%20dep%C3%B3sito.png)
### Confirmación depósito admin
![Image text](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Screenshots/Confirmar%20dep%C3%B3sito.png)
### Búsqueda de alumno para ver datos o editar
![Image text](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Screenshots/B%C3%BAsqueda%20alumno.png)
### Lista de alumnos
![Image text](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Screenshots/Lista%20alumnos.png)

## Estructuras
```c
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
```
## Referencia de colores
| Color  |  Imagen | Hex |
| - | - | - |
| Azul | ![#0037da](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Colores/Azul.png) | #0037da |
| Blanco | ![#f2f2f2](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Colores/Blanco.png) | #f2f2f2 |
| Gris | ![#767676](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Colores/Gris.png) | #767676 |
| Azul claro | ![#3b78ff](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Colores/Azul%20Claro.png) | #3b78ff |
| Rojo | ![#c50f1f](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Colores/Rojo.png) | #c50f1f |
| Verde | ![#13a10e](https://github.com/agustinrojass/Prueba-Proyecto/blob/ar/Colores/Verde.png) | #13a10e |
