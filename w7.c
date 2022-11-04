#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d is %s \n",a,a&1?"odd":"even");
    
    return 0;
}
// int main() {
//     int n, m;
//     m = 5;
//     n = 3;
//     (m > n ? m : n) = -1;
//     printf("%d %d", m, n);
// }