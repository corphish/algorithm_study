/**
 * It does need algorithm description ffs
 */

 #include <stdio.h>

 int binary_search_main(int arr[], int req, int start, int end) {
 	int mid = (start + end)/2;

 	if (start == end) return arr[end] == req ? end : -1;

 	if (req == arr[mid]) return mid;
 	if (req < arr[mid]) return binary_search_main(arr, req, start, mid - 1);
 	else return binary_search_main(arr, req, mid + 1, end);
 }

 int binary_search(int arr[], int req, int size) {
 	return binary_search_main(arr, req, 0, size - 1);
 }

 int main() {
 	int arr[] = {23,27,32,36,41}, n = sizeof(arr)/sizeof(arr[0]);
 	printf("%d %d\n", binary_search(arr,23,n), binary_search(arr,49,n));

 	return 0; 
 }