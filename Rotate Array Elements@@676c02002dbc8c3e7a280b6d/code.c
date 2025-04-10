#include<stdio.h>
int main(){
    int i,j,a,b;
    scanf("%d",&i);
    int arr[2*i];
    for(j=0; j<i; j++){
        scanf("%d",&arr[j]);
    }
    for(j=0; j<i; j++){
        arr[i+j]=arr[j];
    }
    scanf("%d",&a);
    for(j=0; j<i; j++){   
    b=a;
        printf("%d\n",arr[i-b]);
    b=b-1;
    }
}