#include <stdio.h>
int main()
{
    //char m='A';
    char *m,varchar;
    m=&varchar;
    *m='A';
    int *n,varint;
    n=&varint;
    *n=394;
    float *p,varflo;
    p=&varflo;
    *p=3.1416;
    printf("El valor de m es : %c %d\n",varchar,m);
    printf("El valor de n es : %d  %d\n",varint,n);
    printf("El valor de p es : %f  %d\n",varflo,p);
    return 0;
}
