#include <stdio.h>
#include <locale.h>
#include <math.h>

void homework()
{
    int a, b, c;
    puts("Введите массы элементов по порядку");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0))
    {
        puts("Реакция запустится");
    }
    else
    {
        puts("Реакция не запустится");
    }
}

void main()
{
    setlocale(LC_CTYPE, "ru_RU.UTF-8");

    homework();
}