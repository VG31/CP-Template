// C++ program to implement the approach
#include <bits/stdc++.h>

#define pb              push_back
#define int             long long
#define ff              first
#define ss              second
#define all(a)          a.begin(),a.end()
#define ed              '\n'
#define print(x)        cout << #x << " = " << x << "\n";
#define ins             insert


using namespace std;
using vi = vector<int>;
using vvi = vector<vector<int>>;

int mod = 1e9+7;
int inf = 1e18;
int nax = 1e5;
bool sieve[100000];

void prime_sieve(){
	memset(sieve, 1, sizeof(sieve));
	sieve[0] = sieve[1] = 0;
	sieve[2] = 1;
	for(int i=2;i*i<=nax;i++){
		if(sieve[i]){
			for(int j=i*i;j<=nax;j+=i){
				sieve[j] = 0;
			}
		}
	}
}

void solve(){
	int n;
	cin>>n;
	cout<<2*n;

}

signed main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

      ios_base::sync_with_stdio(0);cin.tie(0);
      int t = 1;
//	  prime_sieve();
      
      cin >> t;
      
      for(int i=1;i<=t;i++){
      	#ifdef case
        cout << "Case #" << i << ": ";
	#endif
        solve();
      }

}
