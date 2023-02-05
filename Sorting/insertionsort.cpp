#include <iostream>
#include <algorithm>

using namespace std;

int n = 10;
int target[10] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8}; 


// 삽입정렬: 앞에 있는 수는 이미 정렬이 돼있다고 가정하고 처리되지 않은 데이터를 하나씩 골라 적절한 위치에 삽입 

int main() {
	for(int i = 1 ; i < n ; i++) {
		for(int j = i ; j > 0 ; j--) {
			if(target[j] < target[j-1]) {
				swap(target[j], target[j-1]);
			}
			else break;
		}
	}
	
	for(int i = 0 ; i < n ; i++) {	// 0,1,2,3,4,5,6,7,8,9
		cout << target[i] << ' ';
	}
	
	return 0;
}
