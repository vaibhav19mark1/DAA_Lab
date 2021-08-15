#include<iostream>
using namespace std;

void findTriplet(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int j=0;
        int k=i-1;

        while(j<k){
            if(arr[i]==arr[j]+arr[k]){
                cout<<j<<" "<<k<<" "<<i<<endl;
                return;
            }
            else if(arr[i]>arr[j]+arr[k]){
                j++;
            }
            else k--;
        }
    }
    cout<<"Triplets Not Found";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        findTriplet(arr,n);
    }
    return 0;
}