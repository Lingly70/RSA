#include <stdio.h>                                                                                                      
#include <string.h>                                                                                                     
#include <stdlib.h>  

//FUNCTION PROTOTYPE DECLARATION START
char* encrypted(const char buffer[], int exp);
char exponent(int base, int exp);
bool is_prime(int n);
int gcd(int a, int b);
bool is_coprime(int num1, int num2);
int mod_inverse(int e, int phi)
//FUNCTION PROTOTYPE DECLARATION END


//FUNCTIONS START 
char* encrypted(const char buffer[], int exp) {
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

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;  
    if (n % 2 == 0) return false;  // checking if 0, 1, or an even number.

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;  //trial division method applied in the forloop.
    }
    return true;  //if all previous tests are false then the int provided is true for being prime. 
}


int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

bool is_coprime(int num1, int num2){
	return (gcd(num1, num2)==1);
}

int mod_inverse(int e, int phi) {
    e = e % phi;
    for (int x = 1; x < phi; x++) {
        if ((e * x) % phi == 1)
            return x;
    }
    return 1; // return 1 if no modular inverse is found (unlikely scenario)
}



	
