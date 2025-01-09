//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void sieve() {}

    vector<int> findPrimeFactors(int N) {

        // using Sieve
        vector<int>prime(N+1);
        for(int i=2;i<=N;i++){
            prime[i]=i;
        }
        
        for(int i=2;i*i<=N;i++){
            //checking prime
            if(prime[i]==i){
                for(int j=i*i;j<=N;j+=i){
                    // mark multiples as i
                    if(prime[j]==j){
                        prime[j]=i;
                    }
                }
            }
        }
        
        //sieve complete
        
        //now,
        vector<int>factors;
        while(N>1){
            factors.push_back(prime[N]);
            N=N/prime[N];
        }
        return factors;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n;
        cin >> n;

        Solution obj;
        obj.sieve();
        vector<int> vec = obj.findPrimeFactors(n);
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << endl;

        // cout << "~\n";
    
cout << "~" << "\n";
}
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends