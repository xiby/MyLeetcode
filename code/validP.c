#include<stdio.h>
#include<string.h>

typedef struct stack{
    char data[1000001];
    int top;        //指向栈顶的指针
    int size;
}stack;

int init(stack* s){
    memset(s->data,0,sizeof(s->data));
    s->top=-1;
    s->size=0;
    return 0;
}
char pop(stack *s){
    s->size--;
    return s->data[s->top--];
    // return 0;
}

int push(stack *s,char ch){
    s->data[++s->top]=ch;
    s->size++;
    return 0;
}

char getTop(stack* s){
    return s->data[s->top];
}

int empty(stack* s){
    if(s->size==0){
        return 1;
    }else{
        return 0;
    }
}

bool isValid(char* s) {
    int valid=1;
    char ch;
    char tmp;
    int index=0;
    ch=s[index];
    stack* S=(stack*)malloc(sizeof(stack));
    init(S);
    while(ch!='\0'){
        if(ch=='('||ch=='['||ch=='{'){
            push(S,ch);
        }else if(ch==')'){
            if(empty(S)||getTop(S)!='('){
                valid=0;
                break;
            }else{
                pop(S);
            }
        }else if(ch==']'){
            if(empty(S)||getTop(S)!='['){
                valid=0;
                break;
            }else{
                pop(S);
            }
        }else if(ch=='}'){
            if(empty(S)||getTop(S)!='{'){
                valid=0;
                break;
            }else{
                pop(S);
            }
        }
        ch=s[++index];
    }
    if(!valid||!empty(S)){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    char str[10000];
    while(scanf("%s",str)!=EOF){
        if(isValid(str)){
            printf("true\n");
        }else{
            printf("false");
        }
    }
    return 0;
}