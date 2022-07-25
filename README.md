# proyecto_IE_0117_C

## Bibliotecas necesarias

```
#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <time.h>
```

## Instalación de bibliotecas

La única biblioteca que requiere instalación bajo el sistema operativo Ubuntu 18.04 y Ubuntu 20.04 es `gtk-3.0`. Para su instalación basta con abrir la terminal e ingresar el siguiente comando:

```
sudo apt-get install libgtk-3-dev
```

## Uso del proyecto

Para ejecutar el proyecto, realice un `clone` del repositorio para obtener los archivos del proyecto. Abra una terminal en dicho directorio y ingrese el siguiente comando:

```
make run
```

Esto desplegará la interfaz gráfica del juego de gato. Nótese que solo se tiene diez botones, donde nueve corresponden al tablero y el restante es un botón de reset. Una vez se defina un ganador o un empate, los botones restantes se deshabilitan hasta que se presione el botón de reset.
