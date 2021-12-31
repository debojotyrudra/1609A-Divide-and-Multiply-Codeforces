#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long temp=0,k=0,high=0;
        for(i=0;i<n;i++)
        {
            while(arr[i]%2==0)
            {
                k++;
                arr[i]=arr[i]/2;
            }
            high+=arr[i];
            temp=(temp>arr[i])?temp:arr[i];
        }
        long long ans=temp*(long long)pow(2,k)-temp+high;
        cout<<ans<<endl;
    }
}