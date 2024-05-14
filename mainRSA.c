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

char* encrypted(const char buffer[]) {
    static char encrypted[1000];  
    int length = strlen(buffer);  
    for (int i = 0; i < length; i++) {
        encrypted[i] = exponent(buffer[i]);
    }
    encrypted[length] = '\0';  //null termination. 
    return encrypted;
}

int exponent(int base, int exp){

	if(exp==0){	//verifying base case
		return 1;
	}else{
		return (base*exponent(base, exp-1)); //recursion called.
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;  
    if (n % 2 == 0) return false;  // checking if 0, 1, or an even number.

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;  //Trial division method applied in the forloop.
    }
	
    return true;  //if all previous tests are false then the int provided is true for being prime. 

	
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
