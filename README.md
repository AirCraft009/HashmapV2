# Hashmap V2

## Usage

### Initialization
```C
    hashmap *hash = CreateHashmap(100);
    if (hash == nullptr) {    // allocation failure 
        printf("hashmap creation failed\n");
        DestroyHashmap(hash);
        return -1;
    }
```
### Set values
```C
    // returns true for a sucessful set
    int monday = 1;
    hashmapSet(hash, "Monday", (void *) &monday);
    hashmapSet(hash, "Friedrich", (void *) "Merz");

```

### Get values
```C
  // returns the void * to the value or null
  printf("lastname of Friedrich: %s\n", (char*) hashmapGet(hash, "Friedrich"));        
  printf("Monday is the %d. day of the week.\n", *(int*) hashmapGet(hash, "Monday"));
```

### Remove values
```C
  printf("Removed Merz: %d\n", hashmapRemove(hash, "Friedrich"));    // returns true on sucessfull remove
```

## Capacity & Size

- creates a hashmap with the inital capacity set 
```C
hashmap * CreateHashmap(int capacity)
```

- the capacity will however always grow with the data.
- condition: more than half of the map is full
  - size of the underlying array will be doubled.


## Memory ownership

### Keys

- the str keys are duped on entry into the hashmap and are freed int DestroyHashmap()

### Values

- the values are user owned memory. freeing them while the hashmap is operating can lead to UB
- They aren't freed with the hashmap


