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
* [DFS](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DFS%20%26%20BFS/DFS.cpp)  // 재귀 함수를 이용한 dfs
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
  
### 6. Dynamic Programming (다이나믹 프로그래밍)
* 기초: [탑다운 DP](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/fibonacciTopdown)  // 재귀함수 이용 , [바텀업 DP](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/fibonacciBottomup)  // 반복문 이용
* Cp1) [개미 전사](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp1.cpp)
* Cp2) [1로 만들기](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp2.cpp)  // dp 바텀업 방식 (반복문 이용)
* Cp3) [효울적인 화폐 구성](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp3.cpp)  // vector 테이블 생성 및 특정 숫자로 초기화, 버텀업 dp(반복문) 
* Cp4) [금광](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp4.cpp)  // 2차원 배열에서의 dp, max 3개 이상: max({a, b, c]) 
* Cp5) [병사 배치하기](https://github.com/Jung-kr/Algorithm-Basic-Problem/blob/main/DP/dpcp5.cpp)  // LIS 알고리즘: 가장 긴 증가하는 부분 수열: 모든 0<=i<j에 대해 D[i] = max(D[i], D[j] + 1) if array[j] < array[i], 배열을 뒤집는 reverse 함수 
  
