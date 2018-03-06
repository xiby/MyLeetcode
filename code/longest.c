#include<stdio.h>
#include<stdlib.h>

int getLength(char* s){
    int ans=0;
    int index=0;
    char ch=s[0];
    while(ch!='\0'){
        ans++;
        ch=s[++index];
    }
    return ans;
}
int lengthOfLongestSubstring(char* s){
    int ans=0;
    int i=0,j=0;
    int flag[1000]={0};
    int len=getLength(s);
    while(i<len&&j<len){
        if(!flag[(int)s[j]]){
            flag[(int)s[j]]=1;
            j++;
            ans=ans>(j-i)?ans:(j-i);
        }else{
            flag[(int)s[i]]=0;
            i++;
        }
    }
    return ans;
}

int main(){
    char str[100];
    while(scanf("%s",str)){
        printf("%d\n",lengthOfLongestSubstring(str));
    }
    return 0;

}