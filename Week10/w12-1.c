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
//Program 2
#include <stdio.h>

int ckPN(int arr[],int size){
    int stats=0;
    for(int i=0;i<size;i++){
        if (PN(arr[i])==1){
            stats=1;
        }
    }
    return stats;
}
int PN(a){
    int res=0;
    for(int i=2;i<a;i++){
        if (a%i==0){
            res=1;
        }
    }
    if(res==0){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int a[10]={2,3,5,7},b;
    b=ckPN(a,sizeof(a)/sizeof(a[0]));
    if (b==0){
        printf("True");
    }else{
        printf("False");
    }
    
    return 0;
}
//Program 3
#include <stdio.h>

int check(int arr[],int size){
    int stats=0,calc=arr[0];
    for(int i=1;i<size;i++){
        if(calc>=arr[i]){
            calc=arr[i];
        }else{
            stats=1;
            return stats;
        }
    }
    return stats;
}
int main(){
    int a[10]={5,4,3,2,1},b;
    b=check(a,sizeof(a)/sizeof(a[0]));
    if (b==0){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}
//Program 4
#include <stdio.h>
int PN(a){
    int res=0;
    for(int i=2;i<a;i++){
        if (a%i==0){
            res=1;
        }
    }
    if(res==0){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int a;
    for(int i=100;i<=1000;i++){
        if(PN(i)==0){
            printf("%d ",i);
        }
    }
    return 0;
}
//Program 5
#include <stdio.h>
int PN(a){
    int res=0;
    for(int i=2;i<a;i++){
        if (a%i==0){
            res=1;
        }
    }
    if(res==0){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int a;
    for(int i=2;i<50;i++){
        if(PN(i)==0){
            if(PN(i+6)==0 && (i+6)<50){
                printf("(%d,%d)",i,i+6);
            }
        }
    }
    return 0;
}