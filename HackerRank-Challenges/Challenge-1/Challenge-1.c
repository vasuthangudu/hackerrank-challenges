#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int num,a,b,c;
    scanf("%d",&num);
    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    printf("%d",a+b+c);
   
    return 0;
}
