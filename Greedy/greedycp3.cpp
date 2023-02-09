// 문자열 다루기(문자열 형변환)

#include <iostream>

using namespace std;

string str;

int main() {
	
	cin >> str;
	
	long long result = str[0] - '0';	// 문자형 str[0]을 정수형으로 형변환 
	
	for(int i = 1 ; i < str.size() < i++) {
		
		int num = str[i] - '0';
		
		// 두 수 중에서 하나라도 0, 1이라면 더하기 수행하고 아니라면 곱하기 수행 
		if(result <= 1 || num <= 1) {
			result += num;
		} else {
			result *= num;
		}
	}
	
	cout << result << '\n';
	
	return 0;
}
