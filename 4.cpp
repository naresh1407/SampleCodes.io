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
#define N 100005

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


struct TreeNode {
	int data;
	struct TreeNode* left; 
	struct TreeNode* right; 
}; 

//Returning the root of the Binary tree

struct TreeNode* createBt(vector <int> &v) {

	int n = v.size(); 

	if(!n) return NULL; 

	struct TreeNode* root = new TreeNode(); 
	root -> data = v[0];

	int idx = 1;  

	queue <TreeNode*> q; 
	q.push(root); // 1st level

	while(!q.empty()) {

		//Sz gives the size of the previous level
		int sz = q.size(); // 1

		//Processing the nodes in the previous level to insert the nodes of the current level in the queue
		for(int i = 0; i < sz; i++) {

			struct TreeNode* curr = q.front(); 
			q.pop(); 
			if(v[idx] != -1) {
				struct TreeNode* leftNode = new TreeNode(); 
				leftNode -> data = v[idx]; 
				curr -> left = leftNode; 
			}
			idx++;

			if(v[idx] != -1) {
				
				struct TreeNode* rightNode = new TreeNode();
				rightNode -> data = v[idx]; 
				curr -> right = rightNode;
			}
			idx++; 
		}

		return root; 
	}


	// int idx = 1; 




	// 0 based: left = 2*i, right =  2*i+1
	// 1 based: left = 2*i+1 right = 2*i+2
	// 8 3 10 1 6 -1 14 -1 -1 4 7 13 -1

	return root; 

}

void printTree(struct TreeNode* root) {

	if(root == NULL) return ; 
 
	queue <TreeNode*> q; 
	q.push(root); 

	while(!q.empty()) {
		int sz = q.size(); 
		for(int i = 0; i < sz; i++) {
			TreeNode* curr = q.front(); 
			q.pop();

			cout << curr -> data << " "; 

			if(curr -> left) q.push(curr -> left); 
			if(curr -> right) q.push(curr -> right); 
		}
	}
	
	cout << endl; 
}


void solve(){
	
	int n; 
	cin >> n; 
	
	vector <int> v(n); 

	for(int i = 0; i < n; i++) {
		cin >> v[i]; 
	}

	//Node creation for the root of the tree
	//root is the pointer to the root of the tree
	struct TreeNode* root = new TreeNode(); 
	root = createBt(v); 

	printTree(root); 
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
