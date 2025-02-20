#include <cstdio>

int main() {

	int count = 0;
	// 0부터 99까지 (100번)
	for (int i = 0; i < 100; i++) {
		count = count + 10;
	}
	printf("count: %d", count);
	return 0;
}