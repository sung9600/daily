    #include<cstdio>
    #include<iostream>
    #include<vector>
    #include<algorithm>

    int main(){
        int n;
        scanf("%d",&n);
        int* arr[n];
        long long* visit[n];
        for(int i=0;i<n;i++){
            arr[i]=(int*)malloc(sizeof(int)*n);
            visit[i]=(long long *)malloc(sizeof(long long)*n);
            for(int j=0;j<n;j++){
                visit[i][j]=0;
            }
        }
        visit[0][0]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==0)continue;
                if(arr[i][j]+i<n)visit[arr[i][j]+i][j]+=visit[i][j];
                if(arr[i][j]+j<n)visit[i][arr[i][j]+j]+=visit[i][j];
            }
        }
        printf("%ld\n",visit[n-1][n-1]);
    }