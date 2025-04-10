#include<stdio.h>
int main(){
    int i,j,a,b;
    scanf("%d",&i);
    int arr[i];
    for(j=0; j<i; j++){
        scanf("%d",&arr[j]);
    }
    scanf("%d",&a);
    a=a+1;
    for(j=0; j<i; j++){
    b=j+a;
        print("%d",arr[b]);
    }
}