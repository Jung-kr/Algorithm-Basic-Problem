#include <iostream>

using namespace std;

int n = 1260;	// 지불할 비용 
int cnt; 

int coinTypes[4] = {500, 100, 50, 10};

int main() {
	
	for(int i = 0 ; i < 4 ; i++) {
		cnt += n / coinTypes[i];
		n %= coinTypes[i];
	}
	
	cout << cnt << '\n';

	return 0;
}
