#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;
int n,k;
int arr[101];
int dp[1000001];
int main(){
    dp[0]=0;
    scanf("%d %d\n",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        for(int j=arr[i]-i;j<k;j++){
            dp[j]=min(dp[i],dp[j-dp[i]+1]);
        }
    }
    printf("%d",dp[n]);
    return 0;
}