
#include "../libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <assert.h>

// Your functions
size_t ft_strlen(const char *s);
size_t ft_strlcpy(char *dst, const char *src, size_t size);

// Test cases
void test_basic_copy() {
	char dst[20];
	size_t result = ft_strlcpy(dst, "Hello", sizeof(dst));
	assert(strcmp(dst, "Hello") == 0);
	assert(result == 5);
	printf("✅ Basic copy test passed\n");
}

void test_truncated_copy() {
	char dst[5];
	size_t result = ft_strlcpy(dst, "Hello, world!", sizeof(dst));
	assert(strcmp(dst, "Hell") == 0);  // Only 4 chars + '\0'
	assert(result == 13);             // Full length of source
	printf("✅ Truncated copy test passed\n");
}

void test_zero_size() {
	char dst[5] = "XXXX";  // Should stay untouched
	size_t result = ft_strlcpy(dst, "Test", 0);
	size_t result2 = strlcpy(dst, "Test", 0);
	assert(dst[0] == 'X');  // First char unchanged
	assert(result == 4);    // Length of source
	printf("✅ Size 0 test passed\n");
	printf("ft_strlcpy: %ld\n", result);
	printf("strlcpy: %ld\n", result2);
}

void test_empty_source() {
	char dst[5] = "ABCD";
	size_t result = ft_strlcpy(dst, "", sizeof(dst));
	assert(strcmp(dst, "") == 0);
	assert(result == 0);
	printf("✅ Empty source test passed\n");
}

void test_null_source() {
	char dst[10] = "Test";
	size_t result = ft_strlcpy(dst, NULL, sizeof(dst));
	assert(result == 0);           // You return 0 when src is NULL
	assert(strcmp(dst, "Test") == 0);  // dst should be untouched
	printf("✅ NULL source test passed\n");
}

int main(void) {
	printf("🔍 Running ft_strlcpy unit tests...\n\n");

	test_basic_copy();
	test_truncated_copy();
	test_zero_size();
	test_empty_source();
	test_null_source();

	printf("\n🎉 All ft_strlcpy tests passed!\n");
	return 0;
}

