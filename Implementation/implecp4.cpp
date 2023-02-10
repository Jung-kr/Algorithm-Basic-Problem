// 입력이 K1KA5CB7일 때, 알파벳은 별도의 배열(vector)에 저장, isalpha 함수(헤더 <cctype>)
// 덧셈으로 형변환 할 때는 -'0'으로 해야됨. +'0'으로 하면 아스키코드로 계산 

#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm> 

using namespace std;

string str;	// 입력할 문자열 
vector<char> result;	// 알파벳을 별도로 저장할 배열 
int sum = 0;

int main() {
	
	cin >> str;
	
	// 입력한 문자열을 문자와 숫자로 나눔 
	for(int i = 0 ; i < str.size() ; i++) {
		if(isalpha(str[i])) {
			result.push_back(str[i]);
		} else {
			sum += str[i] + '0';
		}
	}
	
	// 알파벳을 별도로 저장한 배열을 정렬 
	sort(result.begin(), result.end());
	
	for(int i = 0 ; i < result.size() ; i++) {
		cout << result[i];
	}
	
	// 입력한 문자열에 숫자가 없을 때 if문이 없으면 뒤에 0표시가 될 수 있기 때문에 조건문 필요 
	if (sum != 0) cout << sum << '\n';
	
	return 0;
}
