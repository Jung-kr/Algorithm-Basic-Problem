#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main() {
	s.push(5);
	s.push(2);
	s.push(3);
	s.push(7);
	s.pop();
	s.push(1);
	s.push(4);
	s.pop();
	
	while(!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	} // 1 3 2 5
	
	return 0;
}
