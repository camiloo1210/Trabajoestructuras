#include <stdio.h>

struct alumno 
{
    char nombre[20];
    char direccion[20];
    int edad;
    char carrera[20];
};




int main()
{
    struct alumno alum1;
    printf("Ingrese su nombre\n");
    gets(alum1.nombre);
    printf("Ingrese su direccion\n");
    gets(alum1.direccion);
    printf("Ingrese su edad\n");
    scanf("%i",&alum1.edad);
    printf("Ingrese su carrera\n");
    fflush(stdin);//Ayuda a que el scanf no genere problemas
    gets(alum1.carrera);
    printf("Su nombre es :\n");
    puts(alum1.nombre);
    printf("Su direccion es : \n");
    puts(alum1.direccion);
    printf("Su edad es :\n");
    puts(alum1.edad);
    printf("Su carrera es : \n");
    puts(alum1.carrera);

    printf("Segundo alumno");

    struct alumno alum2;
    printf("Ingrese su nombre\n");
    gets(alum1.nombre);
    printf("Ingrese su direccion\n");
    gets(alum1.direccion);
    printf("Ingrese su edad\n");
    scanf("%i",&alum1.edad);
    printf("Ingrese su carrera\n");
    fflush(stdin);
    gets(alum1.carrera);
    printf("Su nombre es :\n");
    puts(alum1.nombre);
    printf("Su direccion es : \n");
    puts(alum1.direccion);
    printf("Su edad es :\n");
    puts(alum1.edad);
    printf("Su carrera es : \n");
    puts(alum1.carrera);

    printf("Tercer alumno");
    
    struct alumno alum3;
    printf("Ingrese su nombre\n");
    gets(alum1.nombre);
    printf("Ingrese su direccion\n");
    gets(alum1.direccion);
    printf("Ingrese su edad\n");
    scanf("%i",&alum1.edad);
    printf("Ingrese su carrera\n");
    fflush(stdin);
    gets(alum1.carrera);
    printf("Su nombre es :\n");
    puts(alum1.nombre);
    printf("Su direccion es : \n");
    puts(alum1.direccion);
    printf("Su edad es :\n");
    puts(alum1.edad);
    printf("Su carrera es : \n");
    puts(alum1.carrera);

    printf("Cuarto alumno");
    
    struct alumno alum4;
    printf("Ingrese su nombre\n");
    gets(alum1.nombre);
    printf("Ingrese su direccion\n");
    gets(alum1.direccion);
    printf("Ingrese su edad\n");
    scanf("%i",&alum1.edad);
    printf("Ingrese su carrera\n");
    fflush(stdin);
    gets(alum1.carrera);
    printf("Su nombre es :\n");
    puts(alum1.nombre);
    printf("Su direccion es : \n");
    puts(alum1.direccion);
    printf("Su edad es :\n");
    puts(alum1.edad);
    printf("Su carrera es : \n");
    puts(alum1.carrera);
    return 0;

    printf("Quinto alumno");
    
    struct alumno alum5;
    printf("Ingrese su nombre\n");
    gets(alum1.nombre);
    printf("Ingrese su direccion\n");
    gets(alum1.direccion);
    printf("Ingrese su edad\n");
    scanf("%i",&alum1.edad);
    printf("Ingrese su carrera\n");
    fflush(stdin);
    gets(alum1.carrera);
    printf("Su nombre es :\n");
    puts(alum1.nombre);
    printf("Su direccion es : \n");
    puts(alum1.direccion);
    printf("Su edad es :\n");
    puts(alum1.edad);
    printf("Su carrera es : \n");
    puts(alum1.carrera);    
    
}

