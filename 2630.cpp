#include<iostream>
#include<vector>
using namespace std;
int blue=0,white=0;
int arr[128][128];
void execute(int startx, int starty, int endx, int endy){
    int target=arr[startx][starty];
    for(int i=startx;i<endx;i++){
        for(int j=starty;j<endy;j++){
            if(target==0&&arr[i][j]){
                target=2;
            }
            if(target==1&&arr[i][j]==0){
                target=2;
            }
            if(target==2){
                execute(startx,starty,(endx+startx)/2,(endy+starty)/2);
                execute((endx+startx)/2,starty,endx,(endy+starty)/2);
                execute(startx,(starty+endy)/2,(endx+startx)/2,endy);
                execute((endx+startx)/2,(starty+endy)/2,endx,endy);
                return;
            }
        }
    }
    if(target==0)white++;
    else blue++;
    return;
}
int main(){    
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    execute(0,0,n,n);

    cout<<white<<'\n'<<blue;
}