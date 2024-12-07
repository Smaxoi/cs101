#include <stdio.h>

int main()
{
    int y = 1;
    int x = 1;
    
    
    for(x = 1; x <= 9; ){
            
            printf( "%d*%d=%d\t", x, y,x * y);
            y++;
            if (y > 9) {
                y = 1;
                x++;
                printf("\n");
            }
    }
    return 0;
}
