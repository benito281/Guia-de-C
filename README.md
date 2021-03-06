# Guia de lenguaje C

## Recursos necesarios para poder compilar y trabajar con el leguaje C en el ordenador, esto unicamente se aplica para Windows.


Compilador, IDE y plugins👩‍💻

> Pasos para instalar configurar el entorno de desarrollo.

1. Descargue y instale el IDE [VSCODE](https://code.visualstudio.com/).
2. Compiladores (cualquiera de los 2 sirve):
	* Despues de descargar e instalar [TDM-GCC](https://github.com/jmeubank/tdm-gcc/releases/download/v10.3.0-tdm64-2/tdm64-gcc-10.3.0-2.exe), el compilador crea por defecto la ruta de la carpeta bin en las variables de entorno, este compilador sirve en sistemas operativos de 32 y 64 bits. Una vez que ya instalo el compilador y el IDE, proceda al paso 3.
	* Despues de descargar e instalar [MINGW-64](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/8.1.0/threads-posix/sjlj/x86_64-8.1.0-release-posix-sjlj-rt_v6-rev0.7z) hay que buscar donde se instalo el compilador y buscar la carpeta bin, se copia la ruta de dicha carpeta y se la agrega en las variables de entorno en la sección de PATH. Este compilador sirve en sistemas operativos de 64 bits. 

3. Plugins (estos mismos se pueden descargar o instalar desde el editor):
	1. [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools): Este proporciona la sintaxis y el autocompletado del lenguaje C y C++.
	2. Compiladores de codigo (Cualquiera de los 2 sirve)
		* [C/C++ Compile Run](https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run): Permite compilar y ejecutar la terminal oprimiendo la tecla F6, cabe aclarar que se puede configurar para ejecutar el codigo en la terminal integrada del editor o en una terminal externa.
		* [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner): Proporciona un boton en la parte superior derecha del editor que permite compilar y ejecutar el codigo en la consola del editor.


