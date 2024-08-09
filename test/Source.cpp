
#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <bitset>
#include <iomanip>

struct edge {
    int a;
    int b;
};

bool bfs(std::vector<edge>& forcer);

int main() {

    std::vector<double> v0;
    std::vector<double> v1;
    std::vector<bool> flags(11, false);
    std::vector<edge> forcer;
    std::vector<edge> edges{
            {0, 2},
            {0, 5},
            {1, 2},
            {1, 6},
            {2, 3},
            {2, 5},
            {2, 7},
            {3, 4},
            {4, 5},
            {4, 7},
            {5, 6}
    };
    double p = 0;
    for (; p <= 1; p += 0.1) {
        double calc = 0;
        for (int i = 0; i < 2048; i++) {
            for (int j = 0; j < 11; j++) {
                (i >> j) % 2 ? forcer.push_back(edges[j]) : void();
            }
            int p_pow = std::bitset<11>(i).count();
            calc += bfs(forcer) * pow(p, p_pow) * pow(1 - p, 11 - p_pow);
            forcer.clear();
        }
        v0.push_back(calc);
        double a = (1 - p) * (4 * p * p * p - 2 * pow(p, 5) - pow((2 * p * p * p - pow(p, 5)), 2))
            + p * pow(p + 2 * p * p - 2 * p * p * p - pow(p, 4) + pow(p, 5), 2);
        v1.push_back(a);
    }
    std::cout << std::setprecision(15);
    for (double v : v0) {
        std::cout << v << " , ";
    }
    std::cout << std::endl;
    for (double v : v1) {
        std::cout << v << " , ";
    }
    std::cout << std::endl;
    return 0;
}

bool bfs(std::vector<edge>& forcer) {
    std::vector<std::vector<bool>> matrix;
    std::vector<bool> used(8, false);
    for (int i = 0; i < 8; i++) {
        matrix.emplace_back(8, false);
    }
    for (edge e : forcer) {
        matrix[e.a][e.b] = true;
        matrix[e.b][e.a] = true;
    }
    std::queue<int> queue;
    queue.push(1);
    while (!queue.empty()) {
        int v = queue.front();
        queue.pop();
        for (int i = 0; i < 8; i++) {
            if (matrix[v][i] && !used[i]) {
                used[i] = true;
                queue.push(i);
            }
        }
    }
    return used[4];
}







/*#include <iostream>
using namespace std;

void swap1(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}


void select(int* arr, int n) {
	int i = 0; int j = 0; int min_idx = 0;
	for (i = 0; i < n - 1; i++) {
		min_idx = i;
		for (j = i + 1; j < n; j++) 
			if (arr[j] < arr[min_idx]) 
				min_idx = j;
				swap1(arr[min_idx], arr[i]);
				
				
			
		
	}
}

void bubble(int* arr, int n) {
	int i = 0; int j = 0;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
}

void insertion(int* arr, int n) {
	int i = 0; int j = 0; int key = 0;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;

		}
		arr[j + 1] = key;
	}

}

void quicksort(int* mas, int size) {
	int i = 0;
	int j = size - 1;
	int mid = mas[0];
	while (i <= j) {
		while (mas[i] < mid)
			i++;
		while (mas[j] > mid)
			j--;
		if (i <= j) {
			int tmp = mas[i];
			mas[i] = mas[j];
			mas[j] = tmp;
			i++;
			j--;
		}
	}
	if (j > 0)
		quicksort(mas, j + 1);
	if (i < size)
		quicksort(&mas[i], size - i);
}



int main() {
	int sd[10] = { 12,2,4,5,43,43,7,34,78,11 };
	int n = 0;
	int s = 0;
	int g = 10;
	 quicksort(sd,10);
	
	for (n = 0; n < g; n++) {
		cout << sd[n] << endl;
	}
	return 0;

}*/