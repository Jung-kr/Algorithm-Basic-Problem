// 10231로 입력했을 때 scanf로 정수 1자리씩 입력 받기 

#include <iostream>
#include <vector> 

using namespace std;

int N, M;
int graph[1001][1001];	// 0, 1로 방문 관리 

bool dfs(int x, int y) {
	
	// 주어진 범위를 벗어난 경우 즉시 종료
	if(x <= -1 || x >= N || y <= -1 || y>= M) {
		return false;
	}
	
	// 현재 노드를 방문하지 않았을 경우 
	if(graph[x][y] == 0) {
		// 현재 노드 방문 처리
		graph[x][y] = 1;
		dfs(x - 1, y);
		dfs(x, y - 1);
		dfs(x + 1, y);
		dfs(x, y + 1);
		 
		return true;
	}
	
	return false;	// 현재 노드를 방문한 경우(1) 
}

int main() {
	
	cin >> N >> M;
	
	for(int i = 0 ; i < N ; i++) {
		for(int j = 0 ; j < M ; j++) {
			scanf("%1d", &graph[i][j]);	// 정수 1자리씩 입력 받기 위함 
		}
	}
	
	int result = 0;	// 아이스크림 총 갯수 
	
	for(int i = 0 ; i < N ; i++) {
		for(int j = 0 ; j < M ; j++) {
			// 현재 위치에서 DFS 수행
			if(dfs(i, j)) {
				result++;
			} 
		}
	}
	
	cout << result << '\n';
	
	return 0;
}
