#include<iostream>
using namespace std;

// ����ü�� ������ �ʰ� ���� �ٸ� ���ĺ��� �־����Ƿ� ���ĺ� ���� ��ŭ�� left, right ��Ҹ� ������ �������� �Ҵ�
int alphabet[26][2];
int inputNum;

//������ȸ
void preOrder(int temp){
	
	if (temp == -1) {
		return;
	}
	else {
		// ��Ʈ�� ���� ���
		cout << (char)(temp + 'A');
		//���ʺ��� �ٽ� ������ȸ
		preOrder(alphabet[temp][0]);
		// ��Ʈ�� ���� ���� Ž���� �� �Ǿ����� ������ Ž��
		preOrder(alphabet[temp][1]);
	}

}

void inOrder(int temp) {

	if (temp == -1) {
		return;
	}
	else {
		//������ ���� Ž��
		inOrder(alphabet[temp][0]);
		// ������ ��Ʈ�� ���
		cout << (char)(temp + 'A');
		// �������� Ž��
		inOrder(alphabet[temp][1]);
	}

}

void postOrder(int temp) {

	if (temp == -1) {
		return;
	}
	else {
		// ���� ��带 ���� Ž��
		postOrder(alphabet[temp][0]);
		// ������ ��带 Ž��
		postOrder(alphabet[temp][1]);
		//���� ��带 ���
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