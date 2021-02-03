//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++

class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> arr, int n)
    {
        vector<vector<int>> ans={};
        int i=0;
        int sell,buy;
        while(i+1<n)
        {
            while(i+1<n && arr[i]>=arr[i+1])
            {
                i++;
            }
            buy=i;
            if(i==n-1)
            {
                return ans;
            }
            
            while(i+1<n && arr[i]<=arr[i+1])
            {
                i++;
            }
            sell=i;
            ans.push_back({buy,sell});
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            for (int i=0; i<ans.size(); ++i){
                cout<<"("<<ans[i][0]<<" "<<ans[i][1]<<") ";
            }
        }cout<<endl;
    }
    return 0;
}

  // } Driver Code Ends
