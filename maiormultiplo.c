#include <stdio.h>

int main(void)
{
    int value1, value2;

    printf("Digite 2 valores:\n");
    scanf("%d %d", &value1, &value2);

    if (value1 == value2)
    {
        printf("Os valores lidos são iguais\n");
    }
    else
    {
        int greater = (value1 > value2) ? value1 : value2;
        int smaller = (value1 < value2) ? value1 : value2;

        printf("%d eh maior que %d\n", greater, smaller);

        if (greater % smaller == 0)
        {
            printf("%d eh multiplo de %d", greater, smaller);
        }
        else
        {
            printf("%d nao eh multiplo de %d", greater, smaller);
        }
    }
    
    return 0;
}