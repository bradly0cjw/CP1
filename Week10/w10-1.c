#include <stdio.h>
int main(){
    int m =-1,n=-2,mtemp=m,ntemp=n,res;
    if (m<0){
        m=m*-1;
    }
    if (n<0){
        n=n*-1;
    }
    res=mtemp;
    if (m<n){
        res=ntemp;
    }
    printf("%d",res);
    return 0;
}
// Program 2
#include <stdio.h>
int main(){
    int m=6,sum=0,i=1;
    while(i<(m+1)){
        if ((m%i)==0){
            sum=sum+i;
        }
        i=i+1;
    }
    printf("%d",sum);
    return 0;
}
// Program 3
#include <stdio.h>
int main(){
    int m=634567890,min=9;
    if (m==0){
        min=0;
    }
    while (m!=0){
        if (min>(m%10)){
        min=(m%10);
        }
        m=m/10;
    }
    printf("%d",min);
    return 0;
}