#include <stdio.h>

struct alumno 
{
    char nombre[20];
    char direccion[20];
    int edad;
    char carrera[20];
    float promedio;
};




int main()
{
    for (int  i = 0; i < 5; i++)
    {
    struct alumno alum1;
    if (i!=0)
    {
        printf("\n");
    }
    printf("Ingrese su nombre\n");
    gets(alum1.nombre);
    printf("Ingrese su direccion\n");
    gets(alum1.direccion);
    printf("Ingrese su edad\n");
    scanf("%i",&alum1.edad);
    printf("Ingrese su carrera\n");
    fflush(stdin);//Ayuda a que el scanf no genere problemas
    gets(alum1.carrera);
    printf("Ingrese su promedio\n");
    scanf("%f",&alum1.promedio);
    puts("Su nombre es :");
    puts(alum1.nombre);
    puts("\nSu direccion es : ");
    puts(alum1.direccion);
    printf("\nSu edad es :%i",alum1.edad);
    puts("\nSu carrera es : ");
    puts(alum1.carrera);    
    printf("\nSu promedio es :%f",alum1.promedio);
    }
}
