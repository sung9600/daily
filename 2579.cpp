#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
int arr[301];
int dp[1000001];
int main(){
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        scanf("%d\n",&arr[i]);
        dp[i]=arr[i];
    }
    int score=0;
    dp[0]=0;
    dp[1]=arr[1];
    dp[2]=arr[1]+arr[2];
    for(int i=3;i<=n;i++){
        dp[i]=max(dp[i-3]+arr[i-1]+arr[i],dp[i-2]+arr[i]);
    }
    printf("%d",arr[n]);
    return 0;
}