#include <string>
using namespace std;
#define Num 4
#define StartIndex 0
#define EndIndex 1
#define MaxSum 2


bool mazeRat(int maze[Num][Num],int x,int y,int sol[Num][Num]);
bool isSafe(int maze[Num][Num],int x,int y);
void print_2d_Arr(int arr[Num][Num]);
int* MaxSeqSum(int* arr,int size);
void printArr(int* arr,int size);
int FibDP(int num);
string lcs_seq(string x,string y);
//	int res[Num][Num]={{}};
//	int arr[Num][Num]={ { 1, 0, 0, 0 },
//            { 1, 1, 0, 1 },
//            { 0, 1, 0, 0 },
//            { 1, 1, 1, 1 } };
//
//	cout << "Does the rat has an escape"<<endl;
//	mazeRat(arr, 0, 0, res) ? cout<<"yes\n" : cout<<"no\n";
//	print_2d_Arr(res);
/**************Another main*******************/
//	int arr[10]={31,-41,59,26,-53,58,97,-93,-23,84};
//	int *res=MaxSeqSum(arr, 10);
//	cout<< "The Max sequence is : "<<res[MaxSum]<<endl<<
//			" The Start index is : "<<res[StartIndex]<<endl<<
//			"The End index is : "<<res[EndIndex]<<endl;
