//============================================================================
// Name        : ProblemSolving.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "../header/header.h"
#include <string>
using namespace std;

int main() {

	//cout<<"the fib of 9 is : "<<FibDP(9)<<endl;
	string res=lcs_seq("ABCB", "BDCAB");
	cout<<res<<endl;

	return 0;
}
