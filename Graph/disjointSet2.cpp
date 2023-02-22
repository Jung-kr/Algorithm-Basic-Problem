// 찾기(Find) 함수 개선 => 찾기 함수를 재귀적으로 호출한 뒤 부모 테이블 값을 바로 갱신 

#include <iostream>
#include <algorithm>

using namespace std;

int v, e;	// 노드의 개수(v), 간선의 개수(e)
int parent[100001];		// 부모 테이블 초기화 

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
	
	// 부모 테이블사에서, 부모를 자신으로 초기화 
	for(int i = 1 ; i <= v ; i++) {
		parent[i] = i;
	}
	
	// Union 연산 각각 수행 
	for(int i = 0 ; i < e ; i++) {
		int a, b;
		cin >> a >> b;
		unionParent(a, b);
	}
	
	// 각 원소가 속한 집합 
	cout << "각 원소가 속한 집합: ";
	for(int i = 1 ; i <= v ; i++) {
		cout << findParent(i) << ' ';
	}
	cout << '\n';
	
	return 0;
}
/*
input
6 4
1 4
2 3
2 4
5 6
output
각 원소가 속한 집합: 1 1 1 1 5 5
*/
