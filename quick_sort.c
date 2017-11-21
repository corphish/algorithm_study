/**
 * Base of quick sort
 * 1. Select a pivot element
 * 2. Arrange in such a way that all elements less than pivot appears before it, while all greater than it appears after it.
 * Algorithm:
 * For quicksort:
 * quicksort(arr, low, high) {
	if (low < high) {
		p := partition(arr, low, high)
		quicksort(arr, low, p-1)
		quicksort(arr,p+1,high)
	}
 }
 * For partition:
 * partition(arr, low, high) {
	pivot := arr[high]
	i := low - 1
	for j := low to high do
		if (a[j] <= pivot) {
			i := i + 1
			swap arr[i] with arr[j]
		}
	done
	swap arr[i+1] with arr[high]

	return i+1
 }
 */
 // Index are 0-based
#include <stdio.h>

 void print_array(int arr[], int n) {
 	int i;
 	for (i = 0; i < n; i++) printf("%d ", arr[i]);
 	printf("\n");
 }

 int partition(int arr[], int low, int high) {
 	int pivot = arr[high];
 	int i = low - 1, j = low, temp;
 	for (;j < high; j++) {
 		if (arr[j] <= pivot) {
 			i++;
 			temp = arr[j];
 			arr[j] = arr[i];
 			arr[i] = temp;
 		}
 	}
 	temp = arr[i+1];
 	arr[i+1] = arr[high];
 	arr[high] = temp;
 	return i+1;
 }

 void quick_sort(int arr[], int low, int high) {
 	if (low < high) {
 		int p = partition(arr, low, high);
 		quick_sort(arr, low, p-1);
 		quick_sort(arr,p+1,high);
 	}
 }

 int main() {
 	int arr[] = {168, 14141, 9055, 23339, 29880, 12141, 23238, 22043, 30022, 14592, 24863, 13622, 13189, 2572, 17347, 14628, 27023, 10706, 10847, 27975, 14615, 29314, 24095, 8670, 10844, 14942, 678, 14207, 18260, 7836, 2436, 29658, 20765, 30363, 1757, 24525, 10354, 31244, 23677, 22306, 1951, 21484, 3180, 26922, 32414, 27037, 16001, 23475, 8648, 20994, 20794, 8679, 850, 21818, 28973, 29819, 25142, 22978, 14916, 19004, 23542, 23280, 21502, 6426, 16686, 26491, 17071, 31198, 4309, 13931, 16382, 14686, 10688, 13116, 11607, 28231, 13723, 3199, 30793, 18120, 17590, 17000, 25353, 1891, 15413, 12698, 1220, 8634, 23384, 32744, 11448, 15436, 19519, 10749, 3724, 24537, 27742, 4072, 27050, 22949, 30951, 24500, 15542, 11717, 14409, 21256, 14072, 208, 19227, 18036, 22574, 1777, 18077, 905, 3935, 6876, 21663, 6685, 29008, 24764, 23566, 307, 2122, 25960, 51, 22017, 30654, 10786}, n = sizeof(arr)/sizeof(arr[0]);
 	quick_sort(arr, 0, n - 1);
 	print_array(arr, n);
 	return 0;
 }