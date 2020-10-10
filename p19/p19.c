#include "stdio.h"
#include <stdlib.h>

//Не уверен что правильно сделано, именно по выводу не оч понял из-за комплексной переменной

//Структура под комплексную переменную
struct t_COMP{
  float re;
  float im;
};

//Предописания функций ()
float func(int n1, float a1[10], float re1, float im1);

//Основная функция
int main()
{   
    struct t_COMP    complex; 
    int n,k;
    float sum;
    float p[10];
    float a[10]; //что бы не создавать динамический массив //сделаем статический на 10 эл-ов
    float *pa = &a[0]; //переопределили указатель на начало массива

    printf("Enter n:\n"); //степень
    scanf("%d",&n); //не пробуй лучше больше чем 5, я не проверял

    for (k=0; k<n; k++)
    {
        printf("Enter a[%d]:", k);
        scanf("%f", &a[k]);
        printf("__%.3f__\n", a[k]);
    }

    printf("Enter complex Z real:\n");
    scanf("%f", &complex.re);
    printf("__%.3f__\n",complex.re);
    printf("Enter complex Z im:\n");
    scanf("%f", &complex.im);
    printf("__%.3f__\n",complex.im);

    for (k=0; k<n; k++)
    {
        sum = func(n, pa, complex.re, complex.im);
    }
    printf("znachenie polinoma = %.3f\n", sum);
    return 0;
}

float func(int n1, float a1[10], float re1, float im1)
{   
    int i;
    float p[i], sum1=0;
    //printf("n1: %d\n", n1);
    for (i=0; i<n1; i++)
    {
        //printf("a1[%d]: %f\n",i, a1[i]);
        p[i] = (a1[i]*(re1+im1));
        //printf("p[%d]: %f\n",i, p[i]);
        sum1 += p[i];
    }         
    if (n1 == 2)
    {
        printf("Polinom %d = %.3f + ... + %.3f \n", i, p[0], p[i-1]);
    }
    else
    {
        printf("Polinom %d = %.3f + %.3f + ... + %.3f \n", i, p[0], p[1], p[i-1]);
    }
    return sum1;
}
