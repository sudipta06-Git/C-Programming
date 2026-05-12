#include<stdio.h>
int main(){
     int n;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter array element %d:", i);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<=n-1; i++){
        if(i%2!=0){
            arr[i]*=2;
        }
        else arr[i]+=10;
    }
    for(int i=0 ;i<=n-1; i++){
        printf("%d ", arr[i]);
    }
}