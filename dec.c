#include<stdio.h>
#include<stdlib.h>

void decrypt(FILE * encrypted_file, FILE * key_file, FILE * decrypted_file){
	int enc_c;
	while((enc_c = fgetc(encrypted_file)) != EOF){
		int key_c = fgetc(key_file);
		int dec_c = enc_c ^ key_c;
		fputc(dec_c, decrypted_file);

	}
}


int main(int argc, char *argv[]){
	if(argc != 3){
		printf("have to provide 2 input arguments\n");

	}
	else{
		FILE * encrypted_file = fopen(argv[1], "r"); 
		FILE * key_file = fopen(argv[2], "r");
		FILE * decrypted_file = fopen("decrypted.out", "w");

		decrypt(encrypted_file, key_file , decrypted_file);
		fclose(decrypted_file);
		fclose(encrypted_file);
		fclose(key_file);
	}
}
