#include<stdio.h>
// helper function to get the maximum of the array
int get_max(int A[],int n) {
	int max = A[0];
	for(int i=0;i<n;i++) {
		if(A[i]>max) max = A[i];
	}
	return max;
}
// helper function to print array;
void print_Array(int A[],int n) {
	for(int i=0;i<n;i++) {
		printf("%d ",A[i]);
	}
	printf("\n");
}
void Radix_Sort(int A[],int n) {
	int m = get_max(A,n);
	 // 2-Dimensional array with 10 rows and n columns
	 int bucket[10][n];
	 // segragation 
	while(m) {
		int e=1;
		int count[10] = {0};              
		for(int i=0;i<n;i++) {
			int pos = (A[i]/e)%10;
			bucket[pos][count[pos]] = A[i];   
			count[pos]++;
		}
	// reconstruction
	int c = 0;
	for(int i=0;i<10;i++) {
		for(int j=0;j<count[i];j++) {   // runs upto count as the row contains elements equal to count
			A[c] = bucket[i][j];
			c+=1;
		}
	}
	e*=10;
	m/=10;
}
}
int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
        //function call to radix sort()
	Radix_Sort(arr,n);
	print_Array(arr,n);
    return 0;	
}