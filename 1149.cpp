#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
int main(){
    cin>>n;
    int cost[n][3];
    int dp[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&cost[i][j]);
            dp[i][j]=cost[i][j];
        }
        //printf("\n");
    }
    dp[0][0]=cost[0][0];
    dp[0][1]=cost[0][1];
    dp[0][2]=cost[0][2];
    for(int i=1;i<n;i++){
        dp[i][0]+=min(dp[i-1][1],dp[i-1][2]);
        dp[i][1]+=min(dp[i-1][0],dp[i-1][2]);
        dp[i][2]+=min(dp[i-1][0],dp[i-1][1]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            //printf("%d ",dp[i][j]);
        }
        //printf("\n");
    }
    printf("%d",min(min(dp[n-1][0],dp[n-1][1]),dp[n-1][2]));
}