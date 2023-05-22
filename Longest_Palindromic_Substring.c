#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

void findLongestPalindrome(const char *str) {
    int n = strlen(str);
    int maxLength = 1;  // Minimum palindrome length is 1
    int start = 0;     // Starting index of the longest palindrome

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(str, i, j)) {
                int length = j - i + 1;
                if (length > maxLength) {
                    maxLength = length;
                    start = i;
                }
            }
        }
    }
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("
");
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "
")] = NULL; // Remove trailing newline

    findLongestPalindrome(str);

    return 0;
}
