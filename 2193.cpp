#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
long long arr[91];
long long execute(int n){
    if(n==0||n==1||n==2)return arr[n];
    else {
        for(int i=3;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
    }
    return arr[n];
}
int main(){
    int n;
    cin>>n;
    arr[0]=0;
    arr[1]=1;
    arr[2]=1;
    printf("%lld",execute(n));
}