# Simple XOR File Encryptor

## Overview
A lightweight command-line tool written in C++ that performs basic XOR encryption and decryption on files. This project demonstrates binary file I/O operations and bitwise manipulation. Because XOR is symmetric, running the encrypted file back through the program with the same key will decrypt it.

## Features
- Encrypts and decrypts any file type (text, images, binaries).
- Uses a user-defined single-character key.
- Safe file handling using standard C++ `fstream`.

## Usage
Compile the code using a standard C++ compiler like g++:
`g++ main.cpp -o encryptor`

Run the program:
`./encryptor`
Follow the on-screen prompts to provide the input file path, output file path, and your secret key.
