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
//	// ���� �迭 �Ҵ�
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
//	//���� ������ ���� ���� �ݴ� ���������� ����
//
//	for (int i = 0; i < N; i++) {
//		
//		for (int j = 0; j < N - 1 - i; j++) {
//			// �������� ����
//			if (arrA[j] > arrA[j + 1]) {
//				swap(arrA[j], arrA[j + 1]);
//			}
//			// �������� ����
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
