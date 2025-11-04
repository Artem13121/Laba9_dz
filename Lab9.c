#include <stdio.h>
int main() {
    int i, j;
    for (i = 6; i >= 2; i--) {
        for (j = i; j >= 2; j--) {
            printf("%d  ", j);
        }
        printf("\n");
    }
    return 0;
}