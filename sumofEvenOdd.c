#include<stdio.h>
int main(){
    //int arr[7]={1,2,3,4,5,6,7};
    int n;
    printf("Enter array size:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter array element %d:", i);
        scanf("%d", &arr[i]);
    }
    int sumodd=0;
    int sumEven=0;
    for(int i=0; i<=6 ;i++){
        if(i%2!=0){
            sumEven +=arr[i];
        }else
        sumodd+=arr[i];
    }
    // int res=sumodd-sumEven;
    // printf("%d",res);

    printf("Even sum: %d\n",sumEven);
      printf("Even sum: %d\n",sumodd);
    return 0;   
}