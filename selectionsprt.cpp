/*
时间复杂度：O(N^2)
*/

template <typename T>
selection_sort(T *array)
{
  for(int i = 0; i < n-1; i++)
  {
    for(int j = i; j < n; j++)
    {
      if(a[j] < a[i])
      {
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
      }
    }
  }
}
