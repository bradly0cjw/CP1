//Program 1
#include <stdio.h>
int main(){
    int a[10]={ 0,1,5,0,-3,-2,4,7,0},i=0,sum=0;
    while (a[i]!=0){
        sum=sum+a[i];
        i=i+1;
    }
    printf("%d",sum);
    return 0;
}
//Program 2
#include <stdio.h>
int main(){
    int a[10]={ 0,'1',0x30,0,65,13,50,5},max=a[0],max2=a[1];
    if (a[0]<a[1]){
        max=a[1];
        max2=a[0];
    }
    for(int i=1;i<10;i++){
        if(a[i]>max){
            max2=max;
            max=a[i];
        }
        else if (a[i]>max2){
            max2=a[i];
        }
        
    }
    printf("%d",max2);
    return 0;
}
//Program 3
#include <stdio.h>
int main(){
    int a[10]={ 0,'1',0x30,0,65,13,50,5},count=0;
    for (int i=0;i<10;i++){
        if (a[i]>='0'&&a[i]<='9'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
//Program 4
#include <stdio.h>
int abssc(a){
    if(a<0){
        a=a*-1;
    }
    return a;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",abssc(a));
    return 0;
}
//Program5
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
    int a,b;
    scanf("%d",&a);
    b=PN(a);
    if (b==0){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}