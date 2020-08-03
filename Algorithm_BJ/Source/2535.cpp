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
//	// 동적 이차원 배열 할당 (이중 포인터 사용 및 반복문을 통한 할당)
//	int** arr = new int* [inputCase];
//	for (int i = 0; i < inputCase; i++) {
//		arr[i] = new int[3];
//	}
//
//	// 이차원배열에 입력값 저장
//	for (int i = 0; i < inputCase; i++) {
//		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
//	}
//
//	// 버블정렬 알고리즘을 통한 값 정렬
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
//	// 1~3위의 국가가 모두 같은 경우는 존재해서는 아니되므로 
//	// 모두 같을 경우 다음 차 순위에서 동일하지 않은 국가를 3위의 순위와 바꿈
//	if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0]) {
//		for (int i = 3; i < inputCase; i++) {
//			if (arr[2][0] != arr[i][0]) {
//				for (int k = 0; k <= 2; k++) {
//					swap(arr[2][k], arr[i][k]);
//				}
//				// 조건에 해당하면 바로 반복문 탈출
//				break;
//			}
//		}
//	}
//
//	// 1~3위 출력
//	for (int i = 0; i < 3; i++) {
//		cout << arr[i][0] << " " << arr[i][1] << " "<< endl;
//	}
//
//	// 동적 이차원 배열 할당 해제 (반복문을 통한 배열 내부 배열도 할당 해제)
//	for (int i = 0; i < inputCase; i++) {
//		delete[] arr[i];
//	}
//	delete[] arr;
//
//
//}
