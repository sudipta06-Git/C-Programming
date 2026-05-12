#include <stdio.h>
int main(){
    int arr1[100], fr1[6];
    int n, i, j, ctr;
    printf("elements to be stored in the array :");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++){
        printf("elements :");
        scanf("%d", &arr1[i]);
        fr1[i] = -1; 
    }
    // Count the frequency of each element in the array
    for (i = 0; i < n; i++){
        ctr = 1; // Initialize counter for each element
        for (j = i + 1; j < n; j++){
            if (arr1[i] == arr1[j]){
            ctr++;     // Increment counter for matching elements
             fr1[j] = 0; // Mark the duplicate element's frequency as 0
            }
        }
        // If frequency array value is not marked as 0, set it to the counter
        if (fr1[i] != 0){
            fr1[i] = ctr;
        }
    }
     // Print the frequency of each element in the array
    printf("\nThe frequency of all elements of the array : \n");
    for (i = 0; i < n; i++){
        if (fr1[i] != 0){
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
	}
	return 0;
}
