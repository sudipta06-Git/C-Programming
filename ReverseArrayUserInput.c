#include<stdio.h>
int main(){
    int n;
    printf("Enter Array size:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0 ;i<=n-1 ;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1; i>=0;i--){
        printf("%d ", arr[i]);
    }

}