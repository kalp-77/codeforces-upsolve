// Kalp 
#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358979323846264338327950
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define endl "\n"
#define int long long 

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
void _print(int t){cerr<<t;}
//void _print(ll t){cerr<<t;}
void _print(char t){cerr<<t;}
void _print(string t){cerr<<t;}
void _print(float t){cerr<<t;}
void _print(double t){cerr<<t;}
void _print(ull t){cerr<<t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T, class V> void _print(map <T, V> mp);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> s);
template <class T> void _print(multiset<T> s);
template <class T> void _print(T arr[]) {cerr << "[ "; for(T i: arr) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << endl;} cerr << "]";}
const int N = 1e7+7;
const int m = 1e9+7;
const ll INF = LLONG_MAX >> 1;
void init_code(){
   fast_io;
   #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      freopen("error.txt", "w", stderr);
   #endif 
}
// --------------------------------------------------------------------------------------------------------------------------------------//

/** GREEDY **/

void solve() {
   int n; cin>>n;
   string s; cin>>s;
   int cnt = 0;
   int ans = 0;
   vector<int>rem(n,0);
   for(int i=n-1; i>=0; i--) {
      if(s[i] == '1') cnt++;
      else if(s[i] == '0') {
         ans+=(i+1);
         cnt--;
         if(cnt<0) cnt=0;
      }
   }
   for(int i = 0; i<n; i++) {
      if(cnt<=0) break;
      if(s[i] == '1' && cnt) {
         ans+=(i+1);
         cnt-=2;
      }  
   }
   cout<<ans<<endl;
   
   debug(ans)
   
}
signed main() {
   init_code();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
                  
