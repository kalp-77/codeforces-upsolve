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

bool com(pair<int, pair<int,int>>a, pair<int, pair<int,int>>b) {
   return a.second.first < b.second.first;
}
void solve(){
   int n; cin>>n;
   // map<int, pair<int,int>>mp;
   vector<pair<int,pair<int,int>>>arr;
   for(int i=0; i<n; i++) {
      // demand and increment
      int a; cin>>a;
      if(i==0) continue;
      int demand = a+i;
      arr.push_back({a,{demand, i}});
   }  
   sort(arr.begin(), arr.end(), com);
   map<int,int>mp;
   for(int i=0; i<arr.size(); i++) {
      mp[arr[i].second.first]++;
   }
   set<int>ans;
   ans.insert(n);
   for(int i=0;i<arr.size(); i++) {
      if(mp[arr[i].second.first] && ans.find(arr[i].second.first) != ans.end()) {
         ans.insert(arr[i].second.first+arr[i].second.second);
      }
   }
   cout<<*ans.rbegin()<<endl;  
}

signed main() {
   init_code();
   int t; cin>>t;
   while(t--)
   solve();   
   return 0;
   
}     
 
