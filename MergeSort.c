#include<stdio.h>
void Merge(int A[],int n, int low , int high, int mid) {
	int i = low;     // first element of first half
	int j = mid+1;        // first element of second half
	int B[high-low+1];    // Array that stores sorted part
	int k=0;         // initilizing another array to store the sorted array
	while(i<=mid && j<=high) {      // 
		if(A[i] < A[j]) B[k++] = A[i++];
		else B[k++] = A[j++];
	}
	while(i<=mid) B[k++] = A[i++];
	while(j<=high) B[k++] = A[j++];
	k=0;
	for(int i=low;i<=high;i++) {
		A[i] = B[k++];
	}
	
}
void MergeSort(int A[], int n, int low, int high) {
	if(low >= high) return;   // base case
	int mid = (low+high)/2;
	MergeSort(A,n,low,mid);  // to sort the first part of array
	MergeSort(A,n,mid+1,high);  // to sort the second part of the array
	Merge(A,n,low,high,mid);   // function call to merge the array
}
int main() {
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&A[i]);
	}
	MergeSort(A,n,0,n-1);
	for(int i=0;i<n;i++) {
		printf("%d ",A[i]);
	}
}