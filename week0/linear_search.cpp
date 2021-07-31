#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=0,k;
        cin>>n>>k;
        int a[n];
        bool found=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            if(a[i]!=k){
                c++;
            }else{
                cout<<"YES "<<c<<endl;
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"NO "<<c<<endl;
        }
    }
}