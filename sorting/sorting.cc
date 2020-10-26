#include <bits/stdc++.h>

using namespace std;

class C {
private :
	vector<int> v;
	
public :

	// 버블소트
	void bubble_sort() {
		for (int i = v.size() - 1; i >= 0; i--) {
			for (int j = 0; j < i; j++) {
				if (v[j] > v[j + 1])
					swap(v[j], v[j + 1]);
			}
		}
	}
	
	

	//퀵소트
	int partition(int l, int r) {
		int pivot = l;
		int i = l + 1, j = r;
		do {
			while (i < j && v[i] <= v[pivot]) i++;
			while (j >= i && v[j] >= v[pivot]) j--;
			if(i < j)
				swap(v[i], v[j]);
		} while (i < j);

		swap(v[pivot], v[j]);
		return j;
	}
	void _quick_sort(int l, int r) {
		if (l < r) {
			int mid = partition(l, r);
			_quick_sort(l, mid);
			_quick_sort(mid + 1, r);
		}
	}

	void quick_sort() {
		_quick_sort(0, v.size() - 1);
	}

	




	
	void random_generate() {
		int n = 1000000;
		v.resize(n);
		
		for (int i = 0; i < n; i++) {
			v[i] = rand() % 100000;
		}
	}

	void print() {
		printf("Data in vector(%d) :\n", v.size());
		for (int i = 0; i < v.size(); i++)
			printf("%d ", v[i]);
		printf("\n\n");
	}

	bool is_sorted() {
		for (int i = 0; i < v.size() - 2; i++) {
			if (v[i] > v[i + 1])
				return false;
		}

		return true;
	}

};



int main() {
	srand(time(NULL));
	C c;
	c.random_generate();
	c.print();
	
	printf("Sorting...\n\n");

	c.quick_sort();
	c.print();

	printf("Is sorted? %s", c.is_sorted() ? "True" : "False");
	return 0;
}