#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<stack>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k;
    cin>>k;
    stack<int> v;
    for(int i=0;i<k;i++){
        int a;
        cin>>a;
        if(a)v.push(a);
        else v.pop();
    }
    int result=0;
    while(!v.empty()){
        int a=v.top();
        //printf("%d\n",a);
        result+=a;
        v.pop();
    }
    printf("%d\n",result);
    return 0;
}