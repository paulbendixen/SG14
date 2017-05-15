#if defined(_MSC_VER)
#include <SDKDDKVer.h>
#endif

#include <stdio.h>

#include "SG14_test.h"

int main(int, char *[])
{
    sg14_test::inplace_function_test();
    sg14_test::transcode_test();
    sg14_test::ring_test();
    sg14_test::thread_communication_test();
    sg14_test::filter_test();
    sg14_test::normalisation_test();
    sg14_test::unstable_remove_test();
	sg14_test::uninitialized();

	puts("tests completed");

	return 0;
}

