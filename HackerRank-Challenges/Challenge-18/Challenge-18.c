#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    int d=0;
    scanf("%d",&a);
    while( a != 0){
        b=a%10;
        if(b==0){
            d=1;
            
        }
        a=a/10;
    }
    if(d == 1){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
