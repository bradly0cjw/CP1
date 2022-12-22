//Program 1-a
#include <stdio.h>

int main(){
    int a=0;
    printf("%d",odd(a));
    return 0;
}
int odd(int num){
    int sum=0   ; 
    do{
        sum+=(num%10%2+1)%2;
        num=num/10;
    }
    while(num>10);
    if (sum>0){
        return 1;
    }
    return 0;
}
// // // int odd(int num){
// // //     int sum=0  ; 
// // //     while(num!=0){
// // //         if((num%10)%2==0){
// // //             return 1;
// // //         }
// // //         num=num/10;
// // //     }
// // //     return 0;
// // // }

//Program 1-b
#include <stdio.h>

int main(){
    int a=123456789;
    printf("%d",dig(a));
    return 0;
}
 //   // if(a==0){
 //   //     res=1;
 //   // }
 //   // while(a!=0){
 //   //     res+=1;
 //   //     a=a/10;
 //   // }
int dig(int num){
    int res=0;
    while(num>=10){
        res+=1;
        num=num/10;
    }
    if(num<10){
        res=1;
    }
    return res;
}

//Program 1-c
#include <stdio.h>

int main(){
    int a=123456789;
    printf("%d",ld(a));
    return 0;
}
int ld(int num){
    while(num>=10){
        num=num/10;
    }
    if(num>5){
        return 1;
    }
    return 0;
}

//Program 2-a
#include <stdio.h>

int main(){
    int a=1240;
    printf("%d",res(odd(a)));
    return 0;
}
// // int odd(int num){
// //     if(num!=0){
// //         if((num%10)%2==0){
// //             return 1;
// //         }  
// //         return odd(num/10);
// //     }
// //     return 0;
// // }
int odd(int num){
    if(num<10){
        return (num%2+1)%2;
    }
    return odd(num%10)+odd(num/10);
}
int res(int num){
    if (num>0){
        return 1;
    }
    return 0;
}

//Program 2-b
#include <stdio.h>

int main(){
    int a=123456789;
    printf("%d",dig(a));
    return 0;
}
int dig(int num){
    if (num<10){
        return 1; 
    }
    return dig(num/10)+1;   
}

//Program 2-c
#include <stdio.h>

int main(){
    int a=123456789;
    printf("%d",ld(a));
    return 0;
}
int ld(int num){
    if (num<10){
        if(num>5){
            return 1;
        }
        return 0;
    }
    return ld(num);
}


