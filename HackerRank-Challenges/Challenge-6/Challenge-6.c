#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    
    if( (a<30 && a>40) || (b<40 && b>50) ){
        printf("false");
    }else{
        printf("true");
    }
    return 0;
}