#include "Header.h"

int main() {
    char str[100];

    printf("Vvedite stroky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Удаляем символ новой строки


    if (isPalindrome(str)) {
        printf("Palendrom\n");
    }
    else {
        printf("No palendrom\n");
    }

    return 0;
}
