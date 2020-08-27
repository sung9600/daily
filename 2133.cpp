#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int dp[31];
int main(){
    cin>>n;
    if(n%2)printf("0");
    else{
        dp[0]=1;
        dp[2]=3;
        for(int i=4;i<=n;i+=2){
            dp[i]=dp[i-2]*3;
            for(int j=i-4;j>=0;j-=2){
                dp[i]+=2*dp[j];
            }
        }
        printf("%d",dp[n]);
    }
    return 0;
}