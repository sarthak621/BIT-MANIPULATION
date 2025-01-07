//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    
    int findMaxPowerOf2ForN(int n){
        int x=0;
        while((1<<x)<=n){
            x++;
        }
        return x-1;
    }
    
    int countSetBits(int n)
    {
        // if(n==0) return 0;
        // //firstly find maximum power of 2 
        // int x= findMaxPowerOf2ForN( n);
        // int bitUptoMaxPowerOf2= (1<<(x-1))*x;
        // int msbAfterPowerOf2= n-(1<<x)+1;
        // int rest=n-bitUptoMaxPowerOf2;
        // int ans=bitUptoMaxPowerOf2 + msbAfterPowerOf2 + countSetBits(rest);
        // return ans;
        int count = 0;
        
        // Iterate through all bit positions
        for (int i = 0; (1 << i) <= n; i++) {
            int cycle_length = 1 << (i + 1);  // Length of the cycle for this bit position
            
            // Count full cycles
            count += (n / cycle_length) * (cycle_length / 2);
            
            // Count the remainder part of the cycle
            int remainder = n % cycle_length;
            if (remainder >= (cycle_length / 2)) {
                count += remainder - (cycle_length / 2) + 1;
            }
        }
        
        return count;

    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  
cout << "~" << "\n";
}
	  return 0;
}

// } Driver Code Ends