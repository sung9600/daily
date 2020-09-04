#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<utility>
#include<algorithm>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int count=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<=k)count++;
    }
    int result=0;
    while(k>0){
        count--;
        result+=k/arr[count];
        k-=(k/arr[count])*arr[count];
    }
    printf("%d",result);
    return 0;
}