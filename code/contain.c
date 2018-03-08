#include<stdio.h>

int min(int a,int b){
    return a<b?a:b;
}

int maxArea(int* height, int heightSize) {
    int left=0;
    int right=heightSize-1;
    int max=0;
    int contain=0;
    while(left<right){
        contain=min(height[left],height[right])*(right-left);
        if(contain>max){
            max=contain;
        }
        if(height[left]>height[right]){
            right--;
        }else{
            left++;
        }
    }
    return max;
}

int main(){
    int height[1000]={0};
    int heightSize=0;
    int i=0;
    while(scanf("%d",&heightSize)){
        for(i=0;i<heightSize;++i){
            scanf("%d",&height[i]);
        }
        printf("%d\n",maxArea(height,heightSize));
    }
}