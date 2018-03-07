#include<stdio.h>

typedef int bool;

#define true 1
#define false 0

bool isPalindrome(int x) {
    
    int num=0;
    int i=0;
    int digital=0;
    if(x<0) return false;
    int tmp=x;
    while(x>0){
        num=num*10+(x%10);
        x=x/10;
    }
    if(tmp==num){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num=0;
    while(scanf("%d",&num)){
        if(isPalindrome(num)){
            printf("true\n");
        }else{
            printf("false\n");
        }
    }
}