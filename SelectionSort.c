//Algorithm for Selection Sort
//----------------------------
// Step 1: Run a loop from 0 to N  using i variable
// Step 2: Create an integer variable called
//	     	min_index and store i value in it
//	    	Run a loop from i + 1 to N  using a variable j
// Step 3:	Compare if
//				A[j] < A[min_index]
//				then, set min_index = j
//	Step 4: After coming out of inner loop,
//		    Swap A[i] and A[min_index]


// Time Complexity for Bubble Sort is O(n^2)
// Space Complexity is O(1)

#include<stdio.h>
int selection_sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min_index=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_index])
			{
				min_index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}
	

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(int i=0;i<n;i++) {
	printf("%d ",arr[i]);
	}
}
