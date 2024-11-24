#ifndef RSATOOLS_H
#define RSATOOLS_H


#include <stdio.h>                                                                                                      
#include <string.h>                                                                                                     
#include <stdlib.h>  
#include <math.h>


char* encrypt(const char buffer[], int e, int n);
char* decrypt(const char buffer[], int d, int n);

char exponent(char base, int exp);
int gcd(int a, int b);
int is_coprime(int num1, int num2);
int is_prime(int n);
int mod_inverse(int e, int phi);
int mod_exp(int base, int exp, int mod);
int mod_inverse(int e, int phi);
int extended_gcd(int a, int b, int *x, int *y);



#endif
