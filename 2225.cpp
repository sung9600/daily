#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int n,k;
int main(){
    cin>>n>>k;
    int dp[n];
    dp[1]=1;
    dp[2]=n+1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            for(int k=0;k<=n;k++){
                dp[i]=dp[n-j]
            }
        }
    }
}