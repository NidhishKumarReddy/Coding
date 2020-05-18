/******************************************
* AUTHOR : sema_4 *
******************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int		long long
#define mp		make_pair
#define pb		push_back
#define fi		first
#define se 		second
#define sz(x)	((int)(x).size())
#define mod		1000000007
const double PI = acos(-1.0);
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

void solve (){
	int n; cin>>n;
	int a[n] = {0};
	priority_queue<pair<int,pair<int,int>>> pq; 
	pq.push(mp(n, mp(0, n-1)));
	int cnt = 1;
	int index;
	while(cnt <= n){
		int len = pq.top().fi;
		int l = abs(pq.top().se.fi); 
		int r = pq.top().se.se;
		if(len % 2 == 1){
			index = (l+r)/2;
			a[index] = cnt;
			cnt++;
			pq.pop();
			if(l <= index-1){
				pq.push(mp(index-l, mp(-l, index-1)));
			}
			if(index+1 <= r){
				pq.push(mp(r-index, mp(-index-1, r)));
			}
		}
		else if(len % 2 == 0){
			index = (l+r-1)/2;
			a[index] = cnt; 
			cnt++;
			pq.pop();
			if(l <= index -1){
				pq.push(mp(index-l, mp(-l, index-1)));
			}
			if(index+1 <= r){
				pq.push(mp(r-index, mp(-index-1, r)));
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int test; cin>>test;
	while(test--){solve();}
	return 0;
}