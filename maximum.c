#include <stdio.h>
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter array element %d:", i);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min=arr[0];
    for (int i = 0; i <= n-1; i++){
        if (max < arr[i]){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    printf("Maximum Value: %d", max);
    printf("\nMinimum Value: %d", min);
}