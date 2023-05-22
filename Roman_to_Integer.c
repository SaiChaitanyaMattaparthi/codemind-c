#include <stdio.h>

int romanToInt(char romanNumeral[]) {
    int result = 0;
    int i;

    // Iterate through the Roman numeral string
    for (i = 0; romanNumeral[i] != NULL; i++) {
        // Compare the current symbol with the next symbol
        if (romanNumeral[i] == 'I' && romanNumeral[i + 1] == 'V') {
            result += 4;
            i++; // Skip the next symbol 'V'
        } else if (romanNumeral[i] == 'I' && romanNumeral[i + 1] == 'X') {
            result += 9;
            i++; // Skip the next symbol 'X'
        } else if (romanNumeral[i] == 'X' && romanNumeral[i + 1] == 'L') {
            result += 40;
            i++; // Skip the next symbol 'L'
        } else if (romanNumeral[i] == 'X' && romanNumeral[i + 1] == 'C') {
            result += 90;
            i++; // Skip the next symbol 'C'
        } else if (romanNumeral[i] == 'C' && romanNumeral[i + 1] == 'D') {
            result += 400;
            i++; // Skip the next symbol 'D'
        } else if (romanNumeral[i] == 'C' && romanNumeral[i + 1] == 'M') {
            result += 900;
            i++; // Skip the next symbol 'M'
        } else {
            // Add the value of the current symbol
            switch (romanNumeral[i]) {
                case 'I':
                    result += 1;
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'X':
                    result += 10;
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'C':
                    result += 100;
                    break;
                case 'D':
                    result += 500;
                    break;
                case 'M':
                    result += 1000;
                    break;
                default:
                    return -1;
            }
        }
    }

    return result;
}

int main() {
    char romanNumeral[20];

    scanf("%s", romanNumeral);

    int result = romanToInt(romanNumeral);

    if (result != -1) {
        printf("%d
", result);
    }

    return 0;
}
