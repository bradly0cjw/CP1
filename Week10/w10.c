// Program 1
#include <stdio.h>
int main(){
    int m =-1,n=-2,res=m;
    if (m<n){
        res=n;
    }
    if (res<0){
        res=res*-1;
    }
    printf("%d",res);
    return 0;
}

// Program 2
#include <stdio.h>
int main(){
    int m=6,sum=0;
    for(int i=1;i<(m+1);i++){
        if ((m%i)==0){
            sum=sum+i;
        }
    } 
    printf("%d",sum);
    return 0;
}

// Program 3
#include <stdio.h>
int main(){
    int m=634567890,max=0;
    while (m!=0){
        if (max<(m%10)){
        max=(m%10);
        }
        m=m/10;
    }
    printf("%d",max);
    return 0;
}