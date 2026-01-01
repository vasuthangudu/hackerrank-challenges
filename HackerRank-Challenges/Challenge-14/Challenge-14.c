#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,dd,c;
    scanf("%d",&a);
    scanf("%d",&dd);
    c=0;
    while(a!=0){
        b=a%10;
        if(b==dd){
            c++;
           
        }
    a=a/10; 
    }
    
    printf("%d",c);
    return 0;
}
