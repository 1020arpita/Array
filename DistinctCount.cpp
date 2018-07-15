#include <iostream>
using namespace std;

// Counts distinct elements in window of size k
int countWindowDistinct(int win[], int k)
{
	int dist_count = 0;

	// Traverse the window
	for (int i=0; i<k; i++)
	{
	    cout<<"The value of i is: "<<i<<endl;
		// Check if element arr[i] exists in arr[0..i-1]
		int j;
		for (j=0; j<i; j++)
		{
		    cout<<"The value of j before if is: "<<j<<endl;
		if (win[i] == win[j])
		{
		cout<<"The value of j is: "<<j<<endl;
			break;
		}
		}
		if (j==i)
		{
			cout<<"When incremented j was"<<j<<endl;
			dist_count++;
			cout<<"dc = "<<dist_count<<endl;
		}
	}
	return dist_count;
}

// Counts distinct elements in all windows of size k
void countDistinct(int arr[], int n, int k)
{
	// Traverse through every window
	for (int i=0; i<=n-k; i++)
	cout << countWindowDistinct(arr+i, k) << endl;
}

// Driver program
int main()
{
	int arr[] = {1, 2, 1, 3, 4, 2, 3}, k = 4;
	int n = sizeof(arr)/sizeof(arr[0]);
	countDistinct(arr, n, k);
	return 0;
}
