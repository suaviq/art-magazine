//#include<iostream>
//using namespace std;
//
//int main() {
//	int array[6] = { 1,3,5,8,2,4 };
//	int n = 6;
//	int max_val = array[0];
//	for (int i = 1; i < n; i++) {
//		if (array[i] > max_val) {
//			max_val = array[i];
//		}
//		for (int rows = max_val; rows >= 1; rows--) { //rows 
//			for (int cols = 0; cols <= 5; cols++) {
//				if (array[cols] >= rows)
//					cout << "* ";
//				else cout << " ";
//			}
//			cout << endl;
//		}
//		for (int cols = 0; cols <= 5; cols++)
//			cout << "--";
//		cout << endl;
//		for (int cols = 1; cols <= 6; cols++)
//			cout << cols << " ";
//		return 0;
//}