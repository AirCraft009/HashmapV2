#ifndef HASHMAPV2_LIBRARY_H
#define HASHMAPV2_LIBRARY_H

const int INITIAL_CAPACITY = 40;

typedef struct Hashmap hashmap;
hashmap * CreateBaseHashmap();
hashmap * CreateHashmap(int capacity);
void DestroyHashmap(hashmap *hash);
bool hashmapSet(hashmap *hash, char * key, void *value);
bool hashmapRemove(hashmap *hash, char * key);
void * hashmapGet(hashmap *hash, char * key);


#endif // HASHMAPV2_LIBRARY_H
