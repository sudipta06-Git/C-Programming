#include<stdio.h>
int main(){
    int marks[10];
    for(int i=0 ; i<10 ;i++){
        printf("Enter array element %d:",i);
        scanf("%d", &marks[i]);
    }
    for(int i=0 ;i<=9 ;i++){
        if(marks[i]<30){
            printf("%d ", i);
        }
    }
    printf("\n");
    for(int i=0 ;i<=9 ;i++){
        if(marks[i]<30){
            printf("%d ", marks[i]);
        }
    }
    return 0;
}