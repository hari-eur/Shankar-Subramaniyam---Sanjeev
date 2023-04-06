#include <stdio.h>
#include <stdlib.h>

void encrypt_file(char* filename);
void decrypt_file(char* filename);

int main() {
    char choice;
    char filename[100];

    do {
        printf("\nEnter\n");
        printf("E to encrypt\n");
        printf("D to decrypt\n");
        printf("Q to quit\n");
        scanf(" %c", &choice);

        switch (choice) {
            case 'E':
                printf("Enter the file to be encrypted: ");
                scanf("%s", filename);
                encrypt_file(filename);
                break;
            case 'D':
                printf("Enter the file to be decrypted: ");
                scanf("%s", filename);
                decrypt_file(filename);
                break;
            case 'Q':
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 'Q');

    return 0;
}

void encrypt_file(char* filename) {
    FILE* fp_in = fopen(filename, "r");
    if (!fp_in) {
        printf("Error: Could not open file %s for reading.\n", filename);
        return;
    }

    char encrypted_filename[100];
    sprintf(encrypted_filename, "%s_encrypted", filename);

    FILE* fp_out = fopen(encrypted_filename, "w");
    if (!fp_out) {
        printf("Error: Could not open file %s for writing.\n", encrypted_filename);
        return;
    }

    int c;
    while ((c = fgetc(fp_in)) != EOF) {
        // Perform encryption on each character
        fputc(c + 1, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);

    printf("Encrypted file is %s.\n", encrypted_filename);
}

void decrypt_file(char* filename) {
    FILE* fp_in = fopen(filename, "r");
    if (!fp_in) {
        printf("Error: Could not open file %s for reading.\n", filename);
        return;
    }

    char decrypted_filename[100];
    sprintf(decrypted_filename, "%s_decrypted", filename);

    FILE* fp_out = fopen(decrypted_filename, "w");
    if (!fp_out) {
        printf("Error: Could not open file %s for writing.\n", decrypted_filename);
        return;
    }

    int c;
    while ((c = fgetc(fp_in)) != EOF) {
        // Perform decryption on each character
        fputc(c - 1, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);

    printf("Decrypted file is %s.\n", decrypted_filename);
}