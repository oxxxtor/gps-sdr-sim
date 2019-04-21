#ifndef SAT_H
#define SAT_H

#include "gpssim.h"

struct satsSet{
	int id[MAX_SAT];
	int count;
};

struct satsSet* create();
void destroy(struct satsSet*);
void add(struct satsSet*, int);
int in(struct satsSet*, int);
int empty(struct satsSet*);

#endif
