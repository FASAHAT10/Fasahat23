#include <stdio.h>
#include <stdlib.h> // system() function ke liye
#include <errno.h>  // Error handling ke liye
#include <string.h>

/**
 * System Programming Basics:
 * C language se hum operating system ki commands chala sakte hain
 * aur system errors ko handle kar sakte hain.
 */
int main() {
    printf("Operating System ki maloomat nikal rahe hain...\n");

    // Linux/Unix par 'ls' command chalana (Windows par 'dir' hoti hai)
    // Hum check karte hain ke system() available hai ya nahi
    if (system(NULL)) {
        printf("System shell available hai.\n");
        printf("\nCurrent Directory ki files:\n");
        system("ls -F");
    } else {
        printf("System shell available nahi hai.\n");
    }

    // Error handling ka misal
    FILE *fp = fopen("mili_nahi.txt", "r");
    if (fp == NULL) {
        printf("\nError: %s\n", strerror(errno));
    } else {
        fclose(fp);
    }

    return 0;
}
