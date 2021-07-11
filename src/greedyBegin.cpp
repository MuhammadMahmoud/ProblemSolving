/*
 * greedy.cpp
 *
 *  Created on: Jul 11, 2021
 *      Author: Dell
 */
#include <iostream>
#include "../header/header.h"
using namespace std;
int MaxSeqSum(int* arr,int size){
	int CurSum=0,MaxSum=0;
	for(int i=0;i<size;i++){
		CurSum+=arr[i];
		if(CurSum < 0){
			CurSum=0;
		}
		if(MaxSum < CurSum){
			MaxSum=CurSum;
		}
	}
	return MaxSum;
}
void printArr(int* arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

