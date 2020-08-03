///*
//배열을 통한 좌표 구현
//(2563번 문제와 동일 유형)
//*/
//
//#include<iostream>
//using namespace std;
//
//int main() {
//	// 좌표 구현
//	bool grid[100][100] = {false};
//	int left_x, left_y, right_x, right_y;
//	int sum = 0;
//	
//	// 입력하는 좌표 당 실행
//	for (int i = 0; i < 4; i++) {
//		cin >> left_x >> left_y >> right_x >> right_y;
//		// 포함되는 좌표를 모두 1 처리, [x,x-1]와 [y,y-1]가 좌표에 해당함에 주의
//		for (int i = left_x; i < right_x; i++) {
//			for (int j = left_y; j < right_y; j++) {
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
//
