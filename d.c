#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char a[100];
    char b[100];
    printf("enter string 1 and 2 \n");
    scanf("%s",&a);
    scanf("%s",&b);
    printf("%s %s",a,b);
    int n=strlen(a);
    int m=strlen(b);
    if(n<m){
        n=m;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            count++;
        }
    }
    printf("\n number of edits %d\n",count);
    return 0;
}

