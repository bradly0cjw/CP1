#include <stdio.h>
int main(){
    int n, m;
    m = 5;
    n = 3;
    if (m>n)
        m=-1;
    else if (m<n)
        n=-1;
    else
        printf("NMSL");
    printf("%d %d", m, n);   
}


int main2(){
    int m=-1;
    if ((m<0)&&((m%5)==0))
        printf("hit");
    return 0; 
}