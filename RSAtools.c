#include <stdio.h>                                                                                                      
#include <string.h>                                                                                                     
#include <stdlib.h>  

//FUNCTION PROTOTYPE DECLARATION START
char* encrypted(const char buffer[], int exp);
char exponent(int base, int exp);
bool isPrime(int n);
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
		return (char)(current_letter*exponent(base, exp-1)); //recursion called.
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;  
    if (n % 2 == 0) return false;  // checking if 0, 1, or an even number.

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;  //Trial division method applied in the forloop.
    }


  //FUNCTION END.
	
    return true;  //if all previous tests are false then the int provided is true for being prime. 

	
}
