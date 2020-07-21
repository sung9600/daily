#include <iostream>
#include <cstring>
#include <stack>

using namespace std;
int main(){
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        stack<char> left;
        stack<char>right;
        string str;
        getline(cin,str);
        for(int i=0;i<str.size();i++){
            if(str[i]=='<'){
                if(!left.empty()){
                    right.push(left.top());
                    left.pop();
                }
            }
            else if(str[i]=='>'){
                if(!right.empty()){
                    left.push(right.top());
                    right.pop();
                }
            }
            else if(str[i]=='-'){
                if(!left.empty())left.pop();
            }
            else{
                left.push(str[i]);
            }
        }
        while(!left.empty()){
            right.push(left.top());
            left.pop();
        }
        while(!right.empty()){
            printf("%c",right.top());
            right.pop();
        }
        printf("\n");
    }
}