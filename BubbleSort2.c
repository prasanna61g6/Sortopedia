// Algorithm for Bubble Sort
// --------------------------
// step 1 : Run a loop using variable from 0 to n-1
// ste 2 : Run a loop using a variable j from 0 to n-i-1
// step 3 : Compare the elements at A[j] and A[j-1]
//          if A[j-1] > A[j], then we perform swapping

// Time Complexity is O(n^2)
// Space complexity is O(1)

#include<stdio.h>
	void BubbleSort(int A[], int n){ 
	//do (n-1) passes
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(A[j-1] > A[j]){
			    int	temp = A[j-1];
				A[j-1] = A[j];
				A[j] = temp;
			}
		}
	}
}
int main() {   
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	BubbleSort(arr,n);
	for(int i=0;i<n;i++) {
		printf("%d ",arr[i]);
	}
}
