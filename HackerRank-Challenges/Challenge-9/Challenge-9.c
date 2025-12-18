#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    char a[100],b[100];
    int n1,n2;
    scanf("%s",a);
    scanf("%s",b);
    n1=strlen(a);
    n2=strlen(b);
    if(n1 == n2){
        printf("true");
    }else{
        printf("false");
    }
    
    return 0;
}
