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
	
	bool cycle = false;	// 사이클 발생 여부
	
	for(int i = 0 ; i < e ; i++) {	// 1)각 간선을 하나씩 확인하며 두 노드의 루트 노드 확인 
		
		int a, b;
		cin >> a >> b;
		
		// 2)루트 노드가 서로 같다면 사이클이 발생한 것 
		if(findParent(a) == findParent(b)) {
			cycle = true;
			break;
		}
		
		// 3)루트 노드가 서로 다르다면 두 노드에 대해 합집합(union) 연산 수행 
		else {
			unionParent(a, b);
		}
	} 
	
	if(cycle) {
		cout << "사이클이 발생했습니다." << '\n';
	}
	else {
		cout << "사이클이 발생하지 않았습니다." << '\n';
	}
	
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
사이클이 발생하지 않았습니다.
*/
