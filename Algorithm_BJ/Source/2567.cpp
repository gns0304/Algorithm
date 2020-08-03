//#include<iostream>
//using namespace std;
//	
//int points[102][102] = { 0 };
//
//int main() {
//	// 좌표 구현
//	int inputcase;
//	cin >> inputcase;
//	int x, y;
//	int sum = 0;
//	int line = 0;
//
//	//축 생성 코드
//
//	//for (int i = 0; i < 102; i++) {
//	//	points[0][i] = 0;
//	//	points[i][0] = 1;
//	//	points[101][i] = 1;
//	//	points[i][101] = 1;
//	//}
//
//	
//	// 입력하는 좌표 당 실행
//	for (int i = 0; i < inputcase; i++) {
//		cin >> x >> y;
//		// 포함되는 좌표를 모두 1 처리, 좌표와 배열의 n-1 관계에 주의
//		for (int l = x; l < x + 10; l++) {
//			for (int j = y; j < y + 10; j++) {
//				points[l+1][j+1] = 1;
//			}
//		}
//	}
//	// 배열증가 기준 평행축 방향의 길이 측정
//	for (int l = 0; l < 102; l++) {
//		for (int j = 0; j < 102; j++) {
//			if (points[l][j] == 0 && ((points[l][j - 1] != 0) || (points[l][j + 1] != 0))) {
//				sum++;
//			}
//		}
//	}
//	// 배열증가 기준 수직축 방향의 길이 측정
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
//	// 그리드 출력용
//	//for (int i = 0; i < 102; i++) {
//	//	cout << endl;
//	//	for (int j = 0; j < 102; j++)
//	//		cout << points[i][j] << " ";
//	//}
//
//	// 모서리 변환 코드
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