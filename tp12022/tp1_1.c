#include <stdio.h>

void main(){
    printf("hola mundo");
    int *punt;
    int a = 4;
    punt = &a;
    printf("%d",*punt);
    printf("/n%d",punt);
    printf("/n%d",&a);
    printf("/n%d",&punt);
    printf("/n%d",sizeof(a));
    
}