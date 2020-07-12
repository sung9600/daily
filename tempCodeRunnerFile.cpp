#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int execute(int n, vector<int>arr){
    int size=arr.size();
    int result=arr[n];
    int count=0;
    for(int i=n;i<size;i++){
        if(arr[i]>result){
            result=arr[i];
            count++;
        }

    }
    return count;
}
int main(){
    vector<int>arr;
    vector<int>result;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    //for(int i=0;i<n;i++){
    //    result[i]=execute(n,arr);
    //}
    return 0;
}