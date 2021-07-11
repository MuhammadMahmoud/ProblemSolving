/*
 * greedy.cpp
 *
 *  Created on: Jul 11, 2021
 *      Author: Dell
 */
#include <iostream>
#include "../header/header.h"
using namespace std;
int* MaxSeqSum(int* arr,int size){
	int *res=new int[3];
	res[MaxSum]=res[StartIndex]=res[EndIndex]=0;
	int CurSum=0;
	for(int i=0;i<size;i++){
		CurSum+=arr[i];
		if(CurSum < 0){
			CurSum=0;
			res[StartIndex]=i+1;
		}
		if(res[MaxSum] < CurSum){
			res[MaxSum]=CurSum;
			res[EndIndex]=i;
		}
	}
	return res;
}
void printArr(int* arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

