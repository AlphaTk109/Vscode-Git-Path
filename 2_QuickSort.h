#ifndef QuickSort_H_
#define QuickSort_H_
template<typename type>
void QuickSort(type array[], type n)
{
	QuickSort_Circle<type>(array[0], array[n], array);
}
template<class type>
void QuickSort_Circle(type left,type right,type array[])
{
	if (left >= right) return;
	type i, j, temp, base;
	i = left;
	j = right;
	base = array[left];//ȡ����ߵĵ�����Ϊ��׼��
	while (i < j)
	{
		while (array[j] >= base && i < j) j--;
		while (array[i] <= base && i < j) i++;
		if (i < j) {
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	array[left] = array[i];
	array[i] = base;
	QuickSort_Circle<type>(left, i - 1, array);	//�ݹ����
	QuickSort_Circle<type>(i + 1, right, array);//�ݹ��Ҳ�
}




#endif
