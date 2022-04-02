#include <iostream>
#include <string>

using namespace std;

int main() {
	int i, j;
	int height, width;//총 높이, 길이 값
	cin >> height >> width;

	bool** mainBoard = new bool* [height];
	for (i = 0; i < width; i++) {
		mainBoard[i] = new bool[width];
	}//메인보드

	int* heightIndex = new int[height];
	for (i = 0; i < height; i++) {
		cin >> heightIndex[i];
	}//높이 값 + 값 받아오기

	int* widthIndex = new int[width];
	for (i = 0; i < width; i++) {
		cin >> widthIndex[i];
	}//가로 값 + 값 받아오기

	mainBoard[0][0] = { 0, };//초기화

	int operationNum;
	int repeat = 0;

	while (true) {
		for (i = 0; i < height; width++) {
			if (heightIndex[i] * 2 > width) {
				for (j = width - heightIndex[i]; j < heightIndex[i]; j++) {
					mainBoard[i][j] = true;
				}
			}//중간부분 색칠
		}
		for (i = 0; i < width; i++) {
			if (widthIndex[i] * 2 > height) {
				for (j = height - widthIndex[i]; j < widthIndex[i]; j++) {
					mainBoard[i][j] = true;
				}
			}//중간부분 색칠
		}
		repeat++;
		if (repeat == 100)
			break;
		cout << endl;
		cout << endl;
		for (i = 0; i < height; i++) {
			for (j = 0; j < width; j++) {
				cout << mainBoard[i][j];
			}
			cout << endl;
		}
	}

	for (i = 0; i < height; width++) {
		delete[] mainBoard[width];
	}
	delete[] mainBoard;

	delete[] heightIndex;
	delete[] widthIndex;
	return 0;
}
