int max(int a,int b){
    return a>b?a:b;
}

///冒泡排序
void sort(int** pairs,int pairsRowSize){
    int i=0;
    int j=0;
    int tmp=0;
    for(i=0;i<pairsRowSize;++i){
        for(j=i+1;j<pairsRowSize;++j){
            if(pairs[j][0]<pairs[i][0]){
                tmp=pairs[j][0];
                pairs[j][0]=pairs[i][0];
                pairs[i][0]=tmp;
                tmp=pairs[j][1];
                pairs[j][1]=pairs[i][1];
                pairs[i][1]=tmp;
            }
        }
    }
}

int findLongestChain(int** pairs, int pairsRowSize, int pairsColSize) {
    int tmax=1;
    int i=0;
    int j=0;
    int dp[10000];
    memset(dp,0,sizeof(dp));
    sort(pairs,pairsRowSize);
    for(i=0;i<pairsRowSize;++i){
        tmax=1;
        for(j=0;j<i;++j){
            if(pairs[i][0]>pairs[j][1]){
                tmax=max(tmax,dp[j]+1);
            }
        }
        dp[i]=tmax;
    }
    tmax=1;
    for(i=0;i<pairsRowSize;++i){
        tmax=max(tmax,dp[i]);
    }
    return tmax;
    
}