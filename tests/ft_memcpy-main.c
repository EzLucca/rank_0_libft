#include "../libft.h"
#include <stdio.h>
void print_test_result(int test_num, int passed)
{
    if (passed)
        printf("Test %d: SUCCESS :)\n", test_num);
    else
        printf("Test %d: FAILED :(\n", test_num);
}

void test_memcpy(int test_num, void *dst, void *src, size_t n, const char *expected_dst)
{
    // Perform memcpy using ft_memcpy
    ft_memcpy(dst, src, n);

    // Check if the destination matches the expected result
    if (memcmp(dst, expected_dst, n) == 0)
    {
        print_test_result(test_num, 1);
    }
    else
    {
        print_test_result(test_num, 0);
        printf("Expected: \"%s\"\n", expected_dst);
        printf("Got     : \"%s\"\n", (char *)dst);
    }
}

int main()
{
    // Test 1: Normal case - Copy from "Hello" to empty destination
    char src1[] = "Hello, World!";
    char dst1[50] = {0};
    test_memcpy(1, dst1, src1, 13, "Hello, World!"); // Should copy "Hello, World!" into dst1

    // Test 2: Edge case with n = 0, nothing should change
    char src2[] = "No Copy";
    char dst2[50] = {0};
    test_memcpy(2, dst2, src2, 0, "");  // Should leave dst2 unchanged

    // Test 3: Copy from NULL src, should return dst unchanged
    char dst3[50] = "Hello, World!";
    test_memcpy(3, dst3, NULL, 5, "Hello, World!");  // Should return dst as is

    // Test 4: Copy from NULL dst, should return dst unchanged
    // char *dst4 = NULL;
    // char src4[] = "Test";
    // test_memcpy(4, dst4, src4, 4, NULL); // Should return dst as is (NULL)
    //
    // Test 5: Copying exactly the size of the source (full string copy)
    char src5[] = "Full Copy Test";
    char dst5[50] = {0};
    test_memcpy(5, dst5, src5, 14, "Full Copy Test");  // Should copy "Full Copy Test" into dst5

    // Test 6: Copying overlapping memory (should not work correctly for ft_memcpy, ideally use ft_memmove)
    char src6[] = "Overlapping Memory Test";
    test_memcpy(6, src6 + 5, src6, 12, "Overlapping Memory Test"); // Should ideally cause unexpected behavior!

    // Test 7: Large size test, copy a large block of memory
    char src7[1000];
    char dst7[1000];
    for (int i = 0; i < 1000; i++) {
        src7[i] = (i % 256);
    }
    test_memcpy(7, dst7, src7, 1000, src7);  // Should copy the entire src7 to dst7 correctly

    // Test 8: Copy binary or non-printable data
    unsigned char src8[] = {0x01, 0xFF, 0xA2, 0x99};
    unsigned char dst8[4] = {0};
    test_memcpy(8, dst8, src8, 4, "\x01\xFF\xA2\x99");  // Should copy binary data correctly

    return 0;
}
