#include<bits/stdc++.h>
const int MAXN = 1e9;
using namespace std;
void fast(){
	ios::sync_with_stdio(false);
	cin.tie(0);
}
void bubble_sort(int data[], int n){
	for (int i = 0; i < n; i++)
    	for (int j = 0; j < n - 1; j++)
        	if (data[j] > data[j + 1]) {
            	swap(data[j], data[j+1]);
        	}
}
void insert_sort(int data[], int n){
	for (int i = 1; i < n; i++) {
    	int j = i;
    	while (j > 0 && data[i] < data[j-1]) --j;
    	int tmp = data[i];
    	for (int k = i; k > j; k--)
        	data[k] = data[k-1];
    	data[j] = tmp;
	}
}
 
void merge_sort(int data[], int left, int right) {
	int a[MAXN]; //temporary array
	if (right - left + 1 == 1) return;
    int mid = (left + right) / 2;
    merge_sort(data, left, mid);
    merge_sort(data, mid + 1, right);
    int i = left, j = mid + 1; 
    int cur = 0; 

    while (i <= mid || j <= right) { 
        if (i > mid) {
            a[cur++] = data[j++];
        } else if (j > right) {
            a[cur++] = data[i++];
        } else if (data[i] < data[j]) {
            
            a[cur++] = data[i++];
        } else {
            a[cur++] = data[j++];
        }
    }
    for (int i = 0; i < cur; i++)
        data[left + i] = a[i];
}
/*void heap_sort(int data[], int n){
	Heap h = Heap();
	for (int i = 0; i < n; i++) {
    	h.push(data[i]);
	}
	int a[MAXN]; // temporary array
	for (int i = 0; i < n; i++) {
    //get min element
    	a[i] = h.pop();
	}
}*/
void quick_sort(int a[], int left, int right) {
    int i = left, j = right;
    int pivot = a[left + rand() % (right - left)];
    //divide
    while (i <= j) {
        while (a[i] < pivot) ++i;
        while (a[j] > pivot) --j;

        if (i <= j) {
            swap(a[i], a[j]);
            ++i;
            --j;
        }
    }
    //dequy
    if (left < j) quick_sort(a, left, j);
    if (i < right) quick_sort(a, i, right);
}
void print(int a[], int n){
	for (int i = 0; i < n; i ++) cout << a[i] << " ";
}
signed main(){
	fast();
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i ++) cin >> a[i];
	//bubble
	//insert
	//merge
	//heap
	//quick
}
