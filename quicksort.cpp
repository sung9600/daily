#include <iostream>
#include <vector>

using namespace std;

void quick_sort(int* data,int start,int end){
    if(start>=end)return;//data 길이 1이하
    int pivot=start;//시작지점 pivot으로 설정
    int i=pivot+1;//pivot보다 작은애들 찾는 idx
    int j=end;//pivot보다 큰애들 찾는 idx
    int temp;//스왑용
    while(i<=j){
        while(i<=end&&data[i]<=data[pivot]){
            i++;
        }
        while(j>start&&data[j]>data[pivot]){
            j--;
        }
        if(i>j){//i랑 j랑 엇갈린경우 j를 새로운 pivot으로
            temp=data[j];
            data[j]=data[pivot];
            data[pivot]=temp;
        }else{
            temp=data[i];
            data[i]=data[j];
            data[j]=temp;
        }
        quick_sort(data,start,j-1);//왼쪽그룹 재귀
        quick_sort(data,j+1,end);//오른쪽그룹 재귀
    }
}
int main(){
    int start=0;
    int arr[8]={49,97,53,5,33,65,62,51};
    quick_sort(arr,0,7);
    for(int i=0;i<8;i++){
        printf("%d ",arr[i] );
    }
}