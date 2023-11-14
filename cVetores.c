#include <stdio.h>
#include <stdlib.h>

int main () {
    // criação de variaveis normais, porém fora da programação funcional existe exeções com o uso de vetores.
    // cada var apenas armazena um valor.
    // porém com os vetores é possivel armazenar varios valores em uma unica variavel nominada. 
    int idade;
    int sexo;
    int nota1;

    // utilizando vetores.
    // diferentes casos de vetores.
    int num1[10]; // tamanho e tipo de vetor já atribuido, porém não atribuido o valor.
    int num2[] = {1,5,9,15,43}; // valor atribuido, porém não o tamanho.
    int num3[5] = {4,7,5}; // valor e tamanho atribuido.
    int num4[5] = {1,2,3,4,5,6}; // valor atribuido, porém caso de valores maiores do que o tamanho atribuido. 
    int num5[5] = {0}; // tamanho atribuido.

    char letras[100]; 
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'}; // caso de vetor de char, onde cada letra é um valor.
    float notas[3] = {7.5, 8.0, 9.5}; // caso de vetor de float, onde cada numero é um valor.

    return 0;
}