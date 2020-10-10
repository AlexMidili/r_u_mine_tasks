#include "stdio.h"
#include <stdlib.h>

//Ничем не отличается от Р12 кроме значения в формуле одного

//Предописания функций ()
float rec (int n,float x);

//Основная функция
int main()
{   
    float x,n,p;
 
    printf("Enter n:\n");
    scanf("%f",&n);
    printf("Enter x:\n");
    scanf("%f",&x);
    
    p=rec(n,x);
    printf("znachenie polinoma %.3f\n", rec(n,x) );
    return 0;
}

float rec ( int n,float x)
{   
    float P;
    int i;
    if(n==0)
        return 1;
    else if(n==1)
        return 1-x;
    else
    {
        return ((2*n-1-x)*rec(n-1,x) - (n-1)*rec(n-2,x))/n ;
    }          
    return P;
      
}
