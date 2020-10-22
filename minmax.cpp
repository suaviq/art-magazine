//#include<iostream>
//using namespace std;
//
//int main()
//{
//	
//	int n;
//	cout << "give me size of the array" << endl;
//	cin >> n;
//	int *array = new int[n];
//	for (int i = 0; i < n; i++) {
//		int val;
//		cout << "give me " << i << " value of an array" << endl;
//		cin >> val;
//		array[i] = val;
//	}
//
//	int max_val = array[0];
//	for (int i = 1; i < n; i++) {
//		if (array[i] > max_val) {
//			max_val = array[i];
//		}
//	}
//	cout << "Max value is " << max_val << endl;
//
//	int min_val = array[0];
//	for (int i = 1; i < n; i++) {
//		if (array[i] < min_val) {
//			min_val = array[i];
//		}
//	}
//	cout << "Min value is " << min_val << endl;
//
//	delete array;
//	system("pause>0");
//
//
//}