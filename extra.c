#include <stdio.h>
#include <locale.h>

int main() {
    float N1, N2, PPD, EU = 0, N3 = 0;
    int fezEU, fezN3;
    setlocale(LC_ALL,"Portuguese");

    printf("Digite a nota N1 [0 a 4.5]: ");
    scanf("%f", &N1);
    if (N1 < 0 || N1 > 4.5) {
        printf("Erro: Nota N1 inválida.\n");
        return 3;
    }

    printf("Digite a nota N2 [0 a 4.5]: ");
    scanf("%f", &N2);
    if (N2 < 0 || N2 > 4.5) {
        printf("Erro: Nota N2 inválida.\n");
        return 3;
    }

    printf("Digite a nota PPD [0 a 1]: ");
    scanf("%f", &PPD);
    if (PPD < 0 || PPD > 1) {
        printf("Erro: Nota PPD inválida.\n");
        return 3;
    }
    printf("O aluno fez o Exame Unificado? (0 - não, 1 - sim): ");
    scanf("%d", &fezEU);
    if (fezEU == 1) {
        printf("Digite a nota do Exame Unificado [0 a 1]: ");
        scanf("%f", &EU);
        if (EU < 0 || EU > 1) {
            printf("Erro: Nota do Exame Unificado inválida.\n");
            return 3;
        }
    } else if (fezEU != 0) {
        printf("Erro: Valor inválido do Exame Unificado.\n");
        return 3;
    }

    printf("O aluno fez a N3? (0 - não, 1 - sim): ");
    scanf("%d", &fezN3);
    if (fezN3 == 1) {
        printf("Digite a nota N3 [0 a 4.5]: ");
        scanf("%f", &N3);
        if (N3 < 0 || N3 > 4.5) {
            printf("Erro: Nota N3 inválida.\n");
            return 3;
        }
        if (N1 < N2) {
            N1 = N3;
        } else {
            N2 = N3;
        }
    } else if (fezN3 != 0) {
        printf("Erro: Valor inválido da N3.\n");
        return 3;
    }
    float total = N1 + N2 + PPD + EU;
    if (total > 10) {
        total = 10;
    }
    printf("Nota final: %.2f\n", total);
    if (total >= 7) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }

    return 0;
}

