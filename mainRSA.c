#include "RSAtools.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>




int main(void) {
    int option, p, q, n, phi, e, d;
    char message[1024];

    do {
        printf("\nChoose an option:\n");
        printf("1. Encrypt a message\n");
        printf("2. Decrypt a message\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter the message to encrypt: ");
                scanf(" %[^\n]s", message);

                do {
                    printf("Enter prime number p: ");
                    scanf("%d", &p);
                    printf("Enter prime number q: ");
                    scanf("%d", &q);
                    if (!is_prime(p) || !is_prime(q)) {
                        puts("One of your inputs is not prime. Try again.");
                    }
                } while (!is_prime(p) || !is_prime(q));

                n = p * q;
                phi = (p - 1) * (q - 1);

                do {
                    printf("Enter public key value (e): ");
                    scanf("%d", &e);
                    if (gcd(e, phi) != 1) {
                        puts("Public key e is not coprime with phi. Try again.");
                    }
                } while (gcd(e, phi) != 1);

                d = mod_inverse(e, phi);  // calculate private key
		if (d == -1) {
    			printf("Error: Modular inverse not found. Check your public key.\n");
    			return 1; 
		}
		    
                printf("Public key: (%d, %d)\n", e, n);
                printf("Private key: (%d, %d)\n", d, n);

                char* encrypted_message = encrypt(message, e, n);
                printf("Encrypted message: '%s'\n", encrypted_message);
                break;

            case 2:
                printf("Enter the encrypted message to decrypt: ");
                scanf(" %[^\n]s", message);

                printf("Enter private key (d): ");
                scanf("%d", &d);
                printf("Enter modulus (n): ");
                scanf("%d", &n);

                char* decrypted_message = decrypt(message, d, n);
                printf("Decrypted message: '%s'\n", decrypted_message);
                break;

            case 3:
                puts("Terminating program.");
                break;

            default:
                break;
        }

    } while (option != 3);

    return 0;
}

