#include<bits/stdc++.h>
using namespace std;


bool sumPossible(int arr[],int n,int sum){

    int i=0,maxi=0;
    while(arr[i]<arr[i+1] && i+1<=n-1)
    i++;

    if(i==n-1)
    maxi=n-1;
    else
    maxi=i;

   int j =maxi;
   i=(i+1)%n;

   while(i!=j){

    if(arr[i]+arr[j]==sum)
    return true;
    else if((arr[i]+arr[j])>sum)
    j=(j+n-1)%n;
    else
    i=(i+1)%n;   
   }

  return false;
}


int main(){
    int arr[]={5,6,7,8,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
   

   
      
    
    int sum;
    cout<<"Enter sum needed: ";
    cin>>sum;
    
    if(sumPossible(arr,n,sum))
    cout<<"Sum is possible";
    else
    cout<<"Sum is not possible";

   
    return 0;

}
