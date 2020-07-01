#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
void checkperfectnum(int a){
    vector<int> nums;
    string resultstring;
    nums.push_back(1);
    resultstring.push_back('1');
    for(int i=2;i<a;i++){
        if(a%i==0){
            resultstring.push_back(' ');
            resultstring.push_back('+');
            resultstring.push_back(' ');
            resultstring.push_back(i+48);
            nums.push_back(i);
        }
    }

    int comparision=0;
    for(int i=0;i<nums.size();i++){
        comparision+=nums[i];
        //printf("%d ",nums[i]);
    }
    if(comparision==a){
        printf("%d = ",a);
        cout<<resultstring<<endl;
    }
    else{
        printf("%d is NOT perfect.\n",a);
    } 
    return;
}



int main(){
    while(1){
        int a;
        scanf("%d",&a);
        if(a==-1)break;
        else{
            string resultstring;
            checkperfectnum(a);
        }
    }
    return 0;
}