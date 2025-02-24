#include <stdio.h>
#include <string.h>

void rot13(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            s[i] = (c - 'A' + 13) % 26 + 'A';
        } else if (c >= 'a' && c <= 'z') {
            s[i] = (c - 'a' + 13) % 26 + 'a';
        }
    }
}

int main() {
    char str[100];

    printf("Metni giriniz: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    rot13(str);

    printf("ROT13 ile sifrelenmis metin: %s\n", str);

    return 0;
}
