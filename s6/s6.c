#include "stdio.h"
#include <stdlib.h>

//Предописания функций () //Прототип функции
float func(float a1[10], int n);

//глобальная переменная
float mas_glob[10];

//Основная функция
int main()
{   
    int n,k,r;
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
    
    r = func(mas, n);
    printf(" result =%d\n", r);
    return 0;
}

float func(float a1[10], int n1)
{   
    int i, j;
    float x=0;
    float tmp, c;
    tmp = a1[0];
    for (i=1;i<n1;i++) //по формуле
    {
        if (a1[i-1] == a1[i])
        {
            return 0; //есть одинаковые
        }
    }
    return 1; //все разные
}