/*
https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1/?category[]=Mathematical&category[]=Mathematical&company[]=Amazon&company[]=Microsoft&company[]=Google&company[]=Amazon&company[]=Microsoft&company[]=Google&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Mathematicalcompany[]Amazoncompany[]Microsoftcompany[]GoogleproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscompany[]Amazoncompany[]Microsoftcompany[]Googlecategory[]Mathematical
*/

// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here
            long long i=0,j=0,k=n-1;
            while(i <= k && j < m){
                if(arr1[i] < arr2[j]) i++;
                else std::swap(arr2[j++],arr1[k--]);
            }
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
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
