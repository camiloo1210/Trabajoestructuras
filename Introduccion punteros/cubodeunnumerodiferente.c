#include <stdio.h>
//Funcion para calcular el cubo
int cubodn(int n)
{
    int *punterocubo,varint;
    int acumulador=1;
    punterocubo=&varint;
    for (int i = 1; i<=3; i++)
    {
    acumulador= acumulador*n;//El *= es una instruccion para simplificar el acumulador=acumulador*
    varint=acumulador;
    }
    return varint;
}

int main()
{
    int n;//numero a ingresar 
    printf("Ingrese el valor para calcular su cubo");
    scanf("%d",&n);
    printf("el cubo del numero %d es %d",n,cubodn(n));//Se debe poner el (n) o si no explota 
    return 0;
}
