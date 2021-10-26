// https://codeforces.com/problemset/problem/1466/C
// GALATIANS 4:16

#include "bits/stdc++.h"

using namespace std;

#define ll long long int
#define debug(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define newline cout << endl
#define input_stream \
    freopen("input.txt", "r", stdin);\
    freopen("output.txt", "w", stdout);

const int MOD = 1000000007;

ll gcd (ll a, ll b) {return (a ? gcd(b % a, a) : b);}
int mpow(int base, int exp) {
    base %= MOD;
    int result = 1;
    while (exp > 0) {
      if (exp & 1) result = ((ll)result * base) % MOD;
      base = ((ll)base * base) % MOD;
      exp >>= 1;
    }
    return result;
}

void solve(){
    string s; cin >> s;
	int n = s.size(), ans = 0;
    vector<bool> marked(n, false);

    for(int i = 1; i < n; i++){
        bool flag = false;
        if(s[i] == s[i - 1] && !marked[i - 1])
			flag = true;

		if(i > 1 && s[i] == s[i - 2] && !marked[i - 2])
			flag = true;

		marked[i] = flag;
		ans += marked[i];
    }

    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    input_stream;
    #endif

    int t = 1; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}