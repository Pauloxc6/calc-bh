#include <stdio.h>
#include "lib.h"

int main(){
	int n1;
		
	printf("-------------[ Calculadora de buracos negros ]-------------\n");
	printf("-------------[ 1. tamanho do buraco negro ]----------------\n");
	printf("-------------[ 2. temperatura do buraco negro ]------------\n");
	printf("-------------[ 3. entropia do buraco negro ]---------------\n");
	
	printf("\nEscolha uma das opcoes acima: ");
	scanf("%d", &n1);
	
	switch(n1){
		case 1:
			sizebh();
			break;
			
		case 2:
			tempbh();
			break;
	
	    case 3:
	    	entropybh();
	    	break;
	    
	    default:
	    	printf("Error");
	}
}
  	
