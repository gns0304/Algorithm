///*
//�迭�� ���� ��ǥ ����
//(2563�� ������ ���� ����)
//*/
//
//#include<iostream>
//using namespace std;
//
//int main() {
//	// ��ǥ ����
//	bool grid[100][100] = {false};
//	int left_x, left_y, right_x, right_y;
//	int sum = 0;
//	
//	// �Է��ϴ� ��ǥ �� ����
//	for (int i = 0; i < 4; i++) {
//		cin >> left_x >> left_y >> right_x >> right_y;
//		// ���ԵǴ� ��ǥ�� ��� 1 ó��, [x,x-1]�� [y,y-1]�� ��ǥ�� �ش��Կ� ����
//		for (int i = left_x; i < right_x; i++) {
//			for (int j = left_y; j < right_y; j++) {
//				grid[i][j] = true;
//			}
//		}
//	}
//	// ��ǥ �󿡼� 1 ó���� ���� Ȯ��
//	for (int i = 0; i < 100 ; i++) {
//		for (int j = 0; j < 100; j++) {
//			if (grid[i][j] == true) {
//				sum += 1;
//			}
//		}
//	}
//	// ���� ��ȯ
//	cout << sum;
//}
//
