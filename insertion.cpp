#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[10];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int pos,value;
    cout<<"Enter position and value :";
    cin>>pos>>value;

    if(pos < 0 || pos > n)
    {
        cout<<"Invalid";
    }
    else
    {
        for(int i=n-1; i>=pos; i--)
        {
            arr[i+1] = arr[i];

        }
        arr[pos] = value;
    }

    for(int i=0; i<n+1; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}
