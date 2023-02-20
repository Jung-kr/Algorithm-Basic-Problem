// 배열 통째로 초기화 fill_n(변경하려는 원소의 범위 시작주소, 변경하려는 원소 갯수, 변경 값) 

#include <iostream>
#include <vector>
#define INF 1e9 // 무한을 의미하는 값으로 10억을 설정

using namespace std; 

int n, m, start;	// 노드의 개수(N), 간선의 개수(M), 시작 노드 번호(Start)
vector<pair<int, int> > graph[100001];	// 노드의 최대 개수 100,000개라고 가정 
bool visited[100001];	// 방문한 적이 있는지 체크 
int d[100001];	// 최단 거리 테이블 

int getSmallestNode() {
	int min_value = INF;
	int index = 0;	// 가장 최단 거리 노드의 인덱스
	
	for(int i = 1 ; i <= n ; i++) {
		if(d[i] < min_value && !visited[i]) {
			min_value = d[i];
			index = i;
		}
	} 
	return index;
}

void dijkstra(int start) {
	d[start] = 0;	// 시작 노드는 0으로 초기화 
	visited[start] = true;
	
	for(int i = 0 ; i < graph[start].size() ; i++) {
		d[graph[start][i].first] = graph[start][i].second;
	}
	
	// 시작 노드를 제외한 전체 n-1개의 노드에 대해 반복 
	for(int i = 0 ; i < n - 1 ; i++) {
		
		// 현재 최단 거리가 가장 짧은 노드를 꺼내서 방문처리 
		int now = getSmallestNode();
		visited[now] = true;
		
		// 현재 노드와 연결된 다른 노도 확인
		for(int j = 0 ; j < graph[now].size() ; j++) {
			int cost = d[now] + graph[now][j].second;
			// 현재 노드를 거쳐서 다른 노드로 이동하는 거리가 더 짧은 경우
			if(cost < d[graph[now][j].first]) {
				d[graph[now][j].first] = cost;
			}
		}
	}
} 

int main() {
	cin >> n >> m >> start;
	
	// 모든 간선의 정보 입력받기
	for(int i = 0 ; i < m ; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({b, c});	// a 노드에서 b 노드로 가는 비용이 c  
	} 
	
	fill_n(d, 100001, INF);	// 최단 거리 테이블을 모두 무한으로 초기화
	
	// 다익스트라 알고리즘을 수행
    dijkstra(start);
    
    // 모든 노드로 가기 위한 최단 거리를 출력
    for (int i = 1; i <= n; i++) {
        // 도달할 수 없는 경우, 무한(INFINITY)이라고 출력
        if (d[i] == INF) {
            cout << "INFINITY" << '\n';
        }
        // 도달할 수 있는 경우 거리를 출력
        else {
            cout << d[i] << '\n';
        }
    }
	
	return 0;
}
/*
input
6 11 1
1 2 2
1 3 5
1 4 1
2 3 3
2 4 2
3 2 3
3 6 5
4 3 3
4 5 1
5 3 1
5 6 2

output
0
2
3
1
2
4
*/
