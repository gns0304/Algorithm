//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//	int inputCase;
//	int lastNation;
//	cin >> inputCase;
//
//	// ���� ������ �迭 �Ҵ� (���� ������ ��� �� �ݺ����� ���� �Ҵ�)
//	int** arr = new int* [inputCase];
//	for (int i = 0; i < inputCase; i++) {
//		arr[i] = new int[3];
//	}
//
//	// �������迭�� �Է°� ����
//	for (int i = 0; i < inputCase; i++) {
//		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
//	}
//
//	// �������� �˰����� ���� �� ����
//	for (int i = 0; i < inputCase; i++) {
//		for (int j = 0; j < inputCase - 1 - i; j++) {
//			if (arr[j][2] < arr[j + 1][2]) {
//				for (int k = 0; k <= 2; k++) {
//					swap(arr[j][k], arr[j + 1][k]);
//				}
//			}
//		}
//	}
//
//	// 1~3���� ������ ��� ���� ���� �����ؼ��� �ƴϵǹǷ� 
//	// ��� ���� ��� ���� �� �������� �������� ���� ������ 3���� ������ �ٲ�
//	if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0]) {
//		for (int i = 3; i < inputCase; i++) {
//			if (arr[2][0] != arr[i][0]) {
//				for (int k = 0; k <= 2; k++) {
//					swap(arr[2][k], arr[i][k]);
//				}
//				// ���ǿ� �ش��ϸ� �ٷ� �ݺ��� Ż��
//				break;
//			}
//		}
//	}
//
//	// 1~3�� ���
//	for (int i = 0; i < 3; i++) {
//		cout << arr[i][0] << " " << arr[i][1] << " "<< endl;
//	}
//
//	// ���� ������ �迭 �Ҵ� ���� (�ݺ����� ���� �迭 ���� �迭�� �Ҵ� ����)
//	for (int i = 0; i < inputCase; i++) {
//		delete[] arr[i];
//	}
//	delete[] arr;
//
//
//}
