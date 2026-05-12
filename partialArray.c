#include<stdio.h>
int main(){
    int arr[20];
    int i, fact=1;
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("%d",fact);
}