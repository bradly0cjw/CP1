// #include <stdio.h>
// int main(){
//     int n;
//     while (1==1){
//         scanf("%d",&n);
//         printf("%c\n",binary(n));
            
//         }
//     return 0;
//     }

// char* binary(int m){
    
//     if (m&1==1){
//         return binary(m>>1)+"1";
//     }
//     return binary(m>>1)+"0";
//     if (m==0){
//         return 0;
//     }
    
// }
#include <stdio.h>

void printBinary(int n) {
    if (n == 0) {
        return;
    }

    printf("%d", n % 2);
    printBinary(n / 2);
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printBinary(n);
    printf("\n");
    return 0;
}


// // #include <stdio.h>
// // #include <string.h>

// // #define MAX_DIGITS 32

// // void printBinary(int n, char binary[MAX_DIGITS]) {
// //     static int i = 0;
// //     if (n == 0) {
// //         return;
// //     }

// //     printBinary(n / 2, binary);
// //     binary[i++] = n % 2 + '0';
// // }

// // int main() {
// //     int n;
// //     char binary[MAX_DIGITS];
// //     memset(binary, '0', MAX_DIGITS);
// //     printf("Enter an integer: ");
// //     scanf("%d", &n);
// //     printBinary(n, binary);
// //     printf("Binary representation of %d is: %s\n", n, binary);
// //     return 0;
// // }