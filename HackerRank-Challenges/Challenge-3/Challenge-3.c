#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==10 || b==10 || a+b==10){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}
