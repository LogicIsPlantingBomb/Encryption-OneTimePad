# One-Time Pad (OTP) Encryption & Decryption Tool

This repository contains simple C programs to encrypt and decrypt files using the One-Time Pad (OTP) encryption technique. The encryption process uses a random key for each character, making it highly secure when used correctly.

## How It Works

### Encryption (`enc.c`)
- The encryption program reads the input file character by character.
- A random key is generated for each character using `rand()`.
- The character is XORed with the key to produce an encrypted output.
- The key and encrypted character are saved separately in two different files.

### Decryption (`dec.c`)
- The decryption program reads the encrypted file and the corresponding key file.
- Each encrypted character is XORed with its respective key to retrieve the original character.
- The decrypted content is saved in an output file.
.
## Compilation & Usage

### Compile the programs:
```bash
gcc enc.c -o enc
gcc dec.c -o dec
```

### Encrypt a file:
```bash
./enc <input_file>
```
- The encrypted file is saved as `crypt.out`.
- The corresponding key file is saved as `key.out`.

### Decrypt a file:
```bash
./dec crypt.out key.out
```
- The decrypted output is saved as `decrypted.out`.

## Important Notes
- The key file must be securely stored and **never reused** for different messages.
- The encryption is only as strong as the randomness of `rand()`, which may not be truly random.
- For true OTP security, use a cryptographically secure random number generator.
- The size of the key must be equal to the size of the message to ensure perfect secrecy.

## License
This project is for educational purposes only. Use responsibly!

