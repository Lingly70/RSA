


# Overview
This application implements a basic RSA cryptosystem in C, allowing users to:
- **Encrypt messages** using RSA public-key cryptography.
- **Decrypt messages** using RSA private-key cryptography.



# Prerequisites
 1. GCC (GNU Compiler Collection)
 2. Bash Shell (Windows users should install a shell emulator like Git Bash or use WSL)
 3. Make sure the Math library from the standard C library is present.


# Setup
 Make sure all relevant files are within same directory. Make script executable, and run the exec.sh script.
 ```
 ~/projects/RSA chmod +x exec.sh
 ~/projects/RSA ./exec.sh
```
 Then one can run the program
 ```
 ~/projects/RSA ./rsa
```
# Example usage

### 1. Encrypting a message:
 Run the program and select the encrypt option:
 ```
Choose an option:
1. Encrypt a message
2. Decrypt a message
3. Exit
Enter your choice:
1
```
Enter the message you want to encrypt:
```
Enter the message to encrypt:
HelloRSA
```
Provide the **_prime_** numbers _p_ and _q_ :
```
Enter prime number p:
13
Enter prime number q:
17
```
Enter a public key value that is coprime with (p-1)*(q-1):
```
Enter public key value:
5
```
The program will display your encrypted message.
```
Your encrypted message is: '@Y_iaUO^'
```
### 2. Decrypting the message:
Similarly to the steps to encrypting, except one must select 2 as the encryption option, enter the encrypted message, provide the usual _p_ and _q_ HOWEVER one must also provide the private key _d_ whilst knowing the public key _e_
which respects the equation

<p align="center">
    
    (e * d) mod (p-1) * (q-1) = 1
    
</p>

In other words, where private key _d_ is the modular multiplicative inverse of public key _e_ mod (p-1) * (q-1).









