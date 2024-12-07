#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    int x;
    double PI = 4.0f;
    int sign = -1;
    double an;
    
    for(t = 1; ; t++){
        an = 4.0 / (2 * t + 1); //從x=3開始
        PI = PI + (sign * an);
        sign = -sign;
        if(fabs(PI - 3.14159) <= 0.000001) {
            break;
        }
    }
        
    x = 2 * t + 1;
    printf("x is: %d\n", x);
    printf("PI: %.5f\n", PI);
    
    return 0;
}
