#include <stdlib.h>
#include <stdio.h>

int main(){
    int i = 12345, j = i % 10, k;
    if (i<1000) {
        i = j * 1000 + (i - j);
        printf("%d", i);
    }
    else {
        k = i / 1000;
        if (k>10) {
            k = k % 10;    
        }
        i = i + (999 * abs(j - k));
        printf("%d", i);
    }
    return 0;
}
