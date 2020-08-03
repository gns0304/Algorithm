//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//
//	string word;
//	cin >> word;
//
//	for (int i = 0; i < word.length(); i++) {
//
//		// ASCII 코드 상 대문자가 작은 값을 가지므로 모든 값이 알파벳으로만 입력되는 것이 조건이므로
//		// 대문자 Z의 이전 값인지 이후 값인지만 비교
//		// 'a'-'A'는 ASCII 코드 상의 대소문자 값의 간극 
//
//		if (word[i] <= 'Z') { 
//			
//			cout << char(word[i] + ('a' - 'A')); 
//		}
//		else {
//			cout << char(word[i] - ('a' - 'A'));
//		}
//	}
//}