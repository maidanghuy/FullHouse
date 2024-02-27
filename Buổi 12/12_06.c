//https://laptrinh24h.vn/problem/fhc12b06
# include <stdio.h>
# include <math.h> 
# include <stdbool.h>
# include <string.h>

void _input (int a[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
}

int _quickSearch1 (int a[], int left, int right, int x) {
	if ( left <= right) {
		int mid = left + (right - left) / 2;

		if(a[mid] == x) {
			return 1;
		}else if (a[mid] > x) {
			return _quickSearch1(a, left, mid - 1, x);
		}else {
			return _quickSearch1(a, mid + 1, right, x);
		}
	}
	return 0;
}

int _quickSearch2 (int a[], int left, int right, int x) {

	if (left >= right) {
		if (a[left] == x) {
			return 1;
		}else {
			return 0;
		}
	}

	int mid = (left + right) / 2;

	if (a[mid] == x) {
		return 1;
	}else if (a[mid] > x) {
		return _quickSearch2(a, left, mid - 1, x);
	}else {
		return _quickSearch2(a, mid + 1, right, x);
	}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);

	int a[n];
	_input(a, n);

	int t;
	scanf("%d", &t);
	int x;
	while(t--){
		scanf("%d", &x);
		if ( _quickSearch2(a, 0, n - 1, x) ){
			printf("YES\n");
		}else {
			printf("NO\n");
		}
	}
	return 0;
}