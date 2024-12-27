#include <iostream>
using namespace std;

int sumtotal(int list[], int N)
{
	int tot = 0;
	for (int i = 1; i <= N; i++)
	{
		tot = tot + list[(i - 1)];
	}
	return tot;
}

double avgtotal(int list[], double N)
{
	return sumtotal(list, N) / N;
}


void bubble_sort_1(int list[], int N)
{
	int temp = 0;
	for (int i = N - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (list[j] > list[j + 1])
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}

void bubble_sort_2(int list[], int N)
{
	int temp = 0;
	for (int i = N - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (list[j] < list[j + 1])
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int length = 0;
	int array = 0;

	cout << "숫자의 수:";
	cin >> length;

	int* numbers = new int[length];

	for (int i = 1; i <= length; i++)
	{
		cout << i << "번째 숫자:";
		cin >> numbers[(i - 1)];
	}

	cout << "총합:" << sumtotal(numbers,length) << endl;
	cout << "평균:" << avgtotal(numbers,length) << endl;
	
	cout << "오름차순: 1" << endl;
	cout << "내림차순: 2" << endl;

	cin >> array;

	if (array == 1)
	{
		bubble_sort_1(numbers, length);
		for (int i = 0; i < length; i++)
		{
			cout << numbers[i] << ",";
		}
	}

	if (array == 2)
	{
		bubble_sort_2(numbers, length);
			for (int i = 0; i < length; i++)
			{
				cout << numbers[i] << ",";
			}
	}

	delete []numbers;
	return 0;
}