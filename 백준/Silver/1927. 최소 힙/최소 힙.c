#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int heap[200001];
	int heap_size;
}HeapType;

void insert_heap(HeapType* h, int n) {
	int i = ++(h->heap_size);
	while (i != 1 && (n < h->heap[i / 2])) {
		h->heap[i] = h->heap[i / 2];
		i /= 2;
	}
	h->heap[i] = n;
}
void delete_heap(HeapType* h) {
	int parent = 1, child = 2;
	int item, tmp;
	if (h->heap_size < 1) {
		printf("0\n");
	}
	else {
		item = h->heap[1];
		tmp = h->heap[(h->heap_size)--];
		while (child <= h->heap_size) {
			if (child < h->heap_size && h->heap[child] > h->heap[child + 1]) child++;
			if (tmp <= h->heap[child]) break;
			h->heap[parent] = h->heap[child];
			parent = child;
			child *= 2;
		}
		h->heap[parent] = tmp;
		printf("%d\n", item);
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	HeapType* heap = (HeapType*)malloc(sizeof(HeapType));
	heap->heap_size = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		if (tmp == 0) delete_heap(heap);
		else insert_heap(heap,tmp);
	}
	free(heap);
	return 0;
}