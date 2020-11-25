#include<iostream>
#include<time.h>

using namespace std;
/*
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	// заполнили массив случайными числами
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20; 
		arr[i] = arr[i] - 10;
	}
	//вывод массива на консоль
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	int sum1 = 0, count1 = 0;
	int sum2 = 0, count2 = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 0) {
			sum1 += arr[i];
			count1++;
		}
		else {
			sum2 += arr[i];
			count2++;
		}
	}
	cout << "There are " << count1 << " positive elements" << endl;
	cout << "Their sum = " << sum1 << endl;

	cout << "There are " << count2 << " negative elements" << endl;
	cout << "Their sum = " << sum2 << endl;
	return 0;
}
*/
/*
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];

	int min;
	// заполнили массив случайными числами
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20 + 1;
	}
	//вывод массива на консоль
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			min = arr[i];
			break;
		}
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0 && arr[i] < min) {
			min = arr[i];
		}
	}
	cout << "Minimum even element = " << min << endl;

	return 0;
}
*/
/*
int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	// заполнили массив случайными числами
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50 + 1;
	}
	//вывод массива на консоль
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int max = arr[0];
	
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "Max elem = " << max << endl;
	return 0;
}
*/
/*
int main() {
	srand(time(NULL));
	const int size = 20;
	int arr[size];
	// заполнили массив случайными числами
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 6;
	}
	//вывод массива на консоль
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	int counter = 0;
	for (int i = 0; i < size; i++) {
		if(arr[i] == 0)
			counter++
	}
	cout << "Number of '
	return 0;
}
*/


void fillArray(int a[], int size);
void printArray(int a[], int size);

double findMultiplication(int a[], int size);

int findIndexMin(int a[], int size);
int findIndexMax(int a[], int size);
void swapElement(int a[], int minIndex, int maxIndex);

double average(int a[], int size);
int calcGreaterAvarage(int a[], int size, double avarage);

int main() {
	srand(time(NULL));
	const int size = 10;
	int arr[size];

	fillArray(arr, size);


	/*cout << "Before swap" << endl;
	printArray(arr, size);
	int minIndex = findIndexMin(arr, size);
	int maxIndex = findIndexMax(arr, size);
	swapElement(arr, minIndex, maxIndex);
	cout << "After swap" << endl;
	printArray(arr, size);*/
	//double mul = findMultiplication(arr, size);
	//cout << "Res = " << mul << endl;
	return 0;
}

double findMultiplication(int a[], int size) {
	double mul = 1;
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 != 0) {
			mul = mul * a[i];
		}
	}
	mul /= 2;
	return mul;
}

int findIndexMin(int a[], int size)
{
	int index = 0;
	int min = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] < min) {
			min = a[i];
			index = i;
		}
	}
	return index;
}

int findIndexMax(int a[], int size)
{
	int index = 0;
	int max = a[0];
	for (int i = 1; i < size; i++) {
		if (a[i] > max) {
			max = a[i];
			index = i;
		}
	}
	return index;
}

void swapElement(int a[], int minIndex, int maxIndex)
{
	int temp = a[minIndex];
	a[minIndex] = a[maxIndex];
	a[maxIndex] = temp;
}

double average(int a[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i];
	}
	// (имя_типа) переменная - приведение переменой к типу имя_типа (double) x
	return (double) sum / 2;
}

int calcGreaterAvarage(int a[], int size, double avarage)
{
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] > average)
			counter++;
	}
	return 0;
}

void fillArray(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = rand() % 100 + 1;
	}
}

void printArray(int a[], int size)
{
	cout << "Array: " << endl;
	for (int i = 0; i < size; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}




