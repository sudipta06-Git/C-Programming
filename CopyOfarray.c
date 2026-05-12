#include<stdio.h>
int main(){
    int n;
    printf("Enter array Sizes:");
    scanf("%d",&n);
    int arr[100],brr[100];
    for(int i=0 ;i<=n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<=n ;i++){
        brr[i]=arr[i];
    }
    printf("The Cpoy array;");
     for(int i=0 ;i<=n; i++){
        printf("%d ",arr[i]);
    }
}