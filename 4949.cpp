#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<stack>
#include<string>

using namespace std;
int main(){
    while(1){
        stack<char>arr;
        string str;
        getline(cin,str);
        int length=str.size();
        if(length==1&&str[0]=='.')break;
        bool check=false;
        for(int i=0;i<length;i++){
            if(str[i]=='['||str[i]=='(')arr.push(str[i]);
            if(str[i]==']'){
                if(arr.size()&&arr.top()=='[')arr.pop();
                else {
                    check=true;
                    break;
                }
            }
            if(str[i]==')'){
                if(arr.size()&&arr.top()=='(')arr.pop();
                else {
                    check=true;
                    break;
                }
            }
        }
        if(arr.size()==0&&!check)printf("yes\n");
        else printf("no\n");
    }
    return 0;
}