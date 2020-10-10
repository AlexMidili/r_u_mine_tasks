#include "stdio.h"
#include <stdlib.h>

//Предописания функций () //Прототип функции
float func(float a1[10], int n);

//глобальная переменная
float mas[10];

//Основная функция
int main()
{   
    int n,k;
    int p[10];
    float s;

    printf("Enter n:\n");
    scanf("%d",&n);

    //ввод массива
    for (k=0; k<n; k++)
    {
        printf("Enter mas[%d]:", k);
        scanf("%f", &mas[k]);
        //printf("__ %.3f __\n", mas[k]);
    }
    
    s = func(mas, n);

    //for (k=0; k<n;k++)
    printf("%.f\n", s);
    
    return 0;
}


float func(float a1[10], int n1)
{   
    int i, j, r;
    float tmp, min;
    for (i=0;i<n1;i++)
    {
        for (j = 1; j < n1; j++)
        {
            if (a1[j] < a1[j-1])
            {
                tmp = a1[j];
                a1[j] = a1[j-1];
                a1[j-1] = tmp;
            }
        } 
    }
    //отсортированный массив записываем в глобальный массив
    for (i=0; i<n1;i++)
    {
        printf("%.3f\n", a1[i]);
        mas[i]=a1[i];
    }

    min = a1[0];
    for (i=0; i<n1;i++)
    {
    if(a1[i] > 0)
    {
        printf("_%.3f_\n", a1[i]);
        return 0;
    }
    }
    return -1;
}
