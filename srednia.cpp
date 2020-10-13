#include<iostream>
using namespace std;
int main()
{
	cout << "How many numbers do you want to enter? " << endl;
	int n;
	cin >> n;
	cout << "Enter your numbers: "<<endl;
	float sum = 0;
	for (int i = 0; i < n; i++) {
		float new_number;
		cin >> new_number;
		sum += new_number;
	}

	cout <<"Arithmetic mean: " <<float(sum / n)<< endl;

	system("pause>0");
}