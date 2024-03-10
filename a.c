#include<stdio.h>
#include<stdlib.h>
int count=0;

int main(){
    int n;
    printf("size:\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        if(min!=i){
            count+=1;
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("number of swaps : %d",count);
    return 0;
}