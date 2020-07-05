#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    vector<int> array;///여기에 각 idx별 순서 정렬 0부터
    string word;//원본
    getline(cin,word);
    vector<char*> resultarr;
    int count=0;
    char compare[word.size()]="";
    for(int i=1;i<word.size()-1;i++){
        for(int j=i+1;j<word.size();j++){
            string newstring;
            for(int k=0;k<i;k++){
                newstring[k]=word[i-k-1];
            }
            for(int k=i;k<j;k++){
                newstring[k]=word[j-k-1+i];
            }
            for(int k=j;k<word.size();k++){
                newstring[k]=word[word.size()-k-1+j];
            }
            char* newarr;
            newarr=new char[word.size()];
            for(int idx=0;idx<word.size();idx++){
                newarr[idx]=newstring[idx];
            }
            //resultarr.push_back(newarr);
            if(i==1&&j==2){
                strcpy(compare,newarr);
            }
            else{
                if(strcmp(compare,newarr)>0){
                    strcpy(compare,newarr);
                }
            }
        }
    }
    for(int i=0;i<word.size();i++){
        printf("%c",compare[i]);
    }
    /*for(int i=0;i<resultarr.size();i++){
       cout<<resultarr[i]<<endl;
    }
    cout<<endl;
    char result[word.size()];
    strcpy(result,resultarr[0]);
    //cout<<result<<endl;
    for(int i=0;i<resultarr.size();i++){
        if(strcmp(result,resultarr[i])>0){
            strcpy(result,resultarr[i]);
            }
        //cout<<result<<endl;
    }
    //cout<<endl;
    cout<<result;*/
    return 0;
}