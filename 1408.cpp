#include <cstdio>
#include <string>
#include <iostream>

using namespace std;
int main()
{
    string now,starttime;
    getline(cin,now);
    getline(cin,starttime);

    int nowh,nowm,nows,starth,startm,starts;
    nowh=(now[0]-48)*10+(now[1]-48);
    nowm=(now[3]-48)*10+(now[4]-48);
    nows=(now[6]-48)*10+(now[7]-48);
    starth=(starttime[0]-48)*10+(starttime[1]-48);
    startm=(starttime[3]-48)*10+(starttime[4]-48);
    starts=(starttime[6]-48)*10+(starttime[7]-48);

    int h,m,s;
    h=starth-nowh;
    m=startm-nowm;
    s=starts-nows;

    if(h>0){
        if(m>=0){
            if(s>=0){
                printf("%02d:%02d:%02d",24-h,m,s);
            }
            else{
                if(m>=1)printf("%02d:%02d:%02d",h,m-1,60+s);
                else {
                    if(h>=1)printf("%02d:%02d:%02d",h-1,m+59,60+s);
                    else printf("%02d:%02d:%02d",h-1,m+59,60+s);
            }
            }
        }
        else{
            if(s>0){
                printf("%02d:%02d:%02d",h-1,m+60,s);
            }
            else{
                if(m>=1)printf("%02d:%02d:%02d",h,m-1,60+s);
                else printf("%02d:%02d:%02d",h-1,m+59,60+s);
            }

        }
    }
    else{
        if(m>0){
            if(s>0){
                printf("%02d:%02d:%02d",h,m,s);
            }
            else{
                printf("%02d:%02d:%02d",h,m-1,60+s);
            }
        }
        else{
            if(s>0){
                printf("%02d:%02d:%02d",h-1,m+60,s);
            }
            else{
                printf("%02d:%02d:%02d",h-1,m+59,s+60);
            }

        }
    }
    return 0;
}