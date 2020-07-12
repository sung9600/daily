#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int n;
    scanf("%d\n",&n);
    printf("%d",n);
    vector<int>arr(10001);
    int dp[1001];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        printf("%d",arr[i]);
    }
    /*for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i]=max(dp[i],dp[i-j]+arr[j]);
        }
    }
    printf("%d",dp[n]);*/
    return 0;
}