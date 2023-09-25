#include <stdio.h>

int main(void)
{
    int password = 0; 
    int attempt;     
    printf("Crie uma senha de 4 digitos:\n");
    scanf("%d", &password);

    do
    {
        printf("Digite a senha correta:\n");
        scanf("%d", &attempt);

        if (password == attempt)
        {
            printf("Senha valida!\n");
            break;
        }
        else
        {
            printf("Senha invalida, tente novamente\n"); 
        }
    } while (1);

    return 0;
}
