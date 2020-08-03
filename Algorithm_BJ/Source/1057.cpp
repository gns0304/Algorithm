//#include <iostream>
//using namespace std;
//
//int main() {
//
//
//	int N, kim, lim;
//	int round{ 0 };
//	cin >> N >> kim >> lim;
//
//	while (kim != lim) {
//
//		// 트리 구조에서 부모 노드로 가는 그림을 그려 인덱스 간의 규칙을 찾아볼 것
//		// 이진트리에서 자식노드를 n = 1, 2, 3… 으로 하였을 때
//		// 부모노드 또한 n = 1, 2, 3…으로 붙였을 때 자식노드(C)와 부모노드(P)의 관계는 P = C/2 + C%2 
//		kim = kim / 2 + kim % 2;
//		lim = lim / 2 + lim % 2;
//		round++;
//
//	}
//
//	cout << round;
//
//}