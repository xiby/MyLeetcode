#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double myPow(double x, int n) {
    if(n==0){
        return 1.0;
    }else if(n==1){
        return x;
    }else if(n==-1){
        return 1/x;
    }else{
        return myPow(x,n/2)*myPow(x,n-n/2);
    }
    
}

double newPow(double x,long n){
    double ans=1,base=x;
    while(n>0){
        if(n&1!=0){
            ans*=base;
        }
        base*=base;
        n>>=1;
    }
    return ans;
}

int main(){
    double x=0;
    int n=0;
    long num=0;
    double ans=0;
    while(scanf("%lf %d",&x,&n)!=EOF){
        ans=1;
        num=n;
        if(n<0){
            ans=newPow(1.0/x,-num);
        }else if(n==0){
            ans=1;
        }else{
            ans=newPow(x,num);
        }
        printf("%lf\n",ans);
    }
}