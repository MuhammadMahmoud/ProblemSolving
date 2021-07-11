#define Num 4
bool mazeRat(int maze[Num][Num],int x,int y,int sol[Num][Num]);
bool isSafe(int maze[Num][Num],int x,int y);
void print_2d_Arr(int arr[Num][Num]);
int MaxSeqSum(int* arr,int size);
void printArr(int* arr,int size);
//	int res[Num][Num]={{}};
//	int arr[Num][Num]={ { 1, 0, 0, 0 },
//            { 1, 1, 0, 1 },
//            { 0, 1, 0, 0 },
//            { 1, 1, 1, 1 } };
//
//	cout << "Does the rat has an escape"<<endl;
//	mazeRat(arr, 0, 0, res) ? cout<<"yes\n" : cout<<"no\n";
//	print_2d_Arr(res);
