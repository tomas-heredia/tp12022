
#include <stdio.h>
#include <math.h>
int cuadrado(int a);
void cuadrado2(int *p);
void mostrar(int a);
void invertir(int a, int b);
void orden(int a, int b);
void main(){
 int a;
 int b;
 int aux;
 printf("Ingrse el balor de a: ");
 scanf("%i", &a);
  printf("Ingrse el balor de b: ");
 scanf("%i", &b);
 int *p;
 int c = a;
 p = &c;
 aux = cuadrado(b);
 printf("\nCuadrado de b: %i",aux);
 cuadrado2(p);
 printf("\nCuadrado de a: %i",aux);
 mostrar(a);
 mostrar(b);
 invertir(a,b);
 orden(a,b);

}

int cuadrado(int a){
    return pow(a,2);
}
void cuadrado2(int *p){
    *p = pow(*p,2);
}
void mostrar(int a){
    printf("\n%d",a);
    printf("\n%d",&a);
}

void invertir(int a, int b){
    printf("\n%d",a);
    printf("\n%d",b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("\n%d",a);
    printf("\n%d",b);
}
void orden(int a, int b){
     
    if(a < b){
        printf("\n%d",b);
        printf("\n%d",a);  
    }else
    {
        printf("\n%d",a);
        printf("\n%d",b);   
    }
    
}