#include <iostream> 
using namespace std;

int main()
{
	const int n = 5;
	int array[n] = {123, 879, 27, 89, 42};
 
	for (int i = 0; i < n - 1; ++i){
		int j = i;
 
		for (int k = i + 1; k < n; ++k){
			if (array[k] < array[j])
				j = k;
		}
 
		swap(array[i], array[j]);
	}
 
	for (int m = 0; m < n; ++m)
		cout << array[m] << ' ';
 
	return 0;
}
