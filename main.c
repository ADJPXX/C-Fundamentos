#include <stdio.h>
#include <stdlib.h>
#include <time.h>


float somar(float a, float b) {
    return a + b;
}


float subtrair(float a, float b) {
    return a - b;
}


float multiplicar(float a, float b) {
    return a * b;
}


float dividir(float a, float b) {
    return a / b;
}


int main(void) {

    /*printf("Hello, World!\n");

    int n1=0;
    int n2=0;
    int soma1=0;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    soma1 = n1 + n2;

    printf("A soma de %d e %d = %d", n1, n2, soma1);

    printf("\n");

    float nota=0;
    float media=0;
    float soma2=0;

    for (int i=0; i<10; i++) {
        printf("Digite uma nota: ");
        scanf("%f", &nota);
        soma2 += nota;
    }

    media = soma2 / 10;

    printf("A media das 10 notas foram: %f", media);

    int numero;

    while (1) { // Mesma coisa que while (true)

        printf("Digite 0 para parar o programa\n");
        printf("Digite um numero para saber se e par ou impar: ");
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        if (numero % 2 == 0) {
            printf("O numero %d = par\n", numero);
        }
        else {
            printf("O numero %d = impar\n", numero);
        }
    }

    int n1=0;
    int n2=0;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero; ");
    scanf("%d", &n2);

    printf("A soma de %d e %d = %d\n", n1, n2, n1+n2);
    printf("A subtracao de %d e %d = %d\n", n1, n2, n1-n2);
    printf("A multiplicacao de %d e %d = %d\n", n1, n2, n1*n2);
    printf("A divisao de %d e %d = %.2f\n", n1, n2, (float)n1/n2);


    int numero = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    int opcao = 0;
    float n1=0;
    float n2=0;

    while (1) {
        printf("[ 0 ]Sair\n[ 1 ]Soma\n[ 2 ]Subtrair\n[ 3 ]Multiplicar\n[ 4 ]Dividir\nSua escolha: ");
        scanf("%d", &opcao);
        if (opcao == 0) {
            break;
        }

        printf("Digite um numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero; ");
        scanf("%f", &n2);

        switch (opcao) {
            case 1: {
                printf("A soma de %.2f e %.2f = %.2f\n", n1, n2, n1+n2);
                break;
            }
            case 2: {
                printf("A subtracao de %.2f e %.2f = %.2f\n", n1, n2, n1-n2);
                break;
            }
            case 3: {
                printf("A multiplicacao de %.2f e %.2f = %.2f\n", n1, n2, n1*n2);
                break;
            }
            case 4: {
                if (n2 == 0){
                    printf("nao existe divisao por zero");
                    break;
                }
                else{
                    printf("A divisao de %.2f e %.2f = %.2f\n", n1, n2, n1/n2);
                    break;
                }
            }
            default:{
                printf("\nOpcao invalida");
                break;
            }
        }
    }

    srand(time(NULL));

    int max = 10;

    int usuario = 0;

    int computador = rand() % max + 1;;

    while (1) {
        printf("Eu pensei em um numero entre 1 e 10, tente adivinhar.\nSua escolha: ");
        scanf("%d", &usuario);

        if (usuario == computador) {
            printf("Voce acertou\n");
            break;
        }
        if (computador > usuario) {
            printf("O numero que pensei e maior\n");
        }
        else {
            printf("O numero que pensei e menor\n");
        }
    }

    int opcao = 0;
    float n1=0;
    float n2=0;

    while (1) {
        printf("[ 0 ]Sair\n[ 1 ]Soma\n[ 2 ]Subtrair\n[ 3 ]Multiplicar\n[ 4 ]Dividir\nSua escolha: ");
        scanf("%d", &opcao);
        if (opcao == 0) {
            break;
        }

        printf("Digite um numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero; ");
        scanf("%f", &n2);

        float resultado = 0;

        switch (opcao) {
            case 1: {
                resultado = somar(n1, n2);

                printf("A soma de %.2f e %.2f = %.2f\n", n1, n2, resultado);
                break;
            }


            case 2: {
                resultado = subtrair(n1, n2);

                printf("A subtracao de %.2f e %.2f = %.2f\n", n1, n2, resultado);
                break;
            }

            case 3: {
                resultado = multiplicar(n1, n2);

                printf("A multiplicacao de %.2f e %.2f = %.2f\n", n1, n2, resultado);
                break;
            }

            case 4: {
                if (n2 == 0){
                    printf("nao existe divisao por zero");
                    break;
                }

                resultado = dividir(n1, n2);

                printf("A divisao de %.2f e %.2f = %.2f\n", n1, n2, resultado);
                break;
            }

            default:{
                printf("\nOpcao invalida");
                break;
            }
        }
    }

    float numeros[5];
    float nota = 0;
    float soma = 0;
    float media = 0;
    float notaMaior = numeros[0];
    float notaMenor = numeros[0];

    int length = sizeof(numeros) / sizeof(numeros[0]);

    for (int i = 0; i < 5; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &nota);
        numeros[i] = nota;
    }

    printf("\nNotas digitadas:\n");

    for (int i = 0; i < length; i++) {
        printf("%.2f", numeros[i]);
        printf("\n");
        soma += numeros[i];

        if (numeros[i] > notaMaior) {
            notaMaior = numeros[i];
        }

        if (numeros[i] < notaMenor) {
            notaMenor = numeros[i];
        }
    }

    media = soma / length;

    printf("\nA media das notas digitas = %.2f\nA maior nota digitada foi %.2f\nA menor nota digitada foi %.2f\n", media, notaMaior, notaMenor);

    int idade = 20;

    int *ponteiro = &idade;

    printf("Valor da idade: %d\n", idade);
    printf("Endereco da idade: %d\n", &idade);
    printf("Endereco guardado no ponteiro: %p\n", ponteiro);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);

    *ponteiro = 50;

    printf("Novo valor da idade: %d\n", idade);*/

    int numeros[5] = {10, 20, 30, 40, 50};

    int *ponteiro = numeros;

    for (int i = 0; i < 5; i++) {
        printf("Endereco: %p\n", ponteiro + i);
        printf("Valor: %d\n", ponteiro[i]);
    }


    return 0;
}