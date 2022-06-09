// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        
        
        
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
           
           int i=n-1,j=0;
           
           while(i>=0 && j<m){
               
               if(arr1[i]>arr2[j])
               {
                   swap(arr1[i],arr2[j]);
                   i--;
                   j++;
               }else
               {
                   j++;
               }
               
           }
           
           sort(arr1,arr1+n);
           sort(arr2,arr2+m);
           
           
           
            
            // int gap=(n+m)/2;
            
            // while(gap>=1)
            // {
            //     int l=0,h=l+gap;
                
            //     while(h< (n+m-1)){
            //         if(h<n)
            //         {
            //             if(arr1[l]<=arr1[h])
            //             {   l++;
            //                 h++;
            //                 continue;
                            
            //             }
            //             else if(arr1[l]>arr1[h])
            //             {swap(arr1[l],arr1[h]);
            //              l++;
            //              h++;
            //             }
            //             // else
            //             // {
            //             //     l++;
            //             //     continue;
            //             // }
                        
            //         }
            //         else if(l<n && h>=n){
            //             int k=h-n;
            //             if(arr1[l]<=arr2[k])
            //             {   l++;
            //                 h++;
            //                 continue;
                            
            //             }
            //             else if(arr1[l]>arr2[k])
            //             {swap(arr1[l],arr2[k]);
            //              l++;
            //              h++;
            //              }
            //              //else{
            //             //     l++;
            //             // }
            //         }
            //         else if(l>=n && h>=n){
            //             int j=l-n;
            //             int k=h-n;
                        
            //             if(arr2[j]<=arr2[k])
            //             {   l++;
            //                 h++;
            //                 continue;
                            
            //             }
            //             else if(arr2[j]>arr2[k])
            //             {swap(arr2[j],arr2[k]);
            //              l++;
            //              h++;
            //             }
            //             // else{
            //             //     l++;
            //             // }
                        
            //         }
            //     }
                
            //     gap=gap/2;
            // }
            
        } 
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver Code Ends
