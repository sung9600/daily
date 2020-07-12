#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    
    vector<int>result;
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int res=1;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(arr[i]>arr[j]){
                result[i]=max(result[i],result[j]+1);
            }
        }
        res=max(res,result[i]);
    }
    cout<<res;
    return 0;
}