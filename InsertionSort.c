//Algorithm for Insertion Sort
//----------------------------
// Step 1: Run a loop from 1 to N - 1, using a variable i
// Step 2: Take two variables key, j
//		   Set key = A[i], set j = i - 1
//		   Run a loop as long as j >= 0 && key < A[j]
// Step 3: Set A[j + 1] to A[j]
//		   decrement j (j--)
// Step 4: After coming out of inner loop Set A[j + 1] = key


// Time Complexity is O(n) in Best Case and O(n^2) in Worst Case
// Space Complexity is O(1)

#include<stdio.h>
void InsertionSort(int A[],int n) {
	for(int i=1;i<n;i++) { // i is first element in unsorted array
		int j = i-1;   // last element in the array
		int temp = A[i];    // first element in sorted array
		while(j>=0 && A[j] > temp) {  
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = temp;
	}
}
int main() {   // time complexity - O(n^2)
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	InsertionSort(arr,n);
	for(int i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
}