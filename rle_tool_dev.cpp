#include <stdio.h>
#include <stdlib.h>

void compressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files.\n");
        return;
    }

    char curr, prev;
    int count = 1;

    prev = fgetc(in);
    if (prev == EOF) {
        fclose(in);
        fclose(out);
        return;
    }

    while ((curr = fgetc(in)) != EOF) {
        if (curr == prev) {
            count++;
        } else {
            fprintf(out, "%d%c", count, prev);
            count = 1;
        }
        prev = curr;
    }

    // Write last sequence
    fprintf(out, "%d%c", count, prev);

    fclose(in);
    fclose(out);
    printf("Compression done. Output file: %s\n", outputFile);
}

void decompressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (in == NULL || out == NULL) {
        printf("Error opening files.\n");
        return;
    }

    int count;
    char ch;
    while (!feof(in)) {
        if (fscanf(in, "%d%c", &count, &ch) == 2) {
            for (int i = 0; i < count; i++) {
                fputc(ch, out);
            }
        }
    }

    fclose(in);
    fclose(out);
    printf("Decompression done. Output file: %s\n", outputFile);
}

int main() {
    int choice;
    char inputFile[100], outputFile[100];

    printf("RLE Compression Tool\n");
    printf("1. Compress a file\n");
    printf("2. Decompress a file\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter input file name: ");
        scanf("%s", inputFile);
        printf("Enter output (compressed) file name: ");
        scanf("%s", outputFile);
        compressFile(inputFile, outputFile);
    } else if (choice == 2) {
        printf("Enter input (compressed) file name: ");
        scanf("%s", inputFile);
        printf("Enter output (decompressed) file name: ");
        scanf("%s", outputFile);
        decompressFile(inputFile, outputFile);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

