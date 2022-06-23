//============================================================================
// Name        : ProblemSolving.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <cmath>
#include <cstdio>
#include <iostream>
#include "../header/header.h"
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {


	int row,col,num,queries;
	cin>>row>>queries;
	vector<vector<unsigned int> > arr(row);
	for(int i=0;i<row;i++){
		cin>>col;
		for(int j=0;j<col;j++){
			cin>>num;
			arr[i].push_back(num);
		}
	}
	for(int i=0;i<queries;i++){
		cin>>num;
		cin>>col;
		cout<<arr[num][col]<<endl;
	}
	return 0;
}
