#include<iostream>
using namespace std;

// 구조체를 만들어내지 않고 서로 다른 알파벳이 주어지므로 알파벳 개수 만큼의 left, right 요소를 저장할 공간만을 할당
int alphabet[26][2];
int inputNum;

//전위순회
void preOrder(int temp){
	
	if (temp == -1) {
		return;
	}
	else {
		// 루트를 먼저 출력
		cout << (char)(temp + 'A');
		//왼쪽부터 다시 전위순회
		preOrder(alphabet[temp][0]);
		// 루트에 대해 왼쪽 탐색이 다 되었으면 오른쪽 탐색
		preOrder(alphabet[temp][1]);
	}

}

void inOrder(int temp) {

	if (temp == -1) {
		return;
	}
	else {
		//왼쪽을 먼저 탐색
		inOrder(alphabet[temp][0]);
		// 현재의 루트를 출력
		cout << (char)(temp + 'A');
		// 오른쪽을 탐색
		inOrder(alphabet[temp][1]);
	}

}

void postOrder(int temp) {

	if (temp == -1) {
		return;
	}
	else {
		// 왼쪽 노드를 먼저 탐색
		postOrder(alphabet[temp][0]);
		// 오른쪽 노드를 탐색
		postOrder(alphabet[temp][1]);
		//현재 노드를 출력
		cout << (char)(temp + 'A');
	}

}

int main() {

	cin >> inputNum;

	for (auto i = 0; i < inputNum; i++) {
		char parent, left, right;
		cin >> parent >> left >> right;

		if (left == '.') {
			alphabet[parent - (int)'A'][0] = -1;
		}
		else {
			alphabet[parent - (int)'A'][0] = left - (int)'A';
		}

		if (right == '.') {
			alphabet[parent - (int)'A'][1] = -1;
		}
		else {
			alphabet[parent - (int)'A'][1] = right - (int)'A';
		}
	}

	preOrder(0);
	cout << endl;
	inOrder(0);
	cout << endl;
	postOrder(0);

}