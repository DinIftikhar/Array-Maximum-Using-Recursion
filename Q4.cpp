#include <iostream>
using namespace std;
int maximum(int array[], int index)
{
	if (index < 0)
		return 1;
	else if (array[index] >= maximum(array, index - 1))
		return array[index];
	else
		return maximum(array, index - 1);
}
int main()
{
	int array[5] = { 2,7,1,5,9 };
	int index = 4;
	cout << maximum(array, index);
	return 0;

}