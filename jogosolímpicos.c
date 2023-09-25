#include <stdio.h>

int main(void)
{
    int year;
    int olympicsYear = 1896;
    int worldCupYear = 1930;

    printf("Digite um ano entre 1800 e 2022:\n");
    scanf("%d", &year);

    while (!(year >= 1800 && year <= 2022))
    {
        printf("Tente novamente:\n");
        scanf("%d", &year);
    }

    int found = 0;

    for (int currentYear = year; currentYear >= olympicsYear || currentYear >= worldCupYear; currentYear -= 4)
    {
        if (currentYear == olympicsYear)
        {
            printf("Os Jogos Olímpicos de Verão ocorreram no ano de %d.", currentYear);
            found++;
        }
        else if (currentYear == worldCupYear)
        {
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.", currentYear);
            found++;
        }
    }

    if (!found)
    {
        printf("Nao houve Jogos Olímpicos de Verão ou Copa do Mundo no ano de %d.", year);
    }

    return 0;
}