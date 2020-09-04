#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<utility>
#include<algorithm>

using namespace std;
int main(){
    vector<pair<int,int>>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        arr.push_back(make_pair(a,b));
    }
    sort(arr.begin(),arr.end());
    vector<pair<int,int>>::iterator iter;
    int dp[n];
    dp[0]=1;
    for(int i=1;i<n;i++){
        int a=0;
        for(int j=0;j<i;j++){
            if(arr[i].second>arr[j].second)a=max(a,dp[j]);
        }
        dp[i]=a+1;
    }
    int count=0;
    for(int i=0;i<n;i++){
        count=max(count,dp[i]);
    }
    printf("%d",n-count);
}