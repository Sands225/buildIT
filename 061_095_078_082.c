#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N % 2 == 0) {
        printf("%s", "Genap");
    } else {
        printf("%s", "Ganjil");
    }  
    return 0;
}
