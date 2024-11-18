#include<bits/stdc++.h>
using namespace std;

int vis[10001],dis[10001];
vector<int>v[10001];
void bfs(int node){
	queue<int>q;
	q.push(node);
	vis[node]=1;
	dis[node]=0;
	while(!q.empty()){
		int a=q.front();
		q.pop();
		for(int child: v[a]){
			if(vis[child]==0){
				dis[child]=dis[a]+1;
				vis[child]=1;
				q.push(child);
			}
		}
	}
}
int main(){
	int n,m,i,x,y;
	cin>>n>>m;
	while(m--){
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bfs(4);
	for(i=1;i<=n;i++){
		cout<<"The level of "<<i<<" is: "<<dis[i]<<"\n";
	}
	return 0;
}