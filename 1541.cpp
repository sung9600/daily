#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<stack>
#include<cstring>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin>>str;
    int len=str.length();
    int result=0;
    string s;
    bool plus=true;
    for(int i=0;i<len;i++){
        if(str[i]=='+'||str[i]=='-'||str[i]=='\0'){
            if(plus){
                result+=stoi(s);
            }
            else{
                result-=stoi(s);
            }
            if(str[i]=='-'){
                plus=false;
            }
            s="";
            continue;
        }
        s+=str[i];
    }
    return 0;
}