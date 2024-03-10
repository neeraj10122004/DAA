#include<stdio.h>
#include<time.h>
#include<stdlib.h>
double tt,mm;
int partition(int a[],int low,int high){
    int pivot=a[low];
    int i=low;
    int j=high;
    while(i<j){
        while(a[i]<pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp=pivot;
    pivot=a[j];
    a[j]=temp;
    return j;
}
void qs(int a[],int low,int high){
    if(low<high){
        int c=partition(a,low,high);
        qs(a,low,c-1);
        qs(a,c+1,high);
    }
}
int main(){
    int n;
    printf("enter the size\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=(rand()%100000000)+1;
    }
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    printf("\n");
    tt=((double)clock())/CLOCKS_PER_SEC;
    qs(a,0,n);
    mm=((double)clock())/CLOCKS_PER_SEC;
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    printf("\n");
    printf("%lf",mm-tt);
    return 0;
}