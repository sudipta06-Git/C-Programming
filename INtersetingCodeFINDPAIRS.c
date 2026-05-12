#include<stdio.h>
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter array element %d:", i);
        scanf("%d", &arr[i]);
    }
    int totalpairs=0;
    int x;
    printf("\nEnter for pairs:");
    scanf("%d",&x);
    for(int i=0; i<=n ;i++){
        for(int j=i+1; j<=n ;j++){
            if(arr[i]+arr[j]==x){
                totalpairs++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }  
    printf("%d", totalpairs);
    return 0;   
}