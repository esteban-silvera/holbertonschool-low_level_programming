Como crear una libreria
1 Coloque todos los archivos relevantes en un directorio, incluido el archivo de encabezado (.h) que contiene prototipos para las entidades relevantes.
Asegúrese de que el archivo de encabezado (.h) contenga las macros #ifndef <HEADERFILE>_H y #define <HEADERFILE>_H
en la parte superior y #endif en la parte inferior para que el archivo de encabezado solo se defina una vez en lugar de cada vez. llamado.
/////
2. Compile por lotes todos los archivos fuente (.c). Utilice la opción -c para que el compilador no vincule los archivos de objeto todavía,
sino que cree un archivo de objeto equivalente (.o) para cada archivo fuente (.c). (gcc - Wall -Werror -Wextra -pedantic -c *.c)
/////
3. Archive todos los archivos de objeto (.o) en un archivo de biblioteca estática (.a).
Utilice la opción de comando -r para asegurarse de que si el archivo de biblioteca (.a) ya existe, se reemplazará.
Se debe usar la opción de comando -c para que, si el archivo no existe, se cree.
/////
4. cree el siguiente archivo 

// #!/bin/bash
gcc -c *.c
ar rc liball.a *.o
ranlib liball.a 
///////////////////////////
//#!/bin/bash: Esta línea es conocida como shebang y se utiliza para indicar al sistema operativo que el script debe ser ejecutado utilizando el intérprete de Bash
/////////////////////////
gcc -c *.c: Este comando utiliza el compilador GCC (GNU Compiler Collection) para compilar todos los archivos de extensión .c en el directorio actual.
El argumento -c indica a GCC que solo realice la compilación y genere archivos objeto (.o), en lugar de crear un ejecutable.
Cada archivo fuente .c se compilará individualmente, generando un archivo objeto correspondiente .o
//////////////////////////////////
ar rc liball.a *.o: Aquí se utiliza el comando ar (archiver) para crear un archivo estático llamado liball.a.
Los archivos objeto generados en el paso anterior (*.o) se agrupan en este archivo.
El argumento rc le dice a ar que cree un archivo (r) y que sea un archivo nuevo en lugar de uno existente (c).
////////////////////////////////
ranlib liball.a: Este comando ranlib se utiliza para generar una tabla de contenidos en el archivo liball.a.
Esta tabla se utiliza para acelerar la búsqueda de símbolos en el archivo y se requiere para algunos sistemas operativos, como macOS.
