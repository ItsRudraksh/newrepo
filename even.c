#include <stdio.h>

int main() {
    int n, i = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(i <= n) {
        printf("%d\n", i);
        i += 2;
    }
    return 0;
}
