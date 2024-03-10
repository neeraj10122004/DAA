#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double tt,mm;
int main(){
    int n;
    printf("enter the size\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    tt=((double)clock())/CLOCKS_PER_SEC;
    for(int i=1;i<n;i++){
        int min=a[i];
        int l=i-1;
        while(l>=0 && a[l]>min){
            a[l+1]=a[l];
            l--;
        }
        a[l+1]=min;
    }

    mm=((double)clock())/CLOCKS_PER_SEC;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf(" %lf\n",mm-tt);
    return 0;
}