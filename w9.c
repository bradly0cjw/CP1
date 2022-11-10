#include <stdio.h>
 int main(){
    int m=1234567,m2=m,n=0,o=1,p=0;
    while (m!=0){
        if (((m%10)%2)==0)
            n=1;
        else
            o=0*((m%10)%2);
        m=m/10;    
        
    }
    for (int i=2;i<m;i++){
        p=m2%i;
            if (p!=0)
                break;
    }
    return 0;
 }