#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
void execute(){
    string str;
    getline(cin,str);
    char start='s';
    int length=str.size();
    for(int i=0;i<length;i++){
        char target=str[i];
        switch(start){
            case 's':{
                if(target=='0'){
                    start='a';
                    break;
                }
                else if(target=='1'){
                    start='b';
                    break;
                }
                else {
                    printf("NO\n");
                    return;
                }
            }
            case 'a':{
                if(target=='0'){
                    printf("NO\n");
                    return;
                }
                else if(target=='1'){
                    start='s';
                    break;
                }
                else {
                    printf("NO\n");
                    return;
                }
            }
            case 'b':{
                if(target=='0'){
                    start='c';
                    break;
                }
                else{
                    printf("NO\n");
                    return;
                }
            }
            case 'c':{
                if(target=='0'){
                    start='d';
                    break;
                }
                else{
                    printf("NO\n");
                    return;
                }
            }
            case 'd':{
                if(target=='0'){
                    break;
                }
                else if(target=='1'){
                    start='e';
                    break;
                }
                else{
                    printf("NO\n");
                    return;
                }
            }
            case 'e':{
                if(target=='0'){
                    start='a';
                    break;
                }
                else if(target=='1'){
                    start='f';
                    break;
                }
                else{
                    printf("NO\n");
                    return;
                }
            }
            case 'f':{
                if(target=='0'){
                    if(i+1<length){
                        if(str[i+1]=='1'){
                            start='a';
                            break;
                        }
                        else if(str[i+1]=='0'){
                            start='c';
                            break;
                        }
                        else {
                            printf("NO\n");
                            return;                           
                        }
                    }
                    else{
                        printf("NO\n");
                        return;      
                    }
                }
                else if(target=='1'){
                    break;
                }
                else {
                    printf("NO\n");
                    return;
                }
            }
        }
    }
    if(start=='s'||start=='e'||start=='f'){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}

int main(){
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        execute();
    }
}