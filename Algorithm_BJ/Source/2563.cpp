/*
배열을 통한 좌표 구현
*/

//#include<iostream>
//using namespace std;
//
//int main() {
//	// 좌표 구현
//	bool grid[100][100] = {false};
//	int inputcase;
//	cin >> inputcase;
//	int x, y;
//	int sum = 0;
//	
//	// 입력하는 좌표 당 실행
//	for (int i = 0; i < inputcase; i++) {
//		cin >> x >> y;
//		// 포함되는 좌표를 모두 1 처리, [x,x-1]와 [y,y-1]이 좌표를 해당함에 주의
//		for (int i = x; i < x + 10; i++) {
//			for (int j = y; j < y + 10; j++) {
//				grid[i][j] = true;
//			}
//		}
//	}
//	// 좌표 상에서 1 처리된 개수 확인
//	for (int i = 0; i < 100 ; i++) {
//		for (int j = 0; j < 100; j++) {
//			if (grid[i][j] == true) {
//				sum += 1;
//			}
//		}
//	}
//	// 넓이 반환
//	cout << sum;
//}


/*
급수 형식으로 Δx = 1 마다의 높이를 곱한 넓이 합 구현 
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
//	// x좌표를 기준으로 오름차순 정렬
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
//	//적분 과정을 유도하는 것과 비슷하게 닫힌 구간 [0, 100]에 대해서 급수를 계산
//
//	bool isAnyIncluded;
//	int sum{ 0 };
//
//	for (int i = 0; i < 100; i++) {
//		// 구간은 [i, i+1]
//		isAnyIncluded = false;
//		int* isIncluded = new int[inputCase];
//		for (int j = 0; j < inputCase; j++) {
//			isIncluded[j] = -1;
//		}
//
//		// 1. 구간에[i, i+1]에 포함되는 x좌표를 가진 색종이가 존재하는가
//		for (int j = 0; j < inputCase; j++) {
//			if ( ((points[j]).left_x <= i) && (i+1 <= (points[j]).right_x)){
//				isIncluded[j] = points[j].right_y;
//				isAnyIncluded = true;
//			}
//		}
//		// 2. 구간에[i, i+1]에 포함되는 x좌표를 가진 색종이가 존재할 떄, y 좌표값의 최소와 최대값 구하기
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
