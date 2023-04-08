#include <stdio.h>

int is_prime(int n);

int nth_prime(int n) {
    int count = 0;
    int i = 2;
    while (count < n) {
        if (is_prime(i)) {
            count++;
        }
        i++;
    }
    return i-1;
}

int is_prime(int n) {
    if (n <= 1) {
        return 0; // not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // not prime
        }
    }
    return 1; // prime
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int nthPrime = nth_prime(n);
    printf("The %dth prime number is: %d\n", n, nthPrime);
    return 0;
}
