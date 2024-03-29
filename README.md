## 📙 Algorithm-Basic-Problem

* 알고리즘 기초 문제 저장소입니다.
* 참고사이트: 이것이 취업을 위한 코딩테스트다 (https://www.youtube.com/watch?v=m-9pAwq1o3w&list=PLRx0vPvlEmdAghTr5mXQxGpHjWqSz0dgC)

## 🧩Contents

### 1. Greedy Algorithm (그리디 알고리즘)

* Cp1) [거스름돈 문제](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Greedy/greedycp1.cpp)
* Cp2) [1이 될 때까지](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Greedy/greedycp2.cpp)
* Cp3) [곱하기 혹은 더하기](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Greedy/greedycp3.cpp)  // 문자열 다루기(문자열 형변환)
* Cp4) [모험가 길드](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Greedy/greedycp4.cpp)  // vector를 이용한 배열 입력 및 정렬(sort) 

### 2. Implementation Algorithm (구현)

* Cp1) [상하좌우](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Implementation/implecp1.cpp)  // 2차원 공간에서의 방향 벡터 문제 기본 세팅,  R R R U D D 하나의 문자열로 입력, 범위가 벗어난다면 continue 이용
* Cp2) [시각](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Implementation/implecp2.cpp)  // 완전탐색문제 (구현)
* Cp3) [왕실의 나이트](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Implementation/implecp3.cpp)  // implecp1.cpp 참고 
* Cp4) [문자열 재정렬](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Implementation/implecp4.cpp)  // 입력이 K1KA5CB7일 때, 알파벳은 별도의 배열(vector)에 저장, isalpha 함수(헤더 <cctype>) / 덧셈으로 형변환 할 때는 -'0'으로 해야됨. +'0'으로 하면 아스키코드로 계산 

### 3. DFS & BFS (깊이 우선 탐색 & 너비 우선 탐색)

* 기초 자료구조: [스택](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/stack.cpp), [큐](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/queue.cpp), 재귀함수
* [DFS](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/DFS.cpp)  // 재귀 함수를 이용한 dfs, 백준 11725
* [BFS](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/BFS.cpp)  // 큐를 이용한 bfs 
* Cp1) 최대공약수 계산 (유클리드 호제법) / 재귀함수
* Cp2) [음료수 얼려 먹기](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/dfscp1.cpp)  // 10231로 입력했을 때 scanf로 정수 1자리씩 입력 받기, 2차원에서의 dfs
* Cp3) [미로 찾기](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/bfscp1.cpp)  // 큐를 이용한 BFS, 2차원에서의 bfs, 큐에 (x, y)쌍 통째로 넣기 pair 

### 4. Sorting (정렬)
* 기초 정렬: [선택 정렬](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/selectionhttps://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/sortingcp1sort.cpp), [삽입 정렬](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/insertionsort.cpp), [퀵 정렬](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/quicksort.cpp), [계수 정렬](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/countingsort.cpp)
* Cp1) [두 배열의 원소 교체](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Sorting/sortingcp1)  // vector를 이욯한 배열 입력,  내림차순 정렬(콜백 처리), swap

### 5. Binary Search (이진 탐색)
* 기초: [이진 탐색](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Binary%20Search/binarySearch.cpp)  // binarySearch 함수가 vector를 받을 때 &로 받아야 됨. 
* [bound 함수](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Binary%20Search/bound.cpp)  // lower_bound, upper_bound, 값이 특정 범위에 속하는 데이터 개수 구할 때 사용할 수 있음  
* Cp1) [떡볶이 떡 만들기](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Binary%20Search/BScp1)  // max_element(), min_element(): 구간 안에서(배열이나 벡터 등) 최대, 최소값을 구하는 함수
* Cp2) [정렬된 배열에서 특정 수의 개수 구하기](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Binary%20Search/BScp2)  // bound 함수(lower_bound, upper_bound), 값이 특정 범위에 속하는 데이터 개수 구할 때 사용하는 문제 
  
 algorithm 헤더의 binary_search(v.begin(), v.end(), target) => 반환 타입은 bool 타입으로, 있으면 1(true), 없으면 0(false)를 반환  
하지만 있는지 없는지 true, false로 반환을 해줄 뿐 어느 인덱스에 있는지는 binary_search 함수로는 알 수 없음  
=> 그래서 사용하는 것이 upper_bound, lower_bound 함수
ex) arr: 1 3 4 4 7 10 10 10 13 17  
lower_bound(arr, arr + 10, 10): 주어진 10보다 크거나 같으면서 제일 작은 값인 인덱스 5의 주소를 반환  
upper_bound(arr, arr + 10, 10): 주어진 10값보다 크면서 제일 작은 값인 인덱스 8의  주소을 반환  
  
### 6. Dynamic Programming (다이나믹 프로그래밍)
* 기초: [탑다운 DP](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/fibonacciTopdown)  // 재귀함수 이용 , [바텀업 DP](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/fibonacciBottomup)  // 반복문 이용
* Cp1) [개미 전사](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp1.cpp)
* Cp2) [1로 만들기](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp2.cpp)  // dp 바텀업 방식 (반복문 이용)
* Cp3) [효울적인 화폐 구성](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp3.cpp)  // vector 테이블 생성 및 특정 숫자로 초기화, 버텀업 dp(반복문) 
* Cp4) [금광](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp4.cpp)  // 2차원 배열에서의 dp, max 3개 이상: max({a, b, c]) 
* Cp5) [병사 배치하기](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp5.cpp)  // LIS 알고리즘: 가장 긴 증가하는 부분 수열: 모든 0<=i<j에 대해 D[i] = max(D[i], D[j] + 1) if array[j] < array[i], 배열을 뒤집는 reverse 함수 
  
### 7. Shortest Path (최단 경로 알고리즘)
* 기초: [다익스트라 알고리즘](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Shortest%20Path/dijkstra.cpp)  // 배열 통째로 초기화 fill_n(변경하려는 원소의 범위 시작주소, 변경하려는 원소 갯수, 변경 값) , [플로이드 워셜](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Shortest%20Path/floydWarshall.cpp)  // 3중 반복문을 이용하므로 보콘 노드가 500개 이하일 때 사용, 2차원 배열 특정 값으로 초기화하는 fill 
* Cp1) [전보](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Shortest%20Path/spcp1.cpp)  // 다익스트라 알고리즘 문제 
* Cp2) [미래 도시](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Shortest%20Path/spcp2.cpp)  // 플로이드 워셜 알고리즘 문제 

### 8. Graph (기타 그래프)
* [서로소 집합 자료 구조](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Graph/disjointSet.cpp)
* [개선된 서로소 집합 자료 구조](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Graph/disjointSet2.cpp)  // 찾기(Find) 함수 개선 => 찾기 함수를 재귀적으로 호출한 뒤 부모 테이블 값을 바로 갱신 
* ex) [서로소 집합을 활용한 사이클 판별](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Graph/graphcp1.cpp)
* [크루스칼 알고리즘](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Graph/kruskal.cpp)  // 최소 신장 트리를 찾는 알고리즘, vector<pair<int, pair<int, int> > > edges;
* [위상 정렬](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Graph/topologySort.cpp)  // 사이클이 없는 방향 그래프의 모든 노드를 방향성에 거르르지 않도록 순서대로 나열한 것
  
### 9. 기타 알고리즘
* [소수 판별 알고리즘](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Algorithm/isPrimeNum.cpp)  // 기본적인 소수 판별, O(X)의 시간복잡도
* [개선된 소수 판별 알고리즘](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Algorithm/isPrimeNum2.cpp)  // 약수의 성질에 따른 개선된 소수 판별(X의 제곱근가지만 확인), O(루트X)의 시간복잡도 
* [에라토스테네스의 체](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Algorithm/sieveOfEratos.cpp)  // 특정한 수의 범위 안에 존재하는 모든 소수를 찾을 때 사용, vector<int> arr(n+1, true); true로 초기화된 1001개의 원소를 가지는 arr 벡터 생성 
* [특정한 합을 가지는 부분 연속 수열 찾기](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Algorithm/twoPointer.cpp)  // 투 포인터 문제
* [구간 합 빠르게 계산하기](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Algorithm/prefixSum.cpp)  // 구간 합 구할 때 많은 쿼리가 주어지는 경우 상수 시간에 계산 가능 
  
### 10.
* [우선순위 큐와 힙](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/Etc/heap.cpp)  // 우선순위 큐 라이브러리 사용 priority_queue, C++은 내림차순 정렬이기 때문에 오름차순 정렬을 하기 위해서는 -를 붙혀야 됨 
* 트리의 순회
* 벨만 포드 알고리즘  // 음수 간선이 포함된 상황에서의 최단 거리 문제에 사용
* 바이너리 인덱스 트리  // 데이터 업데이트가 가능한 상황에서의 구간 합(Interval Sum) 문제
* 최소 공통 조상 알고리즘
  
### 11. 순열과 조합
* 순열  // nPr: 순서를 따지고, 중복을 허용하지 않는다. (순서O, 중복X)
* 중복 순열  // nπr: 순서를 따지고, 중복을 허용한다. (순서O, 중복O)
* 조합  // nCr: 순서를 따지지 않고, 중복을 허용하지 않는다. (순서X, 중복X)
* 중복 조합  // nHr: 순서를 따지지 않고, 중복을 허용한다. (순서X, 중복O)
![image](https://user-images.githubusercontent.com/81340804/226238846-a11f920b-3352-45c9-a8ae-944f22cb8ca5.png)  
  
*조합 경우의 수 구하기 nCr = n-1Cr-1+n-1Cr  // [다리 놓기](https://www.acmicpc.net/problem/1010)
=> 직관적 증명: 사과 5개(12345)가 있고 그 중 3개를 뽑는다. 사과3을 포함하는 경우 4C2, 사과3을 포함하지 않는 경우 4C3  
  
### 12. 연관 컨테이너 (map, set, hash_map, hash_set)  
* 시퀀스 컨테이너: vector, list, deque => 많지 않은 자료를 보관하고 검색 속도가 중요한 경우에 사용  
* 연관 컨테이너: map, set, hash_map, hash_set  
대량의 자료를 보관하고 검색을 빠르게 하고 싶을 때 사용  
어떠한 Key와 짝을 이루어 자료를 보관 => 자료를 넣고 빼고 찾을 때 Key 필요  
Key로 사용하는 값이 중복되지 않을 때 사용  
중복되는 Key를 사용할 때는 컨테이너의 앞에 'multi'를 붙인 multi_map, multi_set, hash_multimap, hash_multiset을 사용  
map, set: 정렬된 상태로 자료 저장, hash_map, hash_set: 정렬이 필요 없으며 빠른 검색을 원할 때  
  
* [map](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/AssociateContainer/map.cpp): 탐색 시간복잡도 O(log n)  
* [hash map](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/AssociateContainer/hashmap.cpp): 탐색 시간복잡도 O(1)  
  
### 13. 문자열  
str.erase(str.begin()); //문자열 "abz'라면 "a"삭제 => "bz"
  
