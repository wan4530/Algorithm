#include <iostream>

using namespace std;

int heap[100004];
int heap_size;
#define Parent(i) (heap[i/2])
#define Left(i) (heap[i*2])
#define Right(i) (heap[i*2+1])
void insert(int n) {
	int i = 0;
	i = ++(heap_size);
	while (i != 1 && n > Parent(i)) {
		heap[i] = Parent(i);
		i /= 2;
	}
	heap[i] = n;
}
void delete_heap() {
	int hroot, last;
	int parent = 1, child = 2;
	hroot = heap[1];
	last = heap[heap_size--];
	while (child <= heap_size) {
		if (Left(parent) < Right(parent))
			child++;
		if (last >= heap[child])
			break;
		heap[parent] = heap[child];
		parent = child;
		child *= 2;
	}
	heap[parent] = last;
	cout << hroot << "\n";
}
int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp == 0) {
			if (heap_size != 0) {
				delete_heap();
			}
			else {
				cout << 0 << "\n";
			}
		}
		else {
			insert(temp);
		}
	}
	return 0;
}