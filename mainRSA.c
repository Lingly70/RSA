#include "RSAtools.c"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int selection(const char *option1, const char *option2){
	int user_option;
	
	printf("RSA CRYPTOSYSTEM: (1) %s, (2) %s >", option1, option2);
	
	scanf("%d", &user_option);
	
	return user_option;
}



int main(void){
	int option; 
	int p, q, private, public;
	
	do{
		int pPrime, qPrime;
		while (pPrime!=0 | qPrime!=0){
			scanf("Enter first component p: %d, %d", &p, &q);		
		}
		int n = p*q;
		option = menu();
                char[100] to_encode;

		switch (option){

			case 1:
				printf("What to encode: ");
				fgets(to_encode, 100, stdin);
				to_encode[strcspn(to_encode, "\n")] = 0;

				encode_message(to_encode); //Pointer not listed
			case 2:
				printf("What to decode: ");
				fgets(to_decode, 100, )
							
			case 3: 
				break;
			default:
				break;
		
		}
	
	}while(option!=3);

}
