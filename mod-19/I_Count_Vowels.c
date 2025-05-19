#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int countVowels(char s[], int i) {
    if (s[i] == '\0') return 0;
    int count = countVowels(s, i + 1);
    if (isVowel(s[i])) {
        count++;
    }
    return count;
}

int main() {
    char s[201];
    fgets(s, 201, stdin); 
    s[strcspn(s, "\n")] = '\0';

    int result = countVowels(s, 0);
    printf("%d\n", result);

    return 0;
}
