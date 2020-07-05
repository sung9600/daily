#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>

int main(){
    int count;
    scanf("%u",&count);
    for(int i=0;i<count;i++){
        unsigned int x,y;
        scanf("%u %u",&x,&y);
        unsigned int diff=y-x;
        switch(diff){
            case 0:{
                printf("0\n");
                break;
            }
            case 1:{
            }
            case 2:{
                printf("1\n");
                break;
            }
            default:{
                int i=0;
                for(;diff>i*i;i++){
                }
                if(diff>i*(i-1)){
                    printf("%d\n",2*i-1);
                }
                else{
                    printf("%d\n",2*(i-1));
                }
            }
        }
    }
    return 0;
}