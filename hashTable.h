#ifndef HASHTABLE
#define HASHTABLE

#include <stdio.h>
#include <stdlib.h>
#include "list.c"

#define tableMaxSize 49999 //numero primo

typedef struct tnode
{
  list *l;
  
}tnode;

typedef struct hash
{
  tnode *arr;
  
}hash;

/* API*/
hash *newHash();

void insertHash(hash *, int);
void removeHash(hash *, int);

int searchHash(hash *, int);
int hashIndex(int);

void printHash(hash *);

#endif
