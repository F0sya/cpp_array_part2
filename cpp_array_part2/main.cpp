#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	const int FULL_SIZE = 15;
	int arr1[FULL_SIZE], arr2[FULL_SIZE],arr3[FULL_SIZE];
	int size;
	int index1 = 0, index2 = 0;

	cout << "Enter a size of array:";
	do {
		cin >> size;
	} while (size > FULL_SIZE || size <= 0);

	for (int i = 0; i < size; i++) {
		arr1[i] = rand() % 20 - 10;
	}

	cout << "First array before changes:" << endl;

	for (int i = 0; i < size; i++) {
		cout << arr1[i] << " ";
	}

	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			arr2[index1] = arr1[i];
			index1++;
		}
		else {
			arr3[index2] = arr1[i];
			index2++;
		}
	}

	cout << "\n\nSecond array after changes:" << endl;

	for (int i = 0; i < index1; i++) {
		cout << arr2[i] << " ";
	}
	cout << "\n\nThird array after changes:" << endl;

	for (int i = 0; i < index2; i++) {
		cout << arr3[i] << " ";
	}
}