#include <bits/stdc++.h>
using namespace std;

bool checkCycle(vector<int> graph[],bool *visited,int curr_node)
{
	visited[curr_node]=true;
	
	for(int i=0;i<graph[curr_node].size();i++)
	{
		if(!visited[graph[curr_node][i]])
		return checkCycle(graph,visited,graph[curr_node][i]);
		else
		return true;
	}
	return false;
}

int main() 
{
	int  nodes,edges;
	cin>>nodes>>edges;
	
	
	bool visited[nodes];
	
	for(int i=0;i<nodes;i++)
	{
		visited[i]= false;
	}
	
	vector<int> graph[nodes];
	
	int x,y;
	for(int i=0;i<edges;i++)
	{
		cin>>x>>y;
		graph[x].push_back(y);
	}
	
	if(checkCycle(graph,visited,0))
	cout<<"Yes";
	else
	cout<<"No";

	return 0;
}
