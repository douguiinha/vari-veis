#include<stdio.h>

int main(){

    //definir dados de entrada 
    char nome [50];
    int idade;
    char endereco[50];
    char matricula[10];
    char curso [30];
    int periodo;
    char disciplinas[255];

    printf("\nDigite o nome: ");
    fgets(nome,50,stdin);

    printf("\nDigite a idade:");
    scanf("%d" ,&idade);
    fflush(stdin);

    printf("\nDigite o endereco: ");
    fgets(endereco,50,stdin);
    fflush(stdin);


    printf("\nDigite o matricula: ");
    fgets(matricula,10,stdin);
    fflush(stdin);

    printf("\nDigite o curso: ");
    fgets(curso,30,stdin);
    fflush(stdin);

    printf("\nDigite a periodo:");
    scanf("%d" ,&periodo);
     fflush(stdin);

    printf("\nDigite o diciplina: ");
    fgets(disciplinas,30,stdin);


//apresentação dos daodos

printf("\nNome: %s", nome);
printf("\nidade: %d", idade);
printf("\nendereco: %s", endereco);
printf("\nmatricula: %s", matricula);
printf("\ncurso: %s", curso);
printf("\nperiodo: %d", periodo);
printf("\ndisciplinas: %s", disciplinas);


}