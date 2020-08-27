#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int dp[100001]={0,};
int arr[100001];


int main(){
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        dp[i]=arr[i];
    }
    int Max=arr[0];
    for(int i=1;i<n;i++){
        dp[i]=max(dp[i],dp[i-1]+arr[i]);
        if(dp[i]>Max){
            Max=dp[i];
        }
    }
    printf("%d",Max);
    return 0;
}