// #include <stdio.h>

// int main(){
//     int m=12312121,sum=0;
//     while (m!=0){
//         if (m%10==1);
//             sum+=1;
//         m=m%10;  
//     }
//     printf("%d",sum);
//     return 0;
// }
#include <stdio.h>

int main(){
    int a[]={1,2,7,4,5,4,3,2,1},asize;
    asize=(sizeof(a)/sizeof(int));
    // printf("%d",fn(a,asize-1,a[0]));
    printf("%d",fn(a,asize));
    return 0;
}
int fn(int*arr,int size){
    if (size==1){
        return *arr;
    }
    int opt=fn(arr,size-1);
    return opt>*(arr+size-1)?opt:*(arr+size-1);
}
// int fn(int*arr,int size,int max){
//     if (*arr>max){
//         max=*arr;
//     }
//     if (size==0){
//         return max;
//     }
//     return fn(arr+1,size-1,max);
// }
