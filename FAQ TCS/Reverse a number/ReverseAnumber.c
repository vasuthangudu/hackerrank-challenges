#include <stdio.h>

int main() {
    
     int rev=0,n,dig;
     n=123456789;
     
     while(n>0){
         dig=n%10;
         rev=rev*10 + dig;
         n=n/10;
     }
printf("%d",rev);
    return 0;
}