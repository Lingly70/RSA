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
	char message[1024];
	do{
		option = selection("Encrypt", "Decrypt");
		//asking for user's option.

		switch (option){

			case 1:
			printf("Enter the message to encrypt: ");
       			scanf(" %[^\n]s", message);  // Read an entire line, including spaces

        		printf("Enter prime number p: ");
        		scanf("%d", &p);

        		printf("Enter prime number q: ");
        		scanf("%d", &q);

        		printf("Enter public key exponent e: ");
        		scanf("%d", &public);

        		printf("You entered the message: '%s'\n", message);
        		printf("Prime numbers p: %d, q: %d, and public exponent e: %d\n", p, q, e);

			

			

			

				
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
