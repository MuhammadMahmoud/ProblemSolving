//============================================================================
// Name        : ProblemSolving.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "../header/header.h"
using namespace std;

int main() {
//	cout << "!!!Hello World!!!" << endl;
	int res[Num][Num]={{}};
	int arr[Num][Num]={ { 1, 0, 0, 0 },
            { 1, 1, 0, 1 },
            { 0, 1, 0, 0 },
            { 1, 1, 1, 1 } };

	cout << "Does the rat has an escape"<<endl;
	mazeRat(arr, 0, 0, res) ? cout<<"yes\n" : cout<<"no\n";
	print_2d_Arr(res);
	return 0;
}
