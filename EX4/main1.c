#include <stdio.h>

int main(){
    int x, y;
    int n = 7;
    
    for(x = 1; x <= 7; x++) {
        
        for(y = 1; y <= 7; y++){
           
           if(y <= n - x){
               printf(" ");
               
           }
           
           else{
               printf("%d ", x);
               
           }
            
        }
        printf("\n");
        
    }
    return 0;
}