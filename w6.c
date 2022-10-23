#include <stdio.h>
int main(){
    float f1=1.0e10;
    float f2=f1;

    int m=10000000;
    for(int i=0;i<m;++i)
        f1=f1+1;
    f2=f2+m;
    printf("%f\n%f",f1,f2);
    return 0;
}