#include<iostream>
using namespace std;

int main() {
	int array[6] = { 1,3,5,8,2,4 };
	int n = 6;
	int max_val = array[0];
	for (int i = 1; i < n; i++) {
		if (array[i] > max_val) {
			max_val = array[i];
}