#include <stdio.h>

//Programa auxiliar.                                          

// Função para verificar se a resposta é válida (S ou N).
int resposta_valida(char resp) {
    return (resp == 'S' || 's' || resp == 'N' || resp == 'n');
}
// Função para verificar se o número é par ou ímpar.
int par_impar(int num) {
    return (num % 2 == 0);
}
// Função para verificar se o número é maior ou menor que 50.
int maior_menor(int num) {
    return (num > 50);
}
// Função para verificar se o número é maior ou menor que 25.
int maior_menor_25(int num) {
    return (num > 25);
}
// Função para verificar se o número é maior ou menor que 75.
int maior_menor_75(int num) {
    return (num > 75);
}
// Função para verificar se o número tem dois dígitos.
int dois_digitos(int num) {
    return (num >= 10 && num <= 99);
}
// Função para verificar se o primeiro dígito é par.
int primeiro_digito_par(int num) {
    return ((num / 10) % 2 == 0);
}
// Função para verificar se o número é o mesmo que o jogador pensou.
int numero_correto(int num, int jogador) {
    return (num == jogador);
}
// Função para chutar o número.
int chutar_numero(int num) {
    return num;
}
// Função para verificar se o jogador quer jogar novamente.
int jogar_novamente(char resp) {
    return (resp == 'S' || resp == 's');
}
// Função para exibir a mensagem de finalização do jogo.
void mensagem_finalizacao() {
    printf("A máquina adivinhou o seu número!\n");
    printf("Obrigado por jogar!\n");
    printf("Se você quiser jogar novamente, digite S. Se não, digite N.\n");
}
// Função para exibir a mensagem de boas-vindas.
void mensagem_boas_vindas() {
    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Esse jogo é para você e sua família.\n");
    printf("Você pode jogar com quantas pessoas quiser.\n");
    printf("Agora vamos começar!\n");
}

// Programa principal.

int main() {
 char nome [50];
  char resp1, resp2, resp3, resp4, resp5, resp6, resp7, resp8, resp9;
   int i[100]; // Variáveis para armazenar as respostas do jogador.

// Menu de Boas Vindas e entrada de dados.  

mensagem_boas_vindas();

printf ("Digite o nome do jogador: \n");
  scanf ("%s",nome);
printf ("Digite o número que você está pensando: \n");
  scanf ("%d", &i[100]);
 printf("Nesse jogo, a maquina deve adivinhar o número que você está pensando. As perguntas serão obejtivas e você deve responder com S para sim ou N para não.\n");

//Perguntas para jogador. 

printf ("1ª tentativan\n");
 printf ("O seu número é maior do que 50?\n");
  scanf  ("%s", resp1);
// Resposta do jogador.
if (resposta_valida(resp1)) {
    if (resp1 == 'S' || resp1 == 's') {
        i[51] = maior_menor(i[100]);
    } else {
       (resp1 == 'N' || resp1 == 'n');
        i[0] = maior_menor(i[50]);
    }
} else {
    printf("Resposta inválida. Por favor, responda com S ou N.\n");
}

printf("2ª tentativan\n");
 printf("Esse número é par?");
  scanf("%s", resp2); 
 // Resposta do jogador.
if (resposta_valida(resp2)) {
    } if (resp2 == 'S' || resp2 == 's') {
        i[51] = par_impar(i[100]);         
    } if { 
       (resp2 == 'N' || resp2 == 'n');
        i[51] = par_impar(i[100]);
            } if { (resp2 == 'S' || resp2 == 's') 
                i[0] = par_impar(i[50]);         
              } if { 
                 (resp2 == 'N' || resp2 == 'n');
                  i[0] = par_impar(i[50]);
              }       
    else {
    printf("Resposta inválida. Por favor, responda com S ou N.\n");  
    } 


if (resposta_valida(resp1)) {
    if (resp1 == 'N' || resp1 == 'n') {        
printf("3ª tentativan\n");
 printf ("O número é maior que 25?"); //Caso menor que 50. 
  scanf  ("%s", resp3);
// Resposta do jogador.
    if (resposta_valida (resp3)) {
        if (resp3 == 'S' || resp3 == 's') {
            i[25] = maior_menor_25(i[50]);
        } else {
            (resp3 == 'N' || resp3 == 'n');
            i[0] = maior_menor_25(i[24]);
        }
    } else {
        printf("Resposta inválida. Por favor, responda com S ou N.\n");
  }
 }
}

if (resposta_valida(resp1)) {
    (resp1 == 'S' || resp1 == 's');  
printf("4ª tentativan\n");
 printf("O número é maior que 75?"); //Caso maior que 50.
  scanf("%s", resp4);
// Resposta do jogador.
    if (resposta_valida(resp4)) {
        } if (resp4 == 'S' || resp4 == 's') {
            i[75] = maior_menor_75(i[50]);
        } else {
            (resp4 == 'N' || resp4 == 'n');
            i[51] = maior_menor_75(i[74]);
        }
    } else {
        printf("Resposta inválida. Por favor, responda com S ou N.\n");
  }

printf("5ª tentativan\n");
 printf("Esse número tem dois digitos?"); // Apenas se for para menor de 25 ou maior que 75.
  scanf("%s", resp5);
// Resposta do jogador.
    if (resposta_valida(resp5)) {
         if (resp5 == 'S' || resp5 == 's') {
            i[99] = dois_digitos(i[100]);
        } else {
            (resp5 == 'N' || resp5 == 'n');
            i[0] = dois_digitos(i[98]);
        }
     else {
        printf("Resposta inválida. Por favor, responda com S ou N.\n");
  }
} 

printf("6ª tentativan\n");
 printf("O primeiro digito do seu número é par?");
  scanf ("%s", resp6);
// Resposta do jogador.
    if (resposta_valida(resp6)) {
        } if (resp6 == 'S' || resp6 == 's') {
            i[99] = primeiro_digito_par(i[100]);
        } else {
            (resp6 == 'N' || resp6 == 'n');
            i[0] = primeiro_digito_par(i[98]);
        }
     else {
        printf("Resposta inválida. Por favor, responda com S ou N.\n");
  }
 
printf ("7ª tentativan\n");
 printf ("Esse é seu número?\n"); // Chutar o numero do meio.
  scanf  ("%s", resp7);
// Resposta do jogador.
if (resposta_valida(resp7)) {
    if (resp7 == 'S' || resp7 == 's') {
        i[50] = numero_correto(i[100], i[50]);
    } else {
        (resp7 == 'N' || resp7 == 'n');
        i[0] = numero_correto(i[100], i[0]);
    }
} else {
    printf("Resposta inválida. Por favor, responda com S ou N.\n");
  }  
   
printf("8ª tentativan\n");
 printf("Então seu número é: %d", &i[101]); // Chutar o número.
//Resposta do jogador.
if (resposta_valida(resp8)) {
    if (resp8 == 'S' || resp8 == 's') {
        i[101] = chutar_numero(i[100]);
    } else {
        (resp8 == 'N' || resp8 == 'n');
        i[0] = chutar_numero(i[100]);
    }
} else {
    printf("Resposta inválida. Por favor, responda com S ou N.\n");
  }

// Mensagem de finalização do jogo.
    mensagem_finalizacao();
 return 0;
}
// Fim do programa.    