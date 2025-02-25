#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Nh?p N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        int NN = i * 10 + i;
        sum += NN;
    }
    
    printf("T?ng S = %d\n", sum);
    return 0;
}

