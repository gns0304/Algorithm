///*
//	���� ������ �̿��� Ǯ��
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
//	// 1000 ���ϱ����� �ﰢ �� �̸� �迭�� ����
//	for (int i = 1; i <= 45; i++) {
//		eureka[i - 1] = (i * (i + 1)) / 2;
//	}
//	cin >> testCase;
//	while (testCase--) {
//		isEureka = false;
//		cin >> num;
//		// 3���� �ﰢ���� �迭���� �ҷ��� �ϳ��� ���� �� �Է��� ���� ���� �� ���� ���� �� �� ��ȯ
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
	�ڿ��� ������ �̿��� Ǯ��
	(�ð� �ʰ� �߻�, �ڿ��� ������ ������ �� ���� �Ϸ��� ������ �ϳ��� �����ϴ� �Ͱ� ����� ��귮�� �䱸��)
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
//		// �ڿ��� num�� 3���� �ڿ����� ������ ���� �����غ���.
//		// a+b+c�� �ÿ��� a=1 �� ��, (b+c)�� ���� �ڵ����� n-1�� 2���� �ڿ����� �����ϴ� ���� ��������.
//		// a=2 �� ���� ����������, (b+c)�� ���� �ڵ����� n-2�� 2���� �ڿ����� �����ϴ� ���� ��������.
//		// �� �� num�� 3���� �ڿ����� ������ �� num/3�� ��ŭ a�� �ִ밪�� ��������.
//		for (int i = 1; i <= (num / 3); i++) {
//			// �Ʒ� for���� n-1�� 2���� �ڿ����� �����ϴ� ��츦 ������.
//			// �̶� �ߺ��Ͽ� ����� ���� ����� ���� �����ϱ� ���Ͽ� j=i�� �����Ѵ�.
//			for (int j = i; j <= ((num - 1) / 2); j++) {
//				// ���Ҿ� �ߺ��Ͽ� ����� ���� ����� ����
//				// 7 = 2+2+3 = 2+3+2�� ���� ����̹Ƿ� a+b+c �� b�� ���� �ٷ� ������ c�� ���� ������ 
//				// �� �̻� �ش� b���� ���� ����� ���� ���� �ʴ´�.
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