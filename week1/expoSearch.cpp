#include<iostream>
#include<cmath>
using namespace std;

int binSearch(int a[], int l, int r, int key){

    if(r>=l){
        int mid= l + (r-l)/2;

        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            return binSearch(a,mid+1,r,key);
        }
        else if(a[mid]>key){
            return binSearch(a,l,mid-1,key);
        }
    }
    return -1;
}

int expoSearch(int a[],int n,int key){

    if(a[0]==key){
        return 0;
    }

    int step=1;
    while(a[step]<=key && step<n){
        step*=2;
    }
    return binSearch(a,step/2,min(step,n-1),key);
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
        int res=expoSearch(a,n,key);
        if(res>=0){
            cout<<"PRESENT at index "<<res<<endl;
        }
        else cout<<"NOT PRESENT"<<endl;
    }

    return 0;
}