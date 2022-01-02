/*-----------------------------------------------------------SISTEMA DE TELA DE LOGIN EM C--------------------------------------------------------------------------------*/

# include  <stdio.h>  // padrão
# include <stdlib.h>  // padrão
# include  <string.h>  // Essa biblioteca serve para usar as estruturas e manipulação de strings
# include  <locale.h>  // acentuação em português
#include <stdalign.h>
#include <time.h>
#include <conio.h>



typedef  struct
{
    char nome[50];
    char CPF[11];
    char data[20];
    int idade;
    char endereco[100];
    char bairro[100];
    char cidade [100];
    char estado [20];
    char CEP[8];
    char telefone [15];
    char email [50];
    char comorbidade[100];
    char login[15];
    char login1[15];
    char senha[15];
    char senha1[15];

} pessoa; pessoa p[1];  // diminuindo o nome da struct para "p" e o "[1]" o máximo de pessoas com logins e senhas

int main (int argc, char const *argv[])
{
    char nome[50];
    char CPF[20];
    char data[20];
    int idade;
    char endereco[100];
    char bairro[100];
    char cidade [100];
    char estado [20];
    char CEP[8];
    char telefone [15];
    char email [50];
    char comorbidade[100];
    char login[15] = "func";
    char login1[15];
    char senha[15] = "123";
    char senha1[15];



    setlocale(LC_ALL,"");

    printf("\n---------------------------------------------SISTEMA DE LOGIN-----------------------------------------------------------\n");


    int login_efetuado  = 0; //0 - Falso e  1 - Verdadeiro

    while(!login_efetuado)
    {
        printf("Digite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");

    }
 system ("cls");

    printf("\n-------------------------------------------PRONTUÁRIO DO PACIENTE------------------------------------------------------\n");



printf("\n Dados do Paciente \n");
fgets(nome,30,stdin);

printf("\n\t Nome: ");
fgets(nome,30,stdin);

printf("\n\t Idade: ");
fgets(data,20,stdin);

printf("\n\t CPF: ");
fgets(CPF,20,stdin);

printf("\n\t Telefone: ");
fgets(telefone,15,stdin);

printf("\n\t E-mail: ");
fgets(email, 50, stdin);

printf("\n\t Comorbidade: ");
fgets(comorbidade,100,stdin);

printf("\n\t");

printf("\n Endereço \n");

printf("\n\t");

printf("\n\t Rua, Bairro e Nº: ");
fgets(bairro,100,stdin);

printf("\n\t Cidade: ");
fgets(cidade,100, stdin);

printf("\n\t Estado: ");
fgets(estado, 20, stdin);

printf("\n\t CEP: ");
fgets(CEP, 8, stdin);

printf("\n\t");

idade = (data - 2021);

 if (idade <= 1956)
{
printf("Paciente pertence ao grupo de risco");
fgets(comorbidade,100,stdin);
}

 else
{
  printf("Paciente não pertence ao grupo de risco");
}

printf("\n\t");

}
