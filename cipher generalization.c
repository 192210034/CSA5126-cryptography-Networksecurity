#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int i;
    
    printf("Values of 'a' that are not allowed: ");
    for (i = 1; i < 26; ++i) {
        if (gcd(i, 26) != 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}

