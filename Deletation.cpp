#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[50];
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {

        cin>>arr[i];
    }
    int pos;
    cout<<"Enter the index no for deletion : ";
    cin>>pos;
    if(pos == n)
    {
        n--;
    }
    else
    {

        for(int i=pos+1; i<n; i++)
        {
            arr[i-1] = arr[i];
        }
        n--;
    }
    cout<<"After deletion : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}
