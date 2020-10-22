////#include <iostream>
////using namespace std;
////
////int fibonacci()
////{
////    int n, t1 = 0, t2 = 1, nextterm = 0;
////
////    cout << "enter the number of terms: ";
////    cin >> n;
////
////    cout << "fibonacci series: ";
////
////    for (int i = 1; i <= n; ++i)
////    {
////        // prints the first two terms.
////        if (i == 1)
////        {
////            cout << " " << t1;
////            continue;
////        }
////        if (i == 2)
////        {
////            cout << t2 << " ";
////            continue;
////        }
////        nextterm = t1 + t2;
////        t1 = t2;
////        t2 = nextterm;
////
////        cout << nextterm << " ";
////    }
////    return nextterm;
//    //fibonacci series using recursion 
//#include<iostream> 
//    using namespace std;
//
//    int fib(int n) 
//    {
//        if (n <= 1) 
//            return n;
//            return fib(n - 1) + fib(n - 2);
//   
//    }
//
//    int main()
//    {
//        int n;
//        cout << "enter n: " << endl;
//        cin >> n;
//        cout << fib(n);
//        return 0;
//    }
//
//    // this code is contributed 
//    // by akanksha rai 