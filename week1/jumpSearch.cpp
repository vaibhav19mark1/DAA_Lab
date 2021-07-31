#include<iostream>
#include<cmath>
using namespace std;

int jumpSearch(int a[],int n,int key){

    int i=0;
    int m=sqrt(n);

    while(a[m]<=key && m<n){
        i=m;
        m+=sqrt(n);
        if(i>n-1){
            return -1;
        }
    }

    for(int j=i;j<=m;j++){
        if(a[j]==key){
            return j;
        }
    }
    return -1;
}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,key;
        cin>>n>>key;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int res=jumpSearch(a,n,key);
        if(res>=0){
            cout<<"PRESENT at "<<res<<endl;
        }
        else cout<<"NOT PRESENT"<<endl;
    }

    return 0;
}