#include <math.h>
#include <stdio.h>

void calculate(int N) {
    double pi;

    for (int i = 0; i < N; i++) {
        pi += 4 * ((pow(-1,i)) / (2 * i + 1));
    }
    printf("%lf\n", pi);
}

int main() {
    int N;
    N = 1000000000;
    calculate(N);
    return 0;
}
