/*
 * dynamicProgrammingBegin.cpp
 *
 *  Created on: Jul 11, 2021
 *      Author: Dell
 */
#include <iostream>
#include "../header/header.h"
#include <string>
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
string lcs_seq(string x,string y){
	string res="";
	int m=x.length();
	int n=y.length();
	int c[n][m];
	for(int i=0;i<n;i++){
		c[0][i]=0;
	}
	for(int j=0;j<n;j++){
		c[0][j]=0;
	}
	for(int i=1;i<m;i++){
		for(int j=1;j<n;j++){
			if(x[i]==y[j]){
				c[i][j]=c[i-1][j-1]+1;
				res+=y[j];
			}
			else{
				if(c[i-1][j] < c[i][j-1]){
					c[i][j]=c[i][j-1];
				}
				else{
					c[i][j]=c[i-1][j];
				}
			}
		}
	}

	return res;
}
