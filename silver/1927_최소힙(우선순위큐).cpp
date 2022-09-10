#include <stdio.h>
#include <queue>
using namespace std;

vector <int> vt={0,};

int main() {

	int n; scanf("%d", &n);
	int x;
	
	priority_queue<int, vector<int>, greater<int>> heap;

	while (n--) {
		scanf("%d", &x);
		if (x == 0) {
			if (heap.empty())
				printf("0\n");
			else {
				printf("%d\n", heap.top());
				heap.pop();
			}

		}
		else
			heap.push(x);
	}
}