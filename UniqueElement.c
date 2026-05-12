#include <stdio.h>
int main(){
    int arr[100], n, count = 0;
    printf("Elements to be stored in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nThe unique elements found in the array are: \n");
    for (int i = 0; i < n; i++){
        count = 0;
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}