#include "RSAtools.h"



//FUNCTIONS START 
char* encrypt(const char buffer[], int e, int n) {
    static char encrypted[1024];
    int length = strlen(buffer);
    for (int i = 0; i < length; i++) {
        //encrypt each character using modular exponentiation
        encrypted[i] = mod_exp(buffer[i], e, n);
    }
    encrypted[length] = '\0'; // null terminate string
    return encrypted;
}

char* decrypt(const char buffer[], int d, int n) {
    static char decrypted[1024];
    int length = strlen(buffer);
    for (int i = 0; i < length; i++) {
        // Decrypt each character using modular exponentiation
        decrypted[i] = mod_exp(buffer[i], d, n);
    }
    decrypted[length] = '\0'; // Null termination
    return decrypted;
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
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
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

int mod_inverse(int e, int phi) {
    int x, y; // variables to store results from extended GCD
    int gcd = extended_gcd(e, phi, &x, &y);
    if (gcd != 1) {
        return -1; // case where modular inverse doesn't exist
    }
    // makes sure x is positive
    return (x % phi + phi) % phi;
}

// extended Euclidean Algorithm for GCD
int extended_gcd(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }
    int x1, y1; // store results of recursive call
    int gcd = extended_gcd(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return gcd;
}





	
