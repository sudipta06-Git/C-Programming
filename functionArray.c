#include<stdio.h>
void func(int arr[]){
    int temp= arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
}
int main(){
    int arr[2];
    printf("Enter two Elements:");
    scanf("%d %d", &arr[0],&arr[1]);
    printf("%d %d \n", arr[0],arr[1]);
    func(arr);
    printf("%d %d\n", arr[0],arr[1]);

    return 0;
}