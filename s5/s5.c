#include "stdio.h"
#include <stdlib.h>
#include <math.h> //единтсвенный раз из-за корня квадратного в формуле


//Предописания функций () //Прототип функции
float funcX(float a1[10], int n);

//глобальная переменная
float mas_glob[10];

//Основная функция
int main()
{   
    int n,k;
    float  C1,mas[10];
    printf("Enter n:\n");
    scanf("%d",&n);

    //ввод массива
    for (k=0; k<n; k++)
    {
        printf("Enter mas[%d]:", k);
        scanf("%f", &mas[k]);
        //printf("__ %.3f __\n", mas[k]);
    }
    
    C1 = funcX(mas, n);
    printf(" C1 =%.3f\n", C1);
    return 0;
}

float funcX(float a1[10], int n1)
{   
    int i, j;
    float x=0;
    float sumc, c;
    for (i=0;i<n1-1;i++) //по формуле
    {
        sumc += a1[i]*a1[i];  
    }
    c=sqrt(sumc); //по формуле
    return c;
}