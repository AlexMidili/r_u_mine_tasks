#include "stdio.h"
#include <stdlib.h>

//Предописания функций () //Прототип функции
int func(float a[10], int n);

//Основная функция
int main()
{   
    float mas[10];
    int n,k;
    int p;

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
    printf("znachenie %d\n", p);
    return 0;
}

int func(float a[10], int n1)
{   
    int i, r;
    for (i=1;i<n1;i++)
    {
        if((a[i] <= a[i+1]) || (a[i] >= a[i+1]))
        {
            printf("___mono___\n");
            return 1;
        }
        else
        {
            printf("____ Ne mono ___\n");
            return 0;
        }
    }
    
}
