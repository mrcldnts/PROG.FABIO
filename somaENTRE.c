#include <stdio.h>

int somaInteiro(int a, int b);

int main(){
	int n1,n2,r;
	printf("Digite o primeiro numero:");
  	scanf("%d",&n1);
  	printf("Digite o segundo numero:");
  	scanf("%d",&n2);
  	
	r = somaInteiro(n1,n2);
			
	printf("A soma dos inteiros entre eles eh: %d",r);
	
	return 0;		
}
int somaInteiro(int a,int b){
	int i, soma=0;
	
	if (a<b){	
	for (i=a+1;i<b;i++){
		soma = i+soma;
	}
	}
	if (a>b){
		for (i=a-1;i>b;i--){
		soma = i+soma;
	}
	}
	return soma;	
}
