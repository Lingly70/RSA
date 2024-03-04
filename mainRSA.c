#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int selection(const char *option1, const char *option2){
	int user_option;
	
	printf("RSA CRYPTOSYSTEM: (1) %s, (2) %s >", option1, option2);

	scanf("%d", &user_option);
	
	return option;
}

char *encrypted(char buffer[]){

	char encrypted[1000];
	int Length  = sizeof(buffer[])/sizeof(buffer[0]);
	for(i=0; i<Length; i++){
		buffer[i]= exponent(buffer[i]);
		printf("extracting buffer. \n");	
	}
	return encrypted[];
}

int exponent(int base, int exp){

	int result = base;

	for(i=0; i<exp; i++){
		result *= base;
	}
	return result;
}

int isPrime(int test){

	int i;
	for(i=2; i*i <=test ; i++){
		if(test % i == 0){
			printf("Your number is not prime. Try again");
			return -1;
		}
	}
	return 0;

}



int calculateKey(int p, int q){
	
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
