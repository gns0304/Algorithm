/*
�迭�� ���� ��ǥ ����
*/

//#include<iostream>
//using namespace std;
//
//int main() {
//	// ��ǥ ����
//	bool grid[100][100] = {false};
//	int inputcase;
//	cin >> inputcase;
//	int x, y;
//	int sum = 0;
//	
//	// �Է��ϴ� ��ǥ �� ����
//	for (int i = 0; i < inputcase; i++) {
//		cin >> x >> y;
//		// ���ԵǴ� ��ǥ�� ��� 1 ó��, [x,x-1]�� [y,y-1]�� ��ǥ�� �ش��Կ� ����
//		for (int i = x; i < x + 10; i++) {
//			for (int j = y; j < y + 10; j++) {
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


/*
�޼� �������� ��x = 1 ������ ���̸� ���� ���� �� ���� 
*/

//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//
//struct Point
//{
//	int left_x;
//	int left_y;
//	int right_x;
//	int right_y;
//};
//
//int main() {
//	
//	int inputCase;
//	cin >> inputCase;
//
//	Point* points = new Point[inputCase];
//
//	for (int i = 0; i < inputCase; i++) {
//		cin >> points[i].left_x >> points[i].left_y;
//		points[i].right_x = points[i].left_x + 10;
//		points[i].right_y = points[i].left_y + 10;
//	}
//	
//	// x��ǥ�� �������� �������� ����
//	for (int i = 0; i < inputCase; i++) {
//		for (int j = 0; j < inputCase - i - 1; j++) {
//			if (points[j].left_x > points[j + 1].left_x) {
//				swap(points[j].left_x, points[j + 1].left_x);
//				swap(points[j].right_x, points[j + 1].right_x);
//				swap(points[j].left_y, points[j + 1].left_y);
//				swap(points[j].right_y, points[j + 1].right_y);
//			}
//		}
//	}
//
//	//���� ������ �����ϴ� �Ͱ� ����ϰ� ���� ���� [0, 100]�� ���ؼ� �޼��� ���
//
//	bool isAnyIncluded;
//	int sum{ 0 };
//
//	for (int i = 0; i < 100; i++) {
//		// ������ [i, i+1]
//		isAnyIncluded = false;
//		int* isIncluded = new int[inputCase];
//		for (int j = 0; j < inputCase; j++) {
//			isIncluded[j] = -1;
//		}
//
//		// 1. ������[i, i+1]�� ���ԵǴ� x��ǥ�� ���� �����̰� �����ϴ°�
//		for (int j = 0; j < inputCase; j++) {
//			if ( ((points[j]).left_x <= i) && (i+1 <= (points[j]).right_x)){
//				isIncluded[j] = points[j].right_y;
//				isAnyIncluded = true;
//			}
//		}
//		// 2. ������[i, i+1]�� ���ԵǴ� x��ǥ�� ���� �����̰� ������ ��, y ��ǥ���� �ּҿ� �ִ밪 ���ϱ�
//
//		if (isAnyIncluded == false) {
//			sum += 100;
//		}
//		else {
//			int max = -1;
//			int min = 101;
//			for (int k = 0; k < inputCase; k++) {
//				if (max < isIncluded[k]) {
//					max = isIncluded[k];
//				}
//				if ((isIncluded[k] >= 0) && (min >= (isIncluded[k]-10))) {
//					min = isIncluded[k] - 10;
//				}
//			}
//			sum += (min + (100 - max));
//		}
//		delete[] isIncluded;
//	}
//	cout << 10000 - sum <<endl;
//	delete [] points;
//}
