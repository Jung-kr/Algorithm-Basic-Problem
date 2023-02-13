// lower_bound, upper_bound, 값이 특정 범위에 속하는 데이터 개수 구할 때 사용할 수 있음 

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	vector<int> arr = {1, 2, 4, 4, 8};
	cout << "lower_bound(4) : " << lower_bound(arr.begin(), arr.end(), 4) - arr.begin() << '\n';	// 2, 배열에서 범위 내의 원소들 중 value값 보다 크거나 같은 첫 번째 원소의 주소를 리턴
	cout << "upper_bound(4) : " << upper_bound(arr.begin(), arr.end(), 4) - arr.begin() << '\n';	// 4, 배열에서 처음으로 value값을 초과하는 원소의 주소를 리턴 

	// => 값이 특정 범위에 속하는 데이터 개수 구할 때 사용 가능! 

	return 0;
}
