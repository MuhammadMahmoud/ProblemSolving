/*
 * backTrackingBegin.cpp
 *
 *  Created on: Jul 10, 2021
 *      Author: Dell
 */
#include <iostream>
#include "../header/header.h"
using namespace std;
bool mazeRat(int maze[Num][Num],int x,int y,int sol[Num][Num]){
	if( x== Num-1 && y== Num-1){
		sol[x][y]=1;
		return true;
	}
	if(isSafe(maze, x, y)){
		maze[x][y]=2;
		sol[x][y]=1;
		if( mazeRat(maze, x+1, y, sol)){
			return true;
		}
		if( mazeRat(maze, x-1, y, sol)){
			return true;
		}
		if( mazeRat(maze, x, y+1, sol)){
			return true;
		}
		if( mazeRat(maze, x, y-1, sol)){
			return true;
		}
	}
	return false;
}
bool isSafe (int maze[Num][Num],int x ,int y){
	if(x >=0 && x < Num && y >=0 && y < Num && maze[x][y] == 1){
		return true;
	}
	return false;
}
void print_2d_Arr(int arr[Num][Num]){
	for(int i=0;i<Num;i++){
		for(int j=0;j<Num;j++){
			cout << arr[i][j] << " ";
		}
		cout <<endl;
	}
}
