#include<iostream>
#include<vector>
using namespace std;

long long execute(int a, int b){
    if(b==0)return 1;
    if(b==1)return a;
    if(b%2)return a*execute(a,b-1);
    else return a*a*execute(a,b/2);
}

int main(){    
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<execute(a,b)%c;

    return 0;
}