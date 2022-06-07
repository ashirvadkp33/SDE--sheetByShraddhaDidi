
//https://practice.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k0456/1/#



// { Driver Code Starts
// C++ program to search an element in an array
// where difference between all elements is 1
#include<bits/stdc++.h>
using namespace std;

// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k);


// Driver program to test above function
int main()
{
	int t,n,k,x;
	cin>>t;
	while(t--)
    {

        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>x;
        cout<<search(arr, n, x, k)<<endl;

    }
return 0;
}



// ********************************************method   2
  
//   // x is the element to be searched in arr[0..n-1]
// // such that all elements differ by at-most k.
// int search(int arr[], int n, int x, int k)
// {
// 	// Travers the given array starting from
// 	// leftmost element
// 	int i = 0;
// 	while (i < n)
// 	{
// 		// If x is found at index i
// 		if (arr[i] == x)
// 			return i;

// 		// Jump the difference between current
// 		// array element and x divided by k
// 		// We use max here to make sure that i
// 		// moves at-least one step ahead.
// 		i = i + max(1, abs(arr[i]-x)/k);
// 	}

// 	return -1;
// }

// } Driver Code Ends


// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k)
{
    // Complete the function	
    int ans=-1;
    
    for(int i=0;i<n;i++){
        if(arr[i]==x)
        {ans=i;
            break;
        }
    }
    
    return ans;
}    	
