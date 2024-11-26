#include <stdio.h>
int main() {
    int n, i;
    long long a = 0, b = 1, next;
    printf("Nhap so n: ");
    scanf("%d", &n);
    printf("Day Fibonacci voi %d so dau tien: ", n);
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", a);
        } else if (i == 2) {
            printf("%lld ", b);
        } else {
            next = a + b;
            printf("%lld ", next);
            a = b;
            b = next;
        }
    }
}
