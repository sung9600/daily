#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>

int main(){
    unsigned int x,y;
    scanf("%u %u",&x,&y);
    unsigned int diff=y-x;
    switch(diff){
        case 0:{
            printf("0");
            break;
        }
        case 1:{
        }
        case 2:{
            printf("1");
            break;
        }
        default:{
            int i=0;
            for(;diff>i*i;i++){
            }
            if(diff>i*(i-1)){
                printf("%d",2*i-1);
            }
            else{
                printf("%d",2*(i-1));
            }
        }
    }
    return 0;
}