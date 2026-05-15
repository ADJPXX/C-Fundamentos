#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*float somar(float a, float b) {
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


int tamanhoString(char texto[]) {

    int quantidadeLetras = 0;

    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == '\n') {
            break;
        }
        quantidadeLetras += 1;
    }

    return quantidadeLetras;
}


void mostrarString(char texto[]) {

    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == '\n') {
            break;
        }

        printf("%c", texto[i]);
    }
}*/


struct Aluno {
    char nome[50];

    float nota;
};


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

    printf("Novo valor da idade: %d\n", idade);

    int numeros[5] = {10, 20, 30, 40, 50};

    int *ponteiro = numeros;

    for (int i = 0; i < 5; i++) {
        printf("Endereco: %p\n", ponteiro + i);
        printf("Valor: %d\n", ponteiro[i]);
    }

    char nome[50];
    int quantidadeLetras = 0;
    char ultimaLetra;

    printf("Digite seu nome: ");

    fgets(nome, 50, stdin);

    for (int i = 0; nome[i] != '\0'; i++) {

        if (nome[i] == '\n') {
            break;
        }

        printf("%c\n", nome[i]);

        quantidadeLetras += 1;
    }

    ultimaLetra = nome[quantidadeLetras - 1];

    printf("Quantidade de letras no seu nome: %d\n", quantidadeLetras);

    printf("Primeira letra do seu nome: %c\n", nome[0]);

    printf("Ultima letra do seu nome: %c\n", ultimaLetra);

    char string[100];
    int quantidadeLetras = 0;

    printf("Digite algo: ");

    fgets(string, 100, stdin);

    quantidadeLetras = tamanhoString(string);

    mostrarString(string);

    printf("\nQuantidade de letras na string: %d", quantidadeLetras);

    int quantidadeNotas = 0;

    float media = 0;
    float soma = 0;

    printf("Quantas notas voce quer digitar? ");

    scanf("%d", &quantidadeNotas);

    int *notas = malloc(quantidadeNotas * sizeof(int));

    if (notas == NULL) {
        printf("Erro ao alocar memoria\n");

        return 1;
    }

    for (int i = 0; i < quantidadeNotas; i++) {
        printf("Digite a nota %d: ", i + 1);

        scanf("%d", &notas[i]);

        soma += notas[i];
    }

    media = soma / quantidadeNotas;

    printf("A media das notas digitadas = %.2f\n", media);

    free(notas);

    int quantidadeAlunos = 0;

    float somaNotas = 0;
    float mediaNotas = 0;

    char nomeAluno[50];

    printf("Quantos alunos? ");
    scanf("%d", &quantidadeAlunos);

    while (getchar() != '\n');

    struct Aluno *alunos = malloc(quantidadeAlunos * sizeof(struct Aluno));

    if (alunos == NULL) {
        printf("Erro ao alocar memoria");

        return 1;
    }

    float maiorNota = 0;
    float menorNota = 0;

    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("Insira o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 50, stdin);

        printf("Insira a nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota);

        while (getchar() != '\n');

        if (i == 0) {
            maiorNota = alunos[i].nota;
            menorNota = alunos[i].nota;
        }

        somaNotas += alunos[i].nota;

        if (alunos[i].nota < menorNota) {
            menorNota = alunos[i].nota;
        }

        if (alunos[i].nota > maiorNota) {
            maiorNota = alunos[i].nota;
        }

    }

    for (int i = 0; i < quantidadeAlunos; i++) {
        printf("Aluno %d\n", i + 1);

        printf("Nome: %s", alunos[i].nome);

        printf("Nota: %.2f\n\n", alunos[i].nota);

    }

    mediaNotas = somaNotas / (float)quantidadeAlunos;

    printf("\nMaior nota da turma: %.2f\n", maiorNota);

    printf("Menor nota da turma: %.2f\n", menorNota);

    printf("Media da turma: %.2f\n", mediaNotas);

    free(alunos);*/

    

    return 0;
}