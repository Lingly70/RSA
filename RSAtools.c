#include "RSAtools.h"



//FUNCTIONS START 
char* encrypt(const char buffer[], int exp) {
    static char encrypted[1000];  
    int length = strlen(buffer);  
    for (int i = 0; i < length; i++) {
        encrypted[i] = exponent(buffer[i], exp);
    }
    encrypted[length] = '\0';  //append such escape sequence for null termination.
    return encrypted;
}

char exponent(char base, int exp){
  	int current_letter = (int)base; 

	if(exp==0){	//verifying base case
		return 1;
	}else{
		return (char)(current_letter*(int)exponent(base, exp-1)); //recursion called.
	}
}	


int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int is_coprime(int num1, int num2){
	int value;
	if(gcd(num1, num2)==1){
		value=1;
	}else{value=0;}

	return value;
}


int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 0;  
    if (n % 2 == 0) return 0;  // checking if 0, 1, or an even number.

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;  //trial division method applied in the forloop.
    }
    return 1;  //if all previous tests are false then the int provided is true for being prime. 
}



int mod_exp(int base, int exp, int mod) {
    int result = 1;
    base = base % mod; // is base within mod range??
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod; // multiply when exp is odd
        }
        exp = exp / 2; 
        base = (base * base) % mod; 
    }
    return result;
}




	
