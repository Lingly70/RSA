#include "RSAtools.c"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int selection(const char *option1, const char *option2, const char *option3){
	int user_option = 4;
	bool passed = (user_option!=1 ^ user_option!=2 ^ user_option!=3);
	printf("RSA CRYPTOSYSTEM: (1) %s, (2) %s >", option1, option2);

	while (!passed){
		scanf("%d", &user_option);
		if(!passed)puts("Wrong input! Try again.");
	}
	
	return user_option;
}




int main(void){
	int option; 
	int p, q, n, private, public;
	char message[1024];
	do{
		option = selection("Encrypt", "Decrypt", "End session");
		//asking for user's option.

		switch (option){

			case 1:
				
				printf("Enter the message to encrypt: ");
       				scanf(" %[^\n]s", message);  // Read an entire line, including spaces
				
        			do{
					printf("Enter prime number p: ");
        				scanf("%d", &p);

        				printf("Enter prime number q: ");
        				scanf("%d", &q);

					if(!(is_prime(p) && is_prime(q))){
						puts("One of your inputs is not prime. Try again. ");
					}
				}while(!(is_prime(p) && is_prime(q)));//END WHILE LOOP P_AND_Q

				n = p*q;

				do{
					printf("Enter public key value: ");
        				scanf("%d", &public);

					if(!(is_coprime(n, public))) puts("Your public key value is not prime. Try again. ");
					
				}while(is_coprime(n, public));
				

        			printf("You entered the message: '%s'\n", message);
        			printf("Prime numbers p: %d, q: %d, and public exponent e: %d\n", p, q, e);

				char *encrypted_message = encrypt(message);
    				char stored_encrypted[1024];
    				strcpy(stored_encrypted, encrypted_message);

				printf("Your encrypted message is: '%s'\n", stored_encrypted);
			
			case 2:
				printf("What to decode: ");
				fgets(to_decode, 100, );
							
			case 3: 
				puts("Terminating program. ");
				break;
			default:
				break;
		}
	
	}while(option!=3);

}
