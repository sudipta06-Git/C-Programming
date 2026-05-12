#include<stdio.h>
int main(){
    int num[26],swap;
    num[0]=100;
    num[25]=200;
    swap=num[25];
    num[25]=num[0];
    num[0]=swap;
    printf("%d\n%d",num[0],num[25]);
}