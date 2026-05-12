#include <stdio.h>
int main(){
    int arr[5] = {1, 1, 2, 1, 1};
     for (int i = 0; i <= 4; i++){
         printf("%p\n", &arr[i]);
     }
    // printf("%p\n",&arr[]);
    return 0;
}