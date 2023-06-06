#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int maj = arr[0];
	int count = 0;
	for(int i=0; i<n; i++) {
		if(count==0) {
			maj = arr[i];
		}
		count += (arr[i] == maj) ? 1 : -1;
	}
	int majCount = 0;
	for(int i=0; i<n; i++) {
		if(arr[i] == maj)
			majCount++;
	}
	return (majCount > n/2) ? maj : -1;
}
