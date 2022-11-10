#include <iostream> 
using namespace std;

int main()
{
	const int n = 5;
	int array[n] = {123, 879, 27, 89, 42};
 
	for (int s = 0; s < n - 1; ++s)
	{
		int m = s;
        	int c
		for (c = s + 1; c < n; ++c)
		{
			if (array[c] < array[m])
				m = c;
		}
		swap(array[s], array[m]);
	}
 
	for (int i = 0; i < n; ++i)
		cout << array[i] << ' ';
 
	return 0;
}
