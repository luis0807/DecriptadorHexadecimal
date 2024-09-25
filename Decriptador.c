#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Funcao.h"
#include <string.h>

void hexadecimalParaString(char hexadecimal[100])
{
    int tamanho = strlen(hexadecimal);
    int x = 0, i, b; // x = posição atual do caractere
    char armazenaString[100];

    for (i = 0; i < tamanho; i += 2)
    {
        char decimalParaString[3] = {hexadecimal[i], hexadecimal[i + 1]}; // identificar o par do código hexadecimal
        int ASCII = (int)strtol(decimalParaString, NULL, 16);             // converter hexadecimal para decimal
        armazenaString[x] = (char)ASCII;                                  // converter decimal para caractere e armazenar valor na variável
        x++;

        func_val(x, b);
    }
    printf("Mensagem Final: %s", armazenaString);
}

int main()
{
    char hexadecimal[100];
    int x, b;

    printf("Insira o valor de B: ");
    scanf("%d", &b);

    func_val(x, b);

    printf("Insira a mensagem criptografada: ");
    scanf("%s", &hexadecimal); // fgets não funcionou corretamente
    hexadecimalParaString(hexadecimal);

    return 0;
}