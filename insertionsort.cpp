//插入排序
/*
  时间复杂度：O(N^2) = 2+3+4+……+N
*/

/*伪代码
void insertionSort(ElementType A[] , int N)
{
  int j , p;
  Element Type Tmp;
  for( p = 1; p < N; p++)
  {
    Tmp = A[ p ];
    for( j = P; j > 0 && A[ j - 1 ] > Tmp; j--)
      A[ j ] = A[ j - 1 ];
    A[ j ] = Tmp;
  }
}
*/

//c++代码
template<typename T> //整數或浮點數皆可使用,若要使用物件(class)時必須設定大於(>)的運算子功能
void insertion_sort(T *arr, int len)
{
  int i, j, temp;
	for (i = 1; i < len; i++)
  {
     temp = arr[i];
	   for (j = i-1; j >= 0 && arr[j] > temp; j--)
         arr[j+1] = arr[j];

     arr[j+1] = temp;
	}
}
