#include <stdio.h>
#include <locale.h>
#define n 10

int main(){
  setlocale(LC_ALL, "Portuguese");
  int pascal[n][n];
  for(int i = 0; i < n; i ++){
    for(int j = 0; j < n; j ++){
      if(i == j || j == 0){
        pascal[i][j] = 1;
      }else if(i > j){
        pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
      }else{
        pascal[i][j] = 0;
      }
    }
  }
  //laço separado para printar
  for (int i = 0; i < n; i ++){
    	for (int j = 0; j <= i; j ++){
    	  printf("%d ", pascal[i][j]);
      }
		printf("\n");
	}

  return 0;
  //system("pause");
}
