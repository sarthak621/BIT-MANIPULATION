//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
        
        //optimized
        vector<int>arr;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                arr.push_back(i);
                if(i!=(n/i)) arr.push_back(n/i);
            }
        }
        
        sort(arr.begin(),arr.end());
        for(int j=0;j<arr.size();j++){
            cout<<arr[j]<<" ";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends