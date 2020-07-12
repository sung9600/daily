#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int findnext(int idx,vector<bool>d){
    int length=d.size();
    int result;
    for(int i=idx;i>0;i--){
        if(d[i]==0){
            result=i;
            break;
        }
    }
    return result;
}
void getidx(vector<string> v){
    vector<int> a(10);//자리수 합
    vector<int> b(10);//순서
    vector<int> c(10);//어떤거 할당할건지
    vector<bool> d(10,0);//할당되었는지
    for(int i=0;i<v.size();i++){
        string str=v[i];
        int len=str.length();
        for(int j=0;j<len;j++){
            a[str[j]-'A']+=pow(10,len-j-1);
        }
    }
    for(int i=0;i<10;i++){
        //printf("%d: %d ",i,a[i]);
        for(int j=0;j<10;j++){
            if(a[i]==0)break;
            if(a[i]>=a[j])b[i]++;
        }
        //printf("%d\n ",b[i]);
    }
    int result=0;
    for(int i=0;i<10;i++){
        int idx=findnext(b[i]-1,d);
        d[idx]=1;
        result+=a[i]*idx;
    }
    printf("%d",result);
}

int main(){
    vector<string>v;
    int n;
    scanf("%d\n",&n);
    while(n--){
        string str;
        getline(cin,str);
        v.push_back(str);
    }   
    getidx(v);
    return 0;
}