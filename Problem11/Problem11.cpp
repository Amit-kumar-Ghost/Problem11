//this is two sum problem gendrally , in the we wiil return the index of the array whose sum is equal to the given target :
//the target will given by the user ::
//but it is a simple approach ::
//we  wiil solve this problem using c++ stl ::
#include<iostream>
using namespace std;
int main() {

	int arr[100];
	int N;
	int target;

	cout << "enter the size of the array ::" << endl;
	cin >> N;
	cout << "enter your target ::" << endl;
	cin >> target;
	cout << "Enter element in the array ::" << endl;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int j = 0;
	while (j < N) {
		if (arr[j] + arr[j + 1] == target) {
			cout << " the index is:: {" << arr[j] << "," << arr[j + 1] << "}" << endl;
		}
		j++;
	}
	return 0;
}