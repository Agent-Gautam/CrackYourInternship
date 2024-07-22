//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        long long i = 0, j = m-1;
        long long mindiff = a[j] - a[i];
        i++; j++;
        while(j < n) {
            if(a[j] - a[i] < mindiff) mindiff = a[j] - a[i];
            i++; j++;
        }
        return mindiff;
    }   
};

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends