#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int zsearch(int n, int r, int c){
    //printf("%d %d %d\n",n,r,c);
    int n2=pow(2,n);
    if(n==1)return 0;
    if(n<=2){
        if(r==0){
            if(c==0){
                return 0;
            }
            else return 2;
        }
        else{
            if(c==0){
                return 1;
            }
            else return 3;
        }
    }
    if(r<n/2){
        if(c<n/2){
            //printf("a:1\n");
            return zsearch(n/2,r,c);
        }
        else{
            //printf("a:2\n");
            return n*n/4+zsearch(n/2,r,c-n/2);
        }
    }
    else{
        if(c<n/2){
            //printf("a:3\n");
            return n*n/2+zsearch(n/2,r-n/2,c);
        }
        else{
            //printf("a:4\n");
            return n*n*3/4+zsearch(n/2,r-n/2,c-n/2);
        }
    }
}

int main(){

    int n,r,c;
    scanf("%d %d %d",&n,&r,&c);
    int count=zsearch(pow(2,n),r,c);
    printf("%d",count);
    return 0;
}