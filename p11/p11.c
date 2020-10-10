#include "stdio.h"

//откуда взял код в с++ т.к. полинома чебышева не знаю
//https://www.technoboss.info/otveti-i-voprosi/помощью-рекурсии-определить-знач/

int p11(int n, int x)
{
    int polinom; //будущий результат полинома Чебышева
    if (n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return x;
    }
    else
    {
        polinom = 2*x*p11(n-1, x) - p11(n-2, x); //рекурсия
        return polinom; //выходное значение
    }
}

int main()
{
    int n,x, polinom1;
    
    printf("Enter polinom n: "); 
    scanf("%d", &n); //степень полинома

    printf("Enter argument x: "); 
    scanf("%d", &x); //вещественный аргумент

    polinom1 = p11(n,x); //записываем результат функции в переменную
    printf("___ Result: %d ___\n",polinom1);
    return 0;
}
