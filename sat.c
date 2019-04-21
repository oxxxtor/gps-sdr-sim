#include "sat.h"
#include <malloc.h>

struct satsSet* create() {
	return calloc(1, sizeof(struct satsSet));
}

void destroy(struct satsSet* ss) {
	if (ss != NULL) {
		free(ss);
	}
}

void add(struct satsSet* ss, int id) {
	if (ss->count >= MAX_SAT) {
		return;
	}

	if (0 != in(ss, id)) {
		return;
	}

	ss->id[ss->count] = id;
	ss->count++;
}

int in(struct satsSet* ss, int id) {
	for (int i = 0; i < ss->count; i++) {
		if (ss->id[i] == id) {
			return 1;
		}
	}
	return 0;
}

int empty(struct satsSet* ss) {
	return ss->count;
}
