//https://practice.geeksforgeeks.org/problems/common-elements1132/1/#
//Find common elements of 3 spted array

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>ans;
            
            int i=0,j=0,k=0;
            
            while(i<n1 && j<n2 && k<n3){
                int n=ans.size();
                if(a[i]==b[j] && b[j]==c[k])
                {   
                    if(n==0)
                    {ans.push_back(a[i]);
                        i++;
                        j++;
                        k++;
                    }
                    else{
                        if(ans[n-1]!=a[i])
                        ans.push_back(a[i]);
                        i++;
                        j++;
                        k++;
                    }
                }
                else if(a[i]<b[j] && a[i]<c[k])
                {
                    i++;
                }
                else if(b[j]<a[i] && b[j]<c[k]){
                    j++;
                }
                else if(c[k]<a[i] && c[k]<b[j])
                k++;
                else if(a[i]==b[j]){
                    if(a[i]<c[k])
                    {
                        i++;
                        j++;
                    }
                    else
                    k++;
                }
                else if(b[j]==c[k])
                {
                    if(b[j]<a[i])
                    {
                        j++;
                        k++;
                    }else{
                        i++;
                    }
                }
                else if(a[i]==c[k]){
                    if(a[i]<b[j])
                    {
                        i++;
                        k++;
                    }
                    else{
                        j++;
                    }
                }
            }
            
            return ans;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
