#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int beg=0,ending=n-1;
    while(beg<ending)
    {
        swap(arr[beg],arr[ending]);
        beg++;
        ending--;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
