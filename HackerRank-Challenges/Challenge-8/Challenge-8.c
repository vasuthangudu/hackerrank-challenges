#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    int small=a;
    if(b < small){
        small = b;
    }
    if(c < small){
        small = c;
    }
    if(d < small){
        small=d;
    }
    if(e < small){
        small=e;
    }
    printf("%d",small);
    
    return 0;
}
