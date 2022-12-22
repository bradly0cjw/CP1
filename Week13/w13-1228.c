//Program 1-a
#include <stdio.h>

int main(){
    int a=123456789;
    printf("%d",ld(a));
    return 0;
}
int ld(int num){
    if (num<10){
        return (num%2);
    }
    return ld(num/10);
}
//Program 1-b
#include <stdio.h>

int main(){
    int a=1240;
    printf("%d",oc(a));
    return 0;
}

int oc(int num){
    if(num<10){
        if (num==1){
            return 1;
        }
        return 0;
    }
    return oc(num%10)+oc(num/10);
}
//Program 1-c
#include <stdio.h>

int main(){
    int a=1240;
    printf("%d",dc(a));
    return 0;
}

int dc(int num){
    if(num<10){
        return num;
    }
    return dc(num%10)+dc(num/10);
}

//Program 2-a
#include <stdio.h>

int main(){
    int m=12,n=3;
    printf("%d",mult(m,n));
    return 0;
}
int mult(int m,int n){
    if (n==0){
        return 0;
    }
    return mult(m,n-1)+m;
}
//Program 2-b
#include <stdio.h>

int main(){
    int m=16,n=3;
    printf("%d",rema(m,n));
    return 0;
}
int rema(int m,int n){
    if(n==0){
        printf("can not divide by zero\n");
        return 0;
    }
    if (m<n){
        return 0;
    }
    return rema(m-n,n)+1;
}
//Program 2-c
#include <stdio.h>

int main(){
    int m=15,n=3;
    printf("%d",quot(m,n));
    return 0;
}
int quot(int m,int n){
    if(n==0){
        printf("can not divide by zero\n");
        return 0;
    }
    if (m<n){
        return m;
    }
    return quot(m-n,n);
}