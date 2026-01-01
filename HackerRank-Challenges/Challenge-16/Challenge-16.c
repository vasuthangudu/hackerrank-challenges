#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    int a,sum=0;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        sum =sum+i;
    }
    if(sum%2 == 0){
        printf("evenish");
    }else{
        printf("oddish");
    }
    return 0;
}
