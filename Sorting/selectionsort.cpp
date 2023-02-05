#include <iostream>
#include <algorithm>

using namespace std;

int n = 10;
int target[10] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8}; 


/* 선택 정렬: 처리되지 않은 데이터 중에서 가장 작은 데이터를 선택하여 
   맨 앞에 있는 데이터와 바꾸는 것을 반복 */

int main() {
	for(int i = 0 ; i < n ; i++){
		int min_index = i;
		
		for(int j = i + 1 ; j < n ; j++) {
			if(target[min_index] > target[j]){
				min_index = j;
			}
		}
		swap(target[i], target[min_index]);
	}
	
	for(int i = 0 ; i < n ; i++) {	// 0,1,2,3,4,5,6,7,8,9
		cout << target[i] << ' ';
	}
	
	return 0;
}
