#include "stdio.h"
#include <stdlib.h>

//Предописания функций () //Прототип функции
float funcX(float a1[10], int n);
float funcJ(float a1[10], int n1, float X);
//глобальная переменная
float mas_glob[10];

//Основная функция
int main()
{   
    int n,k;
    float  X1, J1,mas[10];
    printf("Enter n:\n");
    scanf("%d",&n);

    //ввод массива
    for (k=0; k<n; k++)
    {
        printf("Enter mas[%d]:", k);
        scanf("%f", &mas[k]);
        //printf("__ %.3f __\n", mas[k]);
    }
    
    X1 = funcX(mas, n);
    J1 = funcJ(mas, n, X1);

    printf("X =%.3f ____ J =%.3f\n", X1, J1);
    return 0;
}

float funcX(float a1[10], int n1)
{   
    int i, j;
    float x=0;
    float sumx, del;
    for (i=0;i<n1-1;i++) //по формуле
    {
        sumx += a1[i];  
    }
    x = sumx/n1; //по формуле
    return x;
}

float funcJ(float a2[10], int n1,float X)
{   
    int i;
    float j, sumj;
    for (i=0;i<n1-1;i++) //по формуле
    {
        sumj += (a2[i] - X)*(a2[i] - X);
    }
    j = sumj/n1;
    return j;
}