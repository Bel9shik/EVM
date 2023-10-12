#include <stdio.h>

void calculate(int N) {
    double pi = 0;
    double powNum;
    for (int i = 0; i < N; i++) {
        i % 2 == 0 ? (powNum = 1) : (powNum = -1);
        pi += 4 * (powNum /  (2 * i + 1));
    }
    printf("%.9f\n", pi);
}

int main() {
    int N;
    N = 800000000;
    calculate(N);
    return 0;
}
