#ifndef RSATOOLS_H
#define RSATOOLS_H


#include <stdio.h>                                                                                                      
#include <string.h>                                                                                                     
#include <stdlib.h>  
#include <math.h>


char* encrypt(const char buffer[], int exp);
char exponent(char base, int exp);
int gcd(int a, int b);
int is_coprime(int num1, int num2);
int is_prime(int n);
int mod_inverse(int e, int phi);


#endif
