#include<iostream>
using namespace std;

void Fulling(int* p, int size) {
	for (int i = 0; i < size; i++) {
		p[i] = rand() % 100;
	}
}

void Print(int* p, int size) {
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
}

int MinIndex(int* p, int size) {
	int min = p[0]; int a;
	for (int i = 0; i < size; i++) {
		if (min > p[i]) {
			min = p[i];			a = i;
		}
	}
	return a;
}

void Delete(int* p) {
	delete[] p;
}

int main() {
	int size = 10, index;
	int* p = new int[size];
	Fulling(p, size);
	Print(p, size);
	index = MinIndex(p, size);
	Delete(p);
}