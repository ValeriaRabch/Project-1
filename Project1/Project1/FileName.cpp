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

int main() {
	int size = 10;
	int* p = new int[size];
	Fulling(p, size);
	Print(p, size);
}