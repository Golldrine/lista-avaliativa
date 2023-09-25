#include <stdio.h>

int main(void)
{
    float salario, porcentagem;
    char nivel;

    printf("Digite o seu nivel de experiencia para calcular o seu aumento salarial:\n");
    printf("Para funcionarios do nivel \"a\", o aumento sera de 5%%.\n");
    printf("Para funcionarios do nivel \"b\", o aumento sera de 7%%.\n");
    printf("Para funcionarios do nivel \"c\", o aumento sera de 8%%.\n");

    scanf(" %c", &nivel); 

    while (!(nivel == 'a' || nivel == 'b' || nivel == 'c'))
    {
        printf("Isso nao e um nivel valido, tente novamente:\n");
        scanf(" %c", &nivel); 
    }

    printf("Agora insira o seu salario antigo:\n");
    scanf("%f", &salario);

    if (nivel == 'a')
    {
        porcentagem = salario * 0.05;
    }
    else if (nivel == 'b')
    {
        porcentagem = salario * 0.07;
    }
    else if (nivel == 'c')
    {
        porcentagem = salario * 0.08;
    }

    salario += porcentagem;
    
    printf("Novo salario: R$ %.2f\n", salario);

    return 0;
}