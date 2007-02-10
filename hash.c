// convenience functions to hash and hashtable interface


#include <string.h>

#include "elfhash.h"


unsigned int string_hash(void *s) {
	return ELFHash(s, strlen(s));
}

int string_equal(void *s1, void *s2) {
	int res = strcmp(s1, s2);
	if (res == 0) return 1;
	return 0;
}
