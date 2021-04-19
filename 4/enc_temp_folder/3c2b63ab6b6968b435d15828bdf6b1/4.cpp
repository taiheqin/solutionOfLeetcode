#include<stdio.h>
void sort(int* a, int alen, int *b, int blen, int *c, int *clen) {

	int i = 0, j = 0, k = 0;
	while (i < alen && j < blen) {
		if (a[i] < b[j]) {
			c[k] = a[i];
			k++;
			i++;
		}
		else if (a[i] <= b[j]) {
			c[k] = a[i];
			k++;
			i++;
			j++;
		}
		else {
			c[k] = b[j];
			j++;
			k++;
		}
	}
	while (i < alen) {
		c[k] = a[i];
		k++;
		i++;
	}
	while (j < blen) {
		c[k] = b[j];
		j++;
		k++;
	}
	*clen = k;
}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
	int c[1000];
	int clen, i ;
	sort(nums1, nums1Size, nums2, nums2Size, c, &clen);
	for (i = 0; i < clen; i++) {
		printf("%d ", c[i]);
	}
	printf("\n%d ", clen);
	return 0;
}

int main() {
	int a1[2] = { 1,5 };
	int a2[2] = { 3,4 };
	findMedianSortedArrays(a1, 2, a2, 2);
	printf("\n%d,",a1[0]);
	return 0;
}