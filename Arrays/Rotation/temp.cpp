// C++ implementation of above approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to check if it is possible 
bool isPossible(int a[], int n) 
{ 
	// step 1 
	if (is_sorted(a, a + n)) { 
		cout << "Possible" << endl; 
	} 

	else { 

		// break where a[i] > a[i+1] 
		bool flag = true; 
		int i; 
		for (i = 0; i < n - 1; i++) { 
			if (a[i] > a[i + 1]) { 
				break; 
			} 
		} 
		// break point + 1 
		i++; 

		// check whether the sequence is 
		// further increasing or not 
		for (int k = i; k < n - 1; k++) { 
			if (a[k] > a[k + 1]) { 
				flag = false; 
				break; 
			} 
		} 

		// If not increasing after break point 
		if (!flag) 
			return false; 

		else { 

			// last element <= First element 
			if (a[n - 1] <= a[0]) 
				return true; 

			else
				return false; 
		} 
	} 
} 

// Driver code 
int main() 
{ 

	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i< n ; i++){
		cin>>arr[i];
	} 

	if (isPossible(arr, n)) 
		cout << "Possible"; 

	else
		cout << "Not Possible"; 

	return 0; 
} 

