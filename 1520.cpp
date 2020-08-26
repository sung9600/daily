#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int xmove[4]={-1,0,0,1};
int ymove[4]={0,-1,1,0};
int row, col;
int arr[500][500];
int count[500][500];
int execute(int i,int j){
    if(i==row-1&&j==col-1)return 1;
    if(count[i][j]==-1){
        count[i][j]=0;
        for(int k=0;k<4;k++){
            int newrow=i+xmove[k];
            int newcol=j+ymove[k];
            if(newrow>=0&&newrow<row&&newcol>=0&&newcol<col){
                if(arr[newrow][newcol]<arr[i][j])count[i][j]+=execute(newrow,newcol);
            }
        }
    }
    return count[i][j];
}
int main(){
    cin>> row>>col;
    for(int i=0;i<500;i++){
        for(int j=0;j<500;j++){
            count[i][j]=-1;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<execute(0,0)<<endl;
    return 0;
}