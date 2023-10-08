#include <stdio.h>

int isPalindrome(int x) {
    long int original = x, reversed = 0;

    if (original < 0) {
        return 0; // Negative numbers are not palindromes
    }

    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return (original == reversed);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
