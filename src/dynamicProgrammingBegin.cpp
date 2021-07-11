/*
 * dynamicProgrammingBegin.cpp
 *
 *  Created on: Jul 11, 2021
 *      Author: Dell
 */
#include <iostream>
#include "../header/header.h"
using namespace std;
int FibDP(int num){
	int arr[num+1];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<num+1;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	return arr[num];
}

