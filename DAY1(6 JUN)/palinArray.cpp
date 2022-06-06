#include<bits/stdc++.h>
using namespace std;

int count(int arr[],int n){

    int l=0,h=n-1;
    int count=0;
    for(int i=0,j=n-1;i<=j;){
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else if(arr[i]<arr[j]){
            i++;
            arr[i]=arr[i]+arr[i+1];
            count++;
        }
        else if(arr[j]<arr[i]){
            j--;
            arr[j]+=arr[j+1];
            count++;
        }
        
    }
    return count;
}

int main(){
    int arr[]={2,4,1,6,7,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=count(arr,n);
    cout<<"No. of operation needed is: "<<ans<<"\n";
    return 0;
}
