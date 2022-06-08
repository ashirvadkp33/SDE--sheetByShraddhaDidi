// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    code
    sort(arr,arr+m);
    
    int l=0,h=m-1;
    
    while(l<=h){
        
        //int mid=l+(h-l)/2;
        int dif=abs(arr[h]-arr[l]);
        if(dif==n)
        return true;
        else if(dif>n)
        l++;
        else
        h--;
        
    }
    return -1;
    
}
