## C - HASH TABLES

This Project was done during the **AKX SOFTWARE ENGINEERING PROGRAM**. I learned about hashing by implementing hash functions and hash tables in C.

# Function Prototypes

| File | Prototype |
| --- | --- |
| `0-hash_table_create.c` | `hash_table_t *hash_table_create(unsigned long int size);` |
| `1-djb2.c` | `unsigned long int hash_djb2(const unsigned char *str);` |
| `2-key_index.c` | `unsigned long int key_index(const unsigned char *key, unsigned long int size);` |
| `3-hash_table_set.c` | `int hash_table_set(hash_table_t *ht, const char *key, const char *value);` |
| `4-hash_table_get.c` | `char *hash_table_get(const hash_table_t *ht, const char *key);` |
| `5-hash_table_print.c` | `void hash_table_print(const hash_table_t *ht);` |
| `6-hash_table_delete.c` | `void hash_table_delete(hash_table_t *ht);` |
| `100-sorted_hash_table.c` | `shash_table_t *shash_table_create(unsigned long int size);` |
| | `int shash_table_set(shash_table_t *ht, const char *key, const char *value);` |
| | `char *shash_table_get(const shash_table_t *ht, const char *key);` |
| | `void shash_table_print(const shash_table_t *ht);` |
| | `void shash_table_print_rev(const shash_table_t *ht);` |
| | `void shash_table_delete(shash_table_t *ht);` |
