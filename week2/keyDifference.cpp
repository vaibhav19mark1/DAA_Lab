#include<bits/stdc++.h>
using namespace std;

int findPair(int arr[],int n,int key){
    sort(arr,arr+n);
    int c=0;
    int l=0,r=0;
    while(r<n && l<n){
        if(arr[r]-arr[l]==key){
            c++;
            l++;
            r++;
        }
        else if(arr[r]-arr[l]>key){
            l++;
        }
        else r++;
    }
    return c;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,key;
        cin>>n>>key;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int result=findPair(arr,n,key);
        if(result>0){
            cout<<result<<endl;
        }
        else cout<<"No such pair found!!";
    }
    return 0;
}