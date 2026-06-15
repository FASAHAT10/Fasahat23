#include <stdio.h>

/**
 * File Handling: Text file mein likhna aur read karna.
 */
int main() {
    FILE *fp;

    // 1. File mein likhna (Write)
    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("File nahi khul saki!\n");
        return 1;
    }

    fprintf(fp, "C language se file mein likha gaya text.\n");
    fclose(fp);
    printf("File 'test.txt' mein data likh diya gaya hai.\n");

    // 2. File se read karna
    char buffer[100];
    fp = fopen("test.txt", "r");
    if (fp != NULL) {
        fgets(buffer, 100, fp);
        printf("File se read kiya: %s", buffer);
        fclose(fp);
    }

    return 0;
}
