#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int count1=0;
int count2=0;
double tt,mm;
int fact(int x){
    count1+=1;
    if(x==1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}
int main(){
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    tt=((double)clock())/CLOCKS_PER_SEC;
    printf("recursive factorial is %d \n",fact(n));
    for(int j=0;j<1000000000;j++);
    mm=((double)clock())/CLOCKS_PER_SEC;
    printf("recursive time %lf\n",(mm-tt));
    printf("recursive count %d\n",count1);
    int ret=1;
    tt=((double)clock())/CLOCKS_PER_SEC;
    for(int j=0;j<1000000000;j++);
    for(int i=1;i<=n;i++){
        count2+=1;
        ret*=i;
    }
    mm=((double)clock())/CLOCKS_PER_SEC;
    printf("iterative time %lf\n",(mm-tt));
    printf("iterative factorial is %d\n",ret);
    printf("iterative count %d\n",count2);
    return 0;
}