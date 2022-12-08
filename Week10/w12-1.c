//Program 1
#include <stdio.h>

int calcsum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int a[10]={1,2,3,4,5};
    printf("%d",calcsum(a,sizeof(a)/sizeof(a[0])));
    return 0;
}
// //Program 4
// #include <stdio.h>
// int PN(a){
//     int res=0;
//     for(int i=2;i<a;i++){
//         if (a%i==0){
//             res=1;
//         }
//     }
//     if(res==0){
//         return 0;
//     }else{
//         return 1;
//     }
// }
// int main(){
//     int a;
//     for(int i=100;i<=1000;i++){
//         if(PN(i)==0){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }
// //Program 5
// #include <stdio.h>
// int PN(a){
//     int res=0;
//     for(int i=2;i<a;i++){
//         if (a%i==0){
//             res=1;
//         }
//     }
//     if(res==0){
//         return 0;
//     }else{
//         return 1;
//     }
// }
// int main(){
//     int a;
//     for(int i=2;i<50;i++){
//         if(PN(i)==0){
//             if(PN(i+6)==0 && (i+6)<50){
//                 printf("(%d,%d)",i,i+6);
//             }
//         }
//     }
//     return 0;
// }