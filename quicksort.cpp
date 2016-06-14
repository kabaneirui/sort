//快排

template <typename T>
void quick_sort(T array[],int left,int right)
{
  while((right-left) >= 1)
  {
    T pivot = array[left];
    int i = left , j = right;
    while(i < j)
    {
      while(i < j && array[j] >= pivot)
      {
        j--;
      }
      if( i < j )
      {
        array[i] = array[j] ;
        array[j] = pivot;
      }

      while (i < j && array[i] <= pivot) {
        i++;
      }
      if( i < j )
      {
        array[j] = array[i] ;
        array[i] = pivot;
      }
      quick_sort(array, left, i-1 );
      quick_sort(array, j+1, right);
    }

  }
}
