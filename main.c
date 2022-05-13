#include <stdio.h>
#include <stdlib.h>

int menu(int,int);
int ingresevalor(int);
int valida(int,int);
int suma(int,int);
int resta(int,int);
int producto(int,int);
float divide(int,int);

int main()
{
    int n1,n2,ope=0,sum,res,pro,div;
    n1=ingresevalor(1);
    n2=ingresevalor(2);
    while(ope!=6)
    {
        ope=menu(n1,n2);
        switch(ope)
        {
        case 1:
            sum=suma(n1,n2);
            printf("%d",sum);
            printf("\n");
            system("pause");
            break;
        case 2:
            res=resta(n1,n2);
            printf("%d",res);
            printf("\n");
            system("pause");
            break;
        case 3:
            pro=producto(n1,n2);
            printf("%d",pro);
            printf("\n");
            system("pause");
            break;
        case 4:
            div=divide(n1,n2);
            printf("%.2f",div);
            printf("\n");
            system("pause");
            break;
        case 5:
            n1=ingresevalor(1);
            n2=ingresevalor(2);
            break;
        }
    }
    return 0;
}
int ingresevalor(int x)
{
    int n;
    if(x==1)
    {
        system("cls");
    }
    printf("\n Numero: ",x);
    scanf("%d",&n);

    return n;
};

int menu(int a,int b)
{
    int op;
    system("cls");
    printf("Menu de Opciones\n");
    printf("---- -- --------\n");
    printf("Numero 1: %d Numero 2: %d\n",a,b);
    printf("1) Sumar\n");
    printf("2) Restar\n");
    printf("3) Multiplicar\n");
    printf("4) Dividir\n");
    printf("5) Ingresar Nuevos Numeros\n");
    printf("6) Salir\n");
    printf("Ingrese su opcion: \n");
    op=valida(1,6);

    return op;
};

int valida(int i,int f)
{
    int opcion;
    do
    {
        scanf("%d",&opcion);
    }while(opcion<i||opcion>f);

    return opcion;
};

int suma(int a,int b)
{
    int s;
    s=a+b;

    return s;
};

int resta(int a,int b)
{
    int r;
    r=a-b;

    return r;
};

int producto(int a,int b)
{
    int p;
    p=a*b;

    return p;
};

float divide(int a,int b)
{
    float d;
    d=(float)a/b;

    return d;
};
