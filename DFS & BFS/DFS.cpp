#include <iostream>
#include <vector> 

using namespace std;

bool visited[9];	// 방문했는지 표시하는 배열 
vector<int> graph[9];	// 각 노드를 벡터로 표현(배열은 인접한 노드를 표시하기 위함) 

// DFS 함수 정의 
void dfs(int x) {
	visited[x] = true;
	cout << x << ' ';
	
	for(int i = 0 ; i < graph[x].size() ; i++) {
		int y = graph[x][i];
		if(!visited[y]) dfs(y);
	}
} 

int main() {
	
	// 노드 1에 연결된 노드 정보 저장 
    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[1].push_back(8);
    
    // 노드 2에 연결된 노드 정보 저장 
    graph[2].push_back(1);
    graph[2].push_back(7);
    
    // 노드 3에 연결된 노드 정보 저장 
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[3].push_back(5);
    
    // 노드 4에 연결된 노드 정보 저장 
    graph[4].push_back(3);
    graph[4].push_back(5);
    
    // 노드 5에 연결된 노드 정보 저장 
    graph[5].push_back(3);
    graph[5].push_back(4);
    
    // 노드 6에 연결된 노드 정보 저장 
    graph[6].push_back(7);
    
    // 노드 7에 연결된 노드 정보 저장 
    graph[7].push_back(2);
    graph[7].push_back(6);
    graph[7].push_back(8);
    
    // 노드 8에 연결된 노드 정보 저장 
    graph[8].push_back(1);
    graph[8].push_back(7);
    
    dfs(1);	// 1이 최상단 노드 
    // 1 2 7 6 8 3 4 5
	
	return 0;
}
