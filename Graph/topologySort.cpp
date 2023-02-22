#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int v, e;	// 노드의 개수(v), 간선의 개수(e)
int indegree[100001];		// 모든 노드에 대한 진입차수는 0으로 초기화
vector<int> graph[100001];	// 각 노드에 연결된 간선 정보를 담기 위한 연결 리스트 초기화

void topologySort() {
	vector<int> result;	// 알고리즘 수행 결과 
	queue<int> q;
	
	// 초기 진입차수가 0인 노드 큐에 삽입 
	for(int i = 1 ; i <= v ; i++) {
		if(indegree[i] == 0) {
			q.push(i);
		}
	}
	
	while(!q.empty()) {
		
		// 큐에서 원소 꺼내기 
		int now = q.front();
		q.pop();
		result.push_back(now);
		
		// 해당 원소와 연결된 노드들의 진입차수에서 1 빼기
        for (int i = 0; i < graph[now].size(); i++) {
            indegree[graph[now][i]] -= 1;
            // 새롭게 진입차수가 0이 되는 노드를 큐에 삽입
            if (indegree[graph[now][i]] == 0) {
                q.push(graph[now][i]);
            }
        }
	}
	
	// 위상 정렬을 수행한 결과 출력
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << ' ';
    }
	
}

int main() {
	
	cin >> v >> e;
	
	// 방향그래프의 모든 간선 정보 입력 받기 
	for(int i = 0 ; i < e ; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);	// a 노드에 b노드로 이동 가능 
		
		indegree[b] += 1; 	// b노드 진입차수 1증가 
	}
	
	topologySort();
	
	return 0;
}
/*
input
7 8
1 2
1 5
2 3
2 6
3 4
4 7
5 6
6 4
output
1 2 5 3 6 4 7
*/
