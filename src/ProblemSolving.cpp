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
	int arr[10]={31,-41,59,26,-53,58,97,-93,-23,84};
	int *res=MaxSeqSum(arr, 10);
	cout<< "The Max sequence is : "<<res[MaxSum]<<endl<<
			" The Start index is : "<<res[StartIndex]<<endl<<
			"The End index is : "<<res[EndIndex]<<endl;
	return 0;
}
