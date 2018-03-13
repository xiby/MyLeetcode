int max(int a,int b){
    return a>b?a:b;
}

int lengthOfLIS(int* nums, int numsSize) {
    int i=0;
    int j=0;
    int dp[10000];
    int tmax=1;
    memset(dp,0,sizeof(dp));
    if(numsSize==0){
        return 0;
    }
    for(i=0;i<numsSize;++i){
        tmax=1;
        for(j=0;j<i;++j){
            if(nums[i]>nums[j]){
                tmax=max(tmax,dp[j]+1);
            }
        }
        dp[i]=tmax;
    }
    tmax=1;
    for(i=0;i<numsSize;++i){
        if(dp[i]>tmax){
            tmax=dp[i];
        }
    }
    return tmax;
}