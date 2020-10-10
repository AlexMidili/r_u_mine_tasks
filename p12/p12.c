#include "stdio.h"
#include <stdlib.h>

//За основу взял вот этот форум
//https://www.cyberforum.ru/c-beginners/thread545532.html
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//Тут два способа решения, один рекурсионный другой итерационный, я хз какой проще по-твоему
//По мне так рекурсия проще, просто на сколько ты ее понимаешь, хотя вроде это основы, раньше динамических массивов изучается
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//Предописания функций ()
float rec (float x, int n);
//float iter (float x, int n);

//Основная функция
int main()
{   
    float x,n;
    float (*p)(float x, int n);
 
    printf("Enter x:\n");
    scanf("%f",&x);
    printf("Enter n:\n");
    scanf("%f",&n);

    p=rec;
    printf("znachenie polinoma %.3f\n", rec(x,n) );
    //printf("znachenie polinoma %.3f\n", iter(x,n) );
    return 0;
}

float rec (float x, int n)
{   
    float P;
    int i;
    if(n==0)
        return 1;
    else if(n==1)
        return x;
    else
    {
        return ((2*n-1)*x*rec(x,n-1) - (n-1)*rec(x,n-2))/n ;
    }          
    return P;
      
}
/*
float iter (float x, int n)
{
    int i;
    float *P;
    P=(float*)malloc(n*sizeof (float)); //можно заменить просто 
    
    for (i=0;i<=n;i++)
    {
        P[0]=1;
        P[1]=x;
        P[i]=((2*i-1)*x*P[i-1]-(i-1)*P[i-2])/i;
    }
    return P[n];
}
*/