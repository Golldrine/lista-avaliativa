#include <stdio.h>

int main(void)
{
    int number, digit, sum = 0;

    printf("Insira um valor inteiro:\n");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d eh par\n", number);
    }
    else
    {
        printf("%d eh impar\n", number);
    }

    printf("A soma dos algarismos de %d ", number);
    do
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
    } while (number > 0);

    printf("eh %d\n", sum);
    
    return 0;
}