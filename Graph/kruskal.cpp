// vector<pair<int, pair<int, int> > > edges;

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int v, e;	// 노드의 개수(v), 간선의 개수(e)
int parent[100001];		// 부모 테이블 초기화 
vector<pair<int, pair<int, int> > > edges;	// 모든 간선을 담을 리스트와, 최종 비용을 담을 변수 
int result = 0;

// 특정 원소가 속한 집합 찾기 
int findParent(int x) {
	// 루트 노드가 아니라면, 루트 노드를 찾을 때까지 재귀적으로 호출
	if(x == parent[x]) return x;
	return parent[x] = findParent(parent[x]); 
}

// 두 원소가 속한 집합 합치기 
void unionParent(int a, int b) {
	a = findParent(a);
	b = findParent(b);
	
	if(a < b) parent[b] = a;
	else parent[a] = b;
}

int main() {
	
	cin >> v >> e;
	
	// 부모 테이블에서, 부모를 자신으로 초기화 
	for(int i = 1 ; i <= v ; i++) {
		parent[i] = i;
	}
	
	// 모든 간선에 대한 정보를 입력 받기
	for(int i = 0 ; i < e ; i++) {
		int a, b, cost;
		cin >> a >> b >> cost;
		
		// 비용순으로 정렬하기 위해 튜플의 첫 번째 원소를 비용으로 설정 
		edges.push_back({cost, {a, b}});
	} 
	
	// 크루스칼 알고리즘 수행
	sort(edges.begin(), edges.end());	// 1)간선을 비용순으로 오름차순 정렬
	 
	for(int i = 0 ; i < edges.size() ; i++) {	// 2)간선을 하나씩 확인하며 간선이 사이클을 발생시키는지 확인 
		int cost = edges[i].first;
		int a = edges[i].second.first;
		int b = edges[i].second.second;
		
		// 2-1)사이클이 발생하지 않는 경우에만 집합에 포함
		if(findParent(a) != findParent(b)) {
			unionParent(a, b);
			result += cost;
		} 
	}
	cout << result << '\n';
	
	return 0;
}
/*
input
7 9
1 2 29
1 5 75
2 3 35
2 6 34
3 4 7
4 6 23
4 7 13
5 6 53
6 7 25
output
159
*/
