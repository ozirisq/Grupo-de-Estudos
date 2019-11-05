#include<stdio.h>
/*  Ver quantos porcento de aumento teve entre um valor e outro */
int main() {
  int A,B,PORCENTAGEM;

  scanf("%d %d",&A, &B);

  PORCENTAGEM = ((B-A)/A)*100;

  printf("%d%%", PORCENTAGEM);
  return 0;
}
