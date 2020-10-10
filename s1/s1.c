#include "stdio.h"
#include <stdlib.h>

//Предописания функций () //Прототип функции
float func(float a[10], int n);

//Основная функция
int main()
{   
    float mas[10];
    int n,k;
    float p;

    printf("Enter n:\n");
    scanf("%d",&n);

    //ввод массива
    for (k=0; k<n; k++)
    {
        printf("Enter mas[%d]:", k);
        scanf("%f", &mas[k]);
        printf("__%.3f__\n", mas[k]);
    }
    
    p=func(mas, n);
    printf("znachenie max - min %.3f\n", p );
    return 0;
}

float func(float a[10], int n1)
{   
    int i, r, max, min;
    max=a[0];
    min=a[0];
    for (i=1;i<n1;i++)
    {
        if (a[i]>max) max=a[i];
        if (a[i]<min) min=a[i];
    }
    r=max-min;
    return r;
}
