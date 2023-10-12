#include <stdio.h>
#include <string.h>

int countOccurrences(char str[], char ch) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch)
            count++;
    }
    return count;
}

int countBlankSpaces(char str[]) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            count++;
    }
    return count;
}

int countWords(char str[]) {
    int count = 0;
    int isWord = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            isWord = 0;
        else if (isWord == 0) {
            isWord = 1;
            count++;
        }
    }
    return count;
}

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char ch;
    printf("Enter a character to find its occurrences: ");
    scanf("%c", &ch);

    int occurrences = countOccurrences(str, ch);
    printf("Number of occurrences of %c: %d\n", ch, occurrences);

    int blankSpaces = countBlankSpaces(str);
    printf("Number of blank spaces: %d\n", blankSpaces);

    int words = countWords(str);
    printf("Number of words: %d\n", words);

    int vowels = countVowels(str);
    printf("Number of vowels: %d\n", vowels);

    return 0;
}
