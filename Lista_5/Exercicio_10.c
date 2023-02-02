#include <stdio.h>
#include <stdlib.h>
/*10. Escreva um programa para controlar a conta de clientes de um banco. Para
fins ilustrativos, o programa deve trabalhar com cinco clientes. A conta de cada
cliente deve ter os seguintes dados: número, CPF, tipo (p-poupança ou
c-corrente) e saldo. O algoritmo deve permitir as seguintes operações: cadastrar
conta, buscar conta pelo cpf, buscar todas as contas de um cliente (pelo cpf),
efetuar depósito, efetuar retirada, mostrar saldos de todas as contas. Se
possível, o sistema deve ter a opção extrato.*/
#define size 5
#define n 11
int main(){
int op, i, CPF[size], numClientes[size], cpf, num, flag=0, j; //2 CPF's, o vetor é para guardar os valores e a variável simples para fazer comparações
char tipo[size];
float saldo[size], saltoTotal[size], menos[size]={0, 0, 0, 0, 0}, mais[size]={0, 0, 0, 0, 0}, coloca, tira;
do{
  do {
      printf("\n -------conta bancária-------\n");
      printf("\n escolha uma das opções:\n");
      printf("\n1.cadastrar conta\n");
      printf("\n2.buscar conta pelo CPF\n");
      printf("\n3.buscar todas as contas de um cliente\n");
      printf("\n4.efetuar depósito\n");
      printf("\n5. efetuar retirada\n");
      printf("\n6.mostrar saldos de todas as contas\n");
      printf("\n7.Extrato\n");
      printf("\n8.sair\n");
      scanf("%d", &op);
    } while (op < 1 || op > 8);
    if(op==1){
    if(i<size){
      numClientes[i]=i+1;
      num=numClientes[i];
      printf("\ndigite seu CPF\n");
      scanf("%d", &CPF[i]);
      do{
        printf("\nTipo da conta: digite 'c' para corrente e 'p' para poupança\n");
        scanf(" %c", &tipo[i]);
        }while(tipo[i]!='c' && tipo[i]!='p' );//validação
      printf("\ndigite seu saldo inicial\n");
      scanf("%f", &saldo[i]);
      i++;
    } 
    else{
      printf("\nNão podemos mais cadastrar clientes!\n");}}
      }
    }
    if(op==2){
      printf("\nDigite seu CPF para buscarmos sua conta\n");
      scanf("%d", &cpf);
      for (j=0; j<size && flag==0; j++){
      if(cpf==CPF[j]){
        flag==1;
        }
      }
      if(flag==1){
        printf("\nSeu número é %d\n", numClientes[j]);
        printf("\nSeu saldo é %.2f\n", saldo[j]);
        printf("\nO tipo da conta é %c\n", tipo[j]);
      }
      else{
      printf("\nEsse CPF não foi cadastrado\n"):
      }
    }
    flag=0;
    j=0;
    if(op==3){
      printf("\nDigite seu CPF\n");
      scanf("%d", &cpf);
    for(j=0; j<size && flag=0; j++){
      if(cpf==CPF[j]){
        flag=1;
        }
      }
      if(flag==1){
        printf("\nSeu número é %d\n", numClientes[j]);
        printf("\nSeu saldo é %.2f\n", saldo[j]);
        printf("\nO tipo da conta é %c\n", tipo[j]);//Pelo CPF conseguiremos acessar todas as contas do cliente
      }
      else{
        printf("\nEsse CPF não pode ser encontrado\n"):
      }
    }
    flag=0;
    j=0;
    if(op==4){
    printf("\nDigite seu número\n");
    scanf("%d", &num);
    for(j=0; j<size && flag=0; j++){
      if(num==numClientes[j]){
        flag=1;
        }
      }
      if(flag==1){
        printf("\nSeu saldo atual é: %.2f\n", saldo[j]);
        do{
          printf("\nQuanto deseja adicionar?\n");
          scanf("%f", &coloca);
        }while(coloca<0);
        saldo[j]+=coloca;
        mais[j]+=coloca;
      }
    }
    flag=0; 
    j=0;
    if(op==5){
      printf("\nDigite seu número\n");
      scanf("%d", &num);
      for(j=0; j<size && flag=0; j++){
        if(num==numClientes[j]){
          flag=1;
        }
      }
      if(flag==1){
        printf("\nSeu saldo atual é: %.2f\n", saldo[j]);
        do{
          printf("\nQuanto deseja retirar?\n");
          scanf("%f", &tira);
        }while(tira<0);
       saldo[j]-=tira;
       menos[j]+=tira;
      }
    }
    flag=0;
    j=0;
    if(op==6){
      printf("\nDigite seu CPF\n");
      scanf("%d", &cpf);
      for(j=0; j<size && flag=0; j++){
      if(cpf==CPF[j]){
        flag=1;
        }
      }
      if(flag=1){
        printf("\nSeu saldo é: %.2f\n", saldo[j]);
       }
        else{
          printf("\nEsse CPF não encontrou resultados\n");
         }
    }
    if(op==7){
    printf("\nDigite seu número\n");
      scanf("%d", &num);
      for(j=0; j<size && flag=0; j++){
      if(num==numClientes[j]){
        flag=1;
        }
      }
      if(flag==1){
        printf("\n---->EXTRATO<----\n");
        printf("\nCPF da conta: %d\n", CPF[j]);
        printf("\nSaldo atual: %.2f\n", saldo[j]);
        printf("\nRetirada de dinheiro: %.2f\n", menos[j]);
        printf("\nDepósito total: %.2f\n", mais[j]);
       }
       else{
       printf("\nEsse número não encontrou resultados\n");
       }
    }
}while(op!=8);
printf("\nPROGRAMA ENCERRADO\n");
return 0;
}
