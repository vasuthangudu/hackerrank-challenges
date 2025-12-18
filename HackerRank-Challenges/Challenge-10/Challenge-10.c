#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    scanf("%d",&a);
    
    if((a*a*a)%10 == a){
      printf("true");
    }else{
        printf("false");
    }
     return 0;
}
