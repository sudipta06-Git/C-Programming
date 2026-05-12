#include<stdio.h>
int main(){
    int  arr[5],sum=0;
    float avg;
    for(int i=0;i<=4;i++){
        printf("Enter array element:");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/5.0;
    printf("Sum of array elements is:%d\n",sum);
    printf("Average of array elements is:%.2f",avg);    
    return 0;

}
