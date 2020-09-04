#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<utility>
#include<algorithm>
using namespace std;
pair<int,int>arr[101];
int n,k;
int dp[101][100001];

int main(){
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d %d",&arr[i].first,&arr[i].second);
    }
    for(int i=0;i<n;i++){
        dp[i][0]=0;
        
    }
    for(int i=0;i<k;i++){
        dp[0][i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(arr[i].first<=j)dp[i][j]=max(dp[i-1][j],dp[i-1][j-arr[i].first]+arr[i].second);
            else {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    printf("%d",dp[n][k]);
    return 0;
}