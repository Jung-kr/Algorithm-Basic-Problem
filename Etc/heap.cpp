// 우선순위 큐 라이브러리 사용 priority_queue, C++은 내림차순 정렬이기 때문에 오름차순 정렬을 하기 위해서는 -를 붙혀야 됨 

#include <iostream>
#include <queue> 
#include <vector>

using namespace std; 

int n;
vector<int> arr;

void heapSort(vector<int>& arr) {
	priority_queue<int> h;	//priority_queue<int, vector<int>, greater<int> > h 이렇게 정렬 기준 오름차순으로 변경하는 방법도 있음
	
	// 배열의 원소 차례대로 우선순위 큐에 삽입 
	for(int i = 0 ; i < arr.size() ; i++) {
		h.push(-arr[i]);	// 오름차순 정렬을 위해 -붙힘 
	}
	
	// 정렬된 큐의 값 pop 
	while(!h.empty()) {
		printf("%d\n", -h.top());
		h.pop();
	}
}

int main() {
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		int x;
		scanf("%d", &x);
		arr.push_back(x);
	}	
	
	heapSort(arr);
	
	return 0;
}
