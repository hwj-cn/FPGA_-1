#include<bits/stdc++.h>

using namespace std;

vector<int> edge[1005+10];
vector<int> rowIndex;
vector<int> ptr;

int main() {
	freopen("email-Eu-core.txt","r",stdin);
	int u,v;
	while(cin>>u>>v) {
		edge[v].push_back(u);
	}
	for(auto &i:edge)
		sort(i.begin(),i.end());
	for(auto &i:edge) {
		if(i.empty()) continue;
		ptr.push_back(rowIndex.size());
		for(auto &j:i)
			rowIndex.push_back(j);
	}
	ofstream out_row("rowIndex.txt");
	ofstream out_ptr("ptr.txt");
	cout<<rowIndex.size()<<' '<<ptr.size()<<endl;
	for(auto &i:rowIndex)
		out_row<<i<<' ';
	for(auto &i:ptr)
		out_ptr<<i<<' ';
	return 0;
} 
