#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long 
#define fi first
#define se second
#define pb push_back

#define nl cout << endl
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repn(i, n) rep(i, 0, n)
#define deb(x) cout << (#x)  << " " << (x) << endl
#define deb2(x, y) cout << (#x)  << " " << (x) << " " << (#y) << " " << y << endl
#define deb3(x, y, z) cout << (#x)  << " " << (x) << " " << (#y) << " " << y << " " << (#z) << " " << z << endl
#define prns(c) for(auto x: c) cout << x << " "; 
#define prn(c) for(auto x: c) cout << x; 
#define loopc(c) for(auto x: c)

#define pii pair <int, int> 
#define vi vector <int> 
#define mkp make_pair
#define found(x, y) x.find(y) != x.end()

#define INF 1000000007
#define N 1e5

template <typename... T>
void debug(T... args) {
	((cerr << args << " "), ...);
}

template <typename... T>
void read(T&...  args) {
	((cin >> args), ...);
}

template <typename... T> 
void write(T... args) {
	((cout << args << " "), ...);
}


void solve() { 

	int n, m; 
	read(n, m); 

	int a[n]; 
	repn(i, n) {
		read(a[i]);  
	}

	

}
	
 
int main(){
	
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t = 1;
	//read(t); 

	while(t--){
		solve();
	}
	
	return 0;
}