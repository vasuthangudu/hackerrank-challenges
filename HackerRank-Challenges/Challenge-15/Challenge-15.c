#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,max=0,digit;
    scanf("%d",&a);
    while(a != 0){
     digit=a%10;
       if(digit > max){
           max = digit;
       }
        a=a/10;
    }
    printf("%d",max);
    return 0;
}
