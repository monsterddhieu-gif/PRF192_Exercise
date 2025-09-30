#include <stdio.h>
#include <math.h>
int main(){
    long long n;
    scanf("%lld", &n);
    long long count = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    printf("%lld\n", count);
    return 0;
}