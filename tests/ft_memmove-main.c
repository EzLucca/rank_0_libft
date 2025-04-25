
#include "../libft.h"
#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

// Your ft_memmove implementation goes here
void *ft_memmove(void *dest, const void *src, size_t n);

// Helper to reset buffers
void fill_buffer(char *buf, size_t size, char fill) {
	for (size_t i = 0; i < size - 1; i++)
		buf[i] = fill;
	buf[size - 1] = '\0';
}

void test_overlap() {
	char std_buf[50] = "1234567890abcdefghij";
	char custom_buf[50] = "1234567890abcdefghij";

	memmove(std_buf + 4, std_buf, 10);
	ft_memmove(custom_buf + 4, custom_buf, 10);

	assert(memcmp(std_buf, custom_buf, 50) == 0);
	printf("✅ Overlapping regions test passed\n");
}

void test_non_overlap() {
	char std_buf[50] = "abcdefghij1234567890";
	char custom_buf[50] = "abcdefghij1234567890";

	memmove(std_buf + 15, std_buf + 5, 5);
	ft_memmove(custom_buf + 15, custom_buf + 5, 5);

	assert(memcmp(std_buf, custom_buf, 50) == 0);
	printf("✅ Non-overlapping regions test passed\n");
}

void test_zero_length() {
	char buf1[10] = "abcdefghi";
	char buf2[10] = "abcdefghi";

	memmove(buf1, buf1 + 3, 0);
	ft_memmove(buf2, buf2 + 3, 0);

	assert(memcmp(buf1, buf2, 10) == 0);
	printf("✅ Zero-length move test passed\n");
}

void test_null_src_and_dest() {
	// Only test if both are NULL — undefined if one is NULL.
	void *res1 = memmove(NULL, NULL, 0);
	void *res2 = ft_memmove(NULL, NULL, 0);

	assert(res1 == res2);
	printf("✅ NULL + 0 length test passed\n");
}

void test_large_buffer() {
	size_t size = 1000000;
	char *buf1 = malloc(size);
	char *buf2 = malloc(size);

	fill_buffer(buf1, size, 'A');
	fill_buffer(buf2, size, 'A');

	clock_t start = clock();
	memmove(buf1 + 1, buf1, size - 2);
	clock_t end = clock();
	printf("🔹 memmove took:     %.2f ms\n", 1000.0 * (end - start) / CLOCKS_PER_SEC);

	start = clock();
	ft_memmove(buf2 + 1, buf2, size - 2);
	end = clock();
	printf("🔹 ft_memmove took:  %.2f ms\n", 1000.0 * (end - start) / CLOCKS_PER_SEC);

	assert(memcmp(buf1, buf2, size) == 0);
	printf("✅ Large buffer test passed\n");

	free(buf1);
	free(buf2);
}

int main(void) {
	printf("🔍 Running ft_memmove test suite...\n\n");

	test_overlap();
	test_non_overlap();
	test_zero_length();
	test_null_src_and_dest();
	test_large_buffer();

	printf("\n🎉 All tests passed!\n");
	return 0;
}

