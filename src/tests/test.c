/*
 * test.c
 *
 *  Created on: 27 de mar de 2019
 *      Author: Rogers
 */

#include <stdlib.h>
#include <assert.h>
#include <c-base/c-base.h>

#define testArraySize (42)

static char testArray[testArraySize];

int main(int argc, char *arv[]) {
	assert(ARRAY_SIZE(testArray) == testArraySize);
	return EXIT_SUCCESS;
}
