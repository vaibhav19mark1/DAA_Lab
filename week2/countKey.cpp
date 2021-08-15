#include <iostream>
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0, key;
        cin >> n >> key;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res=binSearch(a,0,n-1,key);
        int i=res,j=res;
        while(a[i]==key){
            c++;
            i+=1;
        }
        while(a[j]==key){
            c++;
            j-=1;
        }
        cout<<c-1;
    }
    return 0;
}