//Program 1
#include <stdio.h>
int main(){
    int a[10]={3,5,7,9},sum=0;
    for(int i=0;i<10;i++){
        if(a[i]%2==1)
            sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}

//Program 2
#include <stdio.h>
int main(){
    int a[10]={3,5,7,9},max=a[0];
    for(int i=1;i<10;i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("%d",max);
    return 0;
}

//Program 3
#include <stdio.h>
int main(){
    int a[10]={3,5,7,9},res1=0;
    for(int i=0;i<10;i++){
        for (int m=2;m<a[i];m++){
            if(a[i]%m==0)
                res1=1;
        }
        if (res1==0)
            printf("True");
            return 0;
    }
    printf("False");
    return 0;
}
//Program 4
#include <stdio.h>
int main(){
    int a[10]={3,5,7,9},ans=1,res=0;
    for(int i=2;i<a[0]+1;i++){
        if(a[1]%i==0)
            res=0;
            for (int m=1;m<10;m++){
                if(a[m]%i!=0)
                    res=1;
            }
            if (res==0){
                ans=i;
            }
    }
    printf("%d",ans);
    return 0;
}

//Program 5
#include <stdio.h>
int main(){
    int a[10]={100,150,149,49},tmp1,tmp2;
    for(int i=1;i<10;i++){
        tmp1=(a[i]%100);
        tmp2=a[i]/100;
        if (tmp1>=50){
            tmp2=(tmp2+1)*100;
        }else{
            tmp2=tmp2*100;
            }
        a[i]=tmp2;
    }
    return 0;
}
