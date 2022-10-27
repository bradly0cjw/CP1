#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d is %s \n",a,a&1?"odd":"even");
    return 0;
}