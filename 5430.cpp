#include<iostream>
#include<deque>

using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int X=0;X<t;X++){
        string str;
        cin>>str;
        int n;
        //cout<<str<<'\n';
        scanf("%d",&n);
        //cout<<"n:"<<n<<'\n';
        string arr;
        cin>>arr;
        //cout<<arr<<'\n';
        deque<int>q;
        for(int i=0;i<n;i++){
            q.push_back(arr[2*i+1]-48);
            //printf("%d ",q[i]);
        }
        int qsize=q.size();
        bool error=false;
        for(int i=0;i<str.size();i++){
            switch(str[i]){
                case 'R':{
                    deque<int>q2;
                    for(int j=0;j<qsize;j++){
                        q2.push_front(q.front());
                        q.pop_front();
                    }
                    q=q2;
                    break;
                }
                case 'D':{
                    if(q.empty()){
                        error=true;
                        printf("error\n");
                    }
                    else{
                        q.pop_front();
                    }
                    break;
                }
            }
        }
        qsize=q.size();
        if(!error){
            cout<<'[';
            for(int i=0;i<qsize-1;i++){
                cout<<q.front()<<',';
                q.pop_front();
            }
            cout<<q.front()<<']';
            q.pop_front();
            cout<<'\n';
        }
    }
    return 0;
}