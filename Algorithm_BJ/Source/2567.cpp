//#include<iostream>
//using namespace std;
//	
//int points[102][102] = { 0 };
//
//int main() {
//	// ��ǥ ����
//	int inputcase;
//	cin >> inputcase;
//	int x, y;
//	int sum = 0;
//	int line = 0;
//
//	//�� ���� �ڵ�
//
//	//for (int i = 0; i < 102; i++) {
//	//	points[0][i] = 0;
//	//	points[i][0] = 1;
//	//	points[101][i] = 1;
//	//	points[i][101] = 1;
//	//}
//
//	
//	// �Է��ϴ� ��ǥ �� ����
//	for (int i = 0; i < inputcase; i++) {
//		cin >> x >> y;
//		// ���ԵǴ� ��ǥ�� ��� 1 ó��, ��ǥ�� �迭�� n-1 ���迡 ����
//		for (int l = x; l < x + 10; l++) {
//			for (int j = y; j < y + 10; j++) {
//				points[l+1][j+1] = 1;
//			}
//		}
//	}
//	// �迭���� ���� ������ ������ ���� ����
//	for (int l = 0; l < 102; l++) {
//		for (int j = 0; j < 102; j++) {
//			if (points[l][j] == 0 && ((points[l][j - 1] != 0) || (points[l][j + 1] != 0))) {
//				sum++;
//			}
//		}
//	}
//	// �迭���� ���� ������ ������ ���� ����
//	for (int l = 0; l < 102; l++) {
//		for (int j = 0; j < 102; j++) {
//			if (points[j][l] == 0 && ((points[j][l - 1] != 0) || (points[j][l + 1] != 0))) {
//				sum++;
//			}
//		}
//	}
//
//	cout << sum;
//
//	// �׸��� ��¿�
//	//for (int i = 0; i < 102; i++) {
//	//	cout << endl;
//	//	for (int j = 0; j < 102; j++)
//	//		cout << points[i][j] << " ";
//	//}
//
//	// �𼭸� ��ȯ �ڵ�
//	//for (int l = 1; l <= 100; l++) {
//	//	for (int j = 1; j <= 100; j++) {
//
//	//		if (points[l][j] == 1) {
//	//			if (points[l][j + 1] != 0) {
//	//				points[l][j]++;
//	//			}
//	//			if (points[l][j - 1] != 0) {
//	//				points[l][j]++;
//	//			}
//	//			if (points[l + 1][j] != 0) {
//	//				points[l][j]++;
//	//			}
//	//			if (points[l - 1][j] != 0) {
//	//				points[l][j]++;
//	//			}
//	//			if ((points[l][j] == 5 || points[l][j] == 3) && ((points[l - 1][j - 1]) == 0 || (points[l + 1][j - 1]) == 0 || (points[l - 1][j + 1]) == 0 || (points[l + 1][j + 1]) == 0)) {
//	//				points[l][j] = 8;
//	//			}
//	//		}
//	//		
//
//	//	}
//	//}
//
//
//}