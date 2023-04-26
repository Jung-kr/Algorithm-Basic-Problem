// map, iterator사용 

#include <iostream>
#include <map>

using namespace std;

map<int, string> m;

int main() {
	
	m.insert(make_pair(2, "a"));
	m.insert(make_pair(1, "b"));
	m.insert(make_pair(3, "c"));
	m.insert(make_pair(4, "d"));
	m.insert(make_pair(5, "e"));
	
	map<int, string>::iterator i;	// 이터레이터 
	
	for(i = m.begin() ; i != m.end() ; i++) {
		cout << i->first << ',' << i->second << '\n';
	}
	
	/*
		1,b
		2,a	
		3,c
		4,d
		5,e
	*/
	
	return 0;
}
