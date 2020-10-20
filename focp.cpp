//#include <cstdlib> 
//#include <ctime> 
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	srand((unsigned)time(0));
//	const int size = 3;
//
//	int tab1[size][size];
//	int tab2[size][size];
//	int result[size][size];
//
//	//wypelnic losowymi liczbami
//	//wypisac
//	//dodawanie macierzy np tab1[0][0] + tab2[0][0]
//
//
//	cout << "first array:\n";
//	for (int i = 0; i < size; i++)
//		for (int j = 0; j < size; j++)
//		{
//			tab1[i][j] = (rand() % 10) + 1;
//			cout << tab1[i][j] << " ";
//		}
//
//	cout << endl;
//
//	cout << "second array:\n";
//	for (int i = 0; i < size; i++)
//		for (int j = 0; j < size; j++)
//		{
//			tab2[i][j] = (rand() % 10) + 1;
//			cout << tab2[i][j] << " ";
//		}
//
//	cout << endl << endl;
//
//	for (int i = 0; i < size; i++)
//		for (int j = 0; j < size; j++)
//		{
//			result[i][j] = tab1[i][j] + tab2[i][j];
//			cout << result[i][j] << " ";
//		}
//	return 0;
//}