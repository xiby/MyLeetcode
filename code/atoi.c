int myAtoi(char* str) {
    long ans=0;
    int index=0;
    int lastans=0;
    int overflow=0;         //溢出标志位
    char ch=str[index];
    int flag=0;         //处理数据为负的情况
    int isNum=0;
    while(ch==' '){
        ch=str[++index];
    }
    if(ch=='-'){
        flag=1;
        ch=str[++index];
    }else if(ch=='+'){
        ch=str[++index];
    }
    while(ch!='\0'){
        if(ch<'0'||ch>'9'){
            break;
        }else{
            isNum=1;
            lastans=ans;
            ans=ans*10+(ch-'0');
            if(ans>2147483647){
                if(!flag){
                    return 2147483647;
                }else{
                    return -2147483648;
                }
            }
            ch=str[++index];
        }
    }
    if(flag){
        ans=-ans;
    }
    return ans;
}

int main(){
    char a[100];
    while(scanf("%s",a)){
        printf("%d\n",myAtoi(a));
    }
}