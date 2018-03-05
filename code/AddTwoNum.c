int getlength(struct ListNode* L){
    int len=0;
    struct ListNode* work=L;
    while(work){
        len++;
        work=work->next;
    }
    return len;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* L=NULL;        //指向长度更长的链表
    struct ListNode* S=NULL;
    struct ListNode* L_ans=NULL;
    struct ListNode* tmp=NULL;      //防止求和之后长度变长
    if(getlength(l1)>getlength(l2)){
        L=l1;
        S=l2;
        L_ans=l1;
    }else{
        L=l2;
        S=l1;
        L_ans=l2;
    }
    while(S){
        L->val+=S->val;
        if(L->val>9){
            if(L->next){
                L->val-=10;
                L->next->val+=1;
            }else{
                L->val-=10;
                tmp=(struct ListNode*)malloc(sizeof(struct ListNode));
                tmp->val=1;
                tmp->next=L->next;
                L->next=tmp;
                return L_ans;
            }
        }
        L=L->next;
        S=S->next;
    }
    if(L){
        while(L->next){
            if(L->val>9){
                L->val-=10;
                L->next->val+=1;
            }
            L=L->next;
        }
        if(L->val>9){
            L->val-=10;
            tmp=(struct ListNode*)malloc(sizeof(struct ListNode));
            tmp->val=1;
            tmp->next=L->next;
            L->next=tmp;
        }
    }
    return L_ans;
}