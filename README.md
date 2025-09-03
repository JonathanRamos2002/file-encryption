# File Encryption 

A minimal C program for basic encryption and decryption using XOR and a key derived bitmask 

## Features
1. works via standard input/output
2. symmetric encryption (same method & key for encryption & decryption)
3. accepts custom key

> ### How it works
> 1. Reads characters from standard input
> 2. Simple hash of the key is calculated
> 3. Each character is XOR'd with the bitmask
>> Run again with the same key to decrypt


## Usage
#### Compilation:
    gcc encrypt.c -o encrypt

#### Encryption:
    ./encrypt key < secret > encrypted

#### Decryption: 
    ./encrypt key < encrypted > decrypted


