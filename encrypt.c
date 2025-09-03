// File Encryption
// Jonathan Ramos - September 03 2025

#include <stdio.h>

int get_bitmask(char* key){ // Simple hash but open for more complicated hashing method (SHA, RSA..)
	int hash = 0;
	while(*key){
		hash += (*key++);
	}
	return hash;
}

int encrypt(int c, char* key){
	int bitmask = get_bitmask(key);
	return c ^ bitmask; // XOR each char with bitmask
}

int main(int argc, char*argv[]){
	int c;

	while((c = getchar()) != EOF){
		putchar(encrypt(c, argv[1]));
	}
}
