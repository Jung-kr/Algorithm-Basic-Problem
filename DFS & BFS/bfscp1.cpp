// 큐를 이용한 bfs, 2차원에서의 bfs, 큐에 (x, y)쌍 통째로 넣기 pair 

#include <iostream>
#include <queue>

using namespace std;

int N, M;

int graph[201][201];	// 갈수 있는 길(1)이자 최소 이동 칸 수 저장할 배열 

// 이동할 네 가지 방향 정의 (상, 하, 좌, 우)
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1}; 

int bfs(int x, int y) {
	
	queue<pair<int, int> > q;	// 큐에 (x, y)를 통째로 넣기 위함.
	q.push({x, y}); 
	
	while(!q.empty()){
		int x = q.front().first;	// (x,y)의 x좌표 
		int y = q.front().second;	// (x,y)의 y좌표
		q.pop(); // (x, y) 통째로 pop 
	
		for(int i = 0 ; i < 4 ; i++) {	// 현재 위치에서 4가지 방향으로의 위치 확인 
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			// 미로 찾기 공간을 벗어난 경우 
			if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
		
			// 벽인 경우
			if(graph[nx][ny] == 0) continue;
		
			// 해당 노드를 처음 방문하는 경우, 1보다 큰 숫자인 경우에는 방문한 노드임 
			if(graph[nx][ny] == 1) {
				graph[nx][ny] = graph[x][y] + 1;
				q.push({nx, ny});
			}
		}
	}
	
	return graph[N-1][M-1];
}

int main() {
	
	cin >> N >> M;
	
	for(int i = 0 ; i < N ; i++) {
		for(int j = 0 ; j < M ; j++) {
			scanf("%1d", &graph[i][j]);
		}
	}
	
	cout << bfs(0, 0) << '\n';
	
	return 0;
}
