//时间复杂度
/*
最差空间复杂度：O(N*K)
最差时间复杂度：O(N^2)
平均时间复杂度：O(N+K)
*/

template <typename T>
void counting_sort(T *arry,T *sorted_arry,T n)
{
	//==============arrymax=========
	int arrymax = 0, arrymin = 0;
	for(int i = 0;i < n;i++)
	{
		if(arry[i] > arrymax)
		{
			arrymax = arry[i];
		}
	}
	int *count_arry = new int[arrymax+1];
	//============countsort===========

	for(i = 0; i <= arrymax; i++)
	{
		count_arry[i] = 0;
	}
	for(int j = 0; j < n; j++)
	{
		count_arry[arry[j]]++;
	}
	for(int k = 1; k <= arrymax; k++)
	{
		count_arry[k] += count_arry[k-1];
	}
	for(i = n-1; i >= 0; i--)
	{
		sorted_arry[ count_arry[ arry[i] ]-1 ] = arry[i];
		count_arry[ arry[i] ] -= 1;
	}

	delete [] count_arry;
}
