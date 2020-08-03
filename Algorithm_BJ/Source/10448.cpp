///*
//	직접 대입을 이용한 풀이
//*/
//
//#include<iostream>
//using namespace std;
//
//int testCase;
//int eureka[45];
//int num;
//bool isEureka = false;
//
//int main() {
//	// 1000 이하까지의 삼각 수 미리 배열로 생성
//	for (int i = 1; i <= 45; i++) {
//		eureka[i - 1] = (i * (i + 1)) / 2;
//	}
//	cin >> testCase;
//	while (testCase--) {
//		isEureka = false;
//		cin >> num;
//		// 3개의 삼각수를 배열에서 불러와 하나씩 대입 후 입력한 수와 같을 시 대입 종료 후 값 반환
//		for (int i = 0; i < 45; i++) {
//			for (int j = 0; j < 45; j++) {
//				for (int k = 0; k < 45; k++) {
//					if (eureka[i] + eureka[j] + eureka[k] == num) {
//						cout << 1 << endl;
//						isEureka = true;
//						break;
//					}
//				}
//				if (isEureka == true) {
//					break;
//				}
//			}
//			if (isEureka == true) {
//				break;
//			}
//		}
//		if (isEureka == false) {
//			cout << 0 << endl;
//		}
//	}
//}

/*
	자연수 분할을 이용한 풀이
	(시간 초과 발생, 자연수 분할을 하지만 그 다음 일련의 과정은 하나씩 대입하는 것과 비슷한 계산량을 요구함)
*/

//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int testCase;
//	int num;
//	int eureka[45];
//	bool isEureka = false;
//	cin >> testCase;
//
//	for (int i = 1; i <= 45; i++) {
//		eureka[i - 1] = (i * (i + 1)) / 2;
//	}
//
//
//	while (testCase--) {
//		isEureka = false;
//		cin >> num;
//		// 자연수 num을 3개의 자연수로 분할할 때를 생각해보자.
//		// a+b+c의 꼴에서 a=1 일 때, (b+c)의 값은 자동으로 n-1를 2개의 자연수로 분할하는 경우와 같아진다.
//		// a=2 일 때도 마찬가지로, (b+c)의 값은 자동으로 n-2를 2개의 자연수로 분할하는 경우와 같아진다.
//		// 이 때 num을 3개의 자연수로 분할할 때 num/3의 몫만큼 a의 최대값이 정해진다.
//		for (int i = 1; i <= (num / 3); i++) {
//			// 아래 for문은 n-1을 2개의 자연수로 분할하는 경우를 만들어낸다.
//			// 이때 중복하여 경우의 수를 만드는 것을 방지하기 위하여 j=i로 시작한다.
//			for (int j = i; j <= ((num - 1) / 2); j++) {
//				// 더불어 중복하여 경우의 수를 만드는 경우는
//				// 7 = 2+2+3 = 2+3+2와 같은 경우이므로 a+b+c 중 b의 값이 바로 직전의 c의 값과 같으면 
//				// 더 이상 해당 b값에 대한 경우의 수를 세지 않는다.
//				if (j == num - i - (j - 1)) {
//					break;
//				}
//				else {
//					for (int k = 0; k < 45; k++) {
//						if (isEureka == true) {
//							break;
//						}
//						for (int l = 0; l < 45; l++){
//							if (isEureka == true) {
//								break;
//							}
//							for (int m = 0; m < 45; m++){
//								if (isEureka == true) {
//									break;
//								}
//								if (i == eureka[k] && j == eureka[l] && (num - i - j) == eureka[m]) {
//									cout << 1 << endl;
//									isEureka = true;
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//		if (isEureka == false) {
//			cout << 0 << endl;
//		}
//	}
//}