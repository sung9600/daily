#include <iostream>
#include <vector>
using namespace std;

vector<char> execute(vector<int>arr,int n){
    vector<char>result;
    int size=arr.size();
    if(arr[0]==n){
        if(){

        }
        else{
            result.resize(0);
            return result;
        }
    }
    for(int i=0;i<arr[0];i++){
        result.push_back('+');
    }
    result.push_back('-');
    for(int i=1;i<arr.size();i++){
        for(int j=0;j<arr[i];j++){
            result.push_back('+');
        }
        result.push_back('-');
    }


    return result;
}

int main(){
    int n;
    scanf("%d",&n);
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr.push_back(a);
    }
    vector<char> result;
    result=execute(arr,n);
    if(result.size()==0)printf("NO");
    else{
        for(int i=0;i<result.size();i++){
            printf("%c\n",result[i]);
        }
    }
    return 0;
}