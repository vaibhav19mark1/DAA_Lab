#include <iostream>
using namespace std;

int binSearch(int a[], int l, int r, int key, int c ){

    if(r>=l){
        int mid= l + (r-l)/2;

        if(a[mid]==key){
            return c;
        }
        else if(a[mid]<key){
            return binSearch(a,mid+1,r,key,++c);
        }
        else if(a[mid]>key){
            return binSearch(a,l,mid-1,key,++c);
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0, key;
        cin >> n >> key;
        int a[n];
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res=binSearch(a,0,n-1,key,c);
        (res==-1) ? cout<<"NOT PRESENT" : cout<<"PRESENT "<<res+1; 
    }
    return 0;
}