#include <cstdio>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int check(int k,int l){
    int val;
    for(int i=2;i<k;i++){
        if(k%i==0&&i<l){
            return i;
        }
    }
    return 0;
}


int main(){
    int k,l;
    scanf("%d %d",&k,&l);
    vector<int> array;
    array.push_back(2);
    for(int i=1;i<l;i++){
        for(int j=2;j<=i;j++){
            if(i%j==0)break;
            if(j==i-1)array.push_back(i);
        }
    }

    /*for(int i=0;i<array.size();i++){
        printf("%d ", array[i]);
    }*/

    for(int i=0;i<array.size();i++){
        if(k%array[i]==0){
            printf("BAD %d",array[i]);
            return 0;
        }
    }
    printf("GOOD");
    return 0;
    
}