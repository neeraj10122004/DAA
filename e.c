#include<stdio.h>
#include<stdlib.h>
int count=0;
int gcd(int x,int y){
    count++;
    if (y%x==0) {
        return x;
    }
    else{
        return gcd((y%x),x);
    }
}
int main(){
    printf("count : %d GCD : %d",count,gcd(100,210));
    return 0;
}