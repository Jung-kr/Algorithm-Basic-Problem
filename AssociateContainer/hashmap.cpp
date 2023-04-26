// Hashmap(unordered_map), iterator사용 

#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, string> m;

int main() {
	
	m.insert(make_pair(2, "a"));
	m.insert(make_pair(1, "b"));
	m.insert(make_pair(3, "c"));
	m.insert(make_pair(4, "d"));
	m.insert(make_pair(5, "e"));
	
	unordered_map<int, string>::iterator i;	// 이터레이터 
	
	for(i = m.begin() ; i != m.end() ; i++) {
		cout << i->first << ',' << i->second << '\n';
	}
	
	/*
		5,e
		4,d
		3,c
		1,b
		2,a
	*/
	
	return 0;
}
