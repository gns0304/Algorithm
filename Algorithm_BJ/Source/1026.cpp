//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//	int N;
//	int sum{ 0 };
//	cin >> N;
//
//	// 동적 배열 할당
//	int* arrA = new int [N];
//	int* arrB = new int [N];
//
//	for (int i = 0; i < N; i++) {
//		cin >> arrA[i];
//	}
//
//	for (int i = 0; i < N; i++) {
//		cin >> arrB[i];
//	}
//
//	//버블 정렬을 통한 서로 반대 방향으로의 정렬
//
//	for (int i = 0; i < N; i++) {
//		
//		for (int j = 0; j < N - 1 - i; j++) {
//			// 오름차순 정렬
//			if (arrA[j] > arrA[j + 1]) {
//				swap(arrA[j], arrA[j + 1]);
//			}
//			// 내림차순 정렬
//			if (arrB[j] < arrB[j + 1]) {
//				swap(arrB[j], arrB[j + 1]);
//			}
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		sum += arrA[i] * arrB[i];
//	}
//	
//	cout << sum;
//	
//	delete[] arrA;
//	delete[] arrB;
//
//}
