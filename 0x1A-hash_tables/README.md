# 0x1A. C - Hash Tables

## Overview

This project explores the implementation of hash tables in the C programming language. Hash tables are a fundamental data structure used to store key-value pairs efficiently. This project aims to teach you about hash functions, collision handling, and the advantages of using hash tables.

- **Author**: Julien Barbier
- **Weight**: 1
- **Project Start Date**: September 7, 2023, 4:00 AM
- **Project End Date**: September 14, 2023, 4:00 AM
- **Auto QA Review**: Will be launched at the deadline

## Learning Objectives

By the end of this project, you should be able to explain the following concepts without relying on external sources:

### General
- What is a hash function?
- What makes a good hash function?
- What is a hash table, how do they work, and how to use them?
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table?
- What are the advantages and drawbacks of using hash tables?
- What are the most common use cases of hash tables?

## Requirements

### General
- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using `gcc` with options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code should follow the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- Avoid global variables
- No more than 5 functions per file
- C standard library is allowed
- Prototypes of all functions should be included in the `hash_tables.h` header file
- Don't forget to push your header file
- Include guards should be used in all header files

## Resources

- [What is a HashTable Data Structure - Introduction to Hash Tables, Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)
- [All about hash tables](https://medium.com/basecs/all-about-hash-tables-8da0d69d1ee8)
- [Why hash tables and not arrays](https://stackoverflow.com/questions/730620/how-should-i-choose-a-good-hash-function)

## Data Structures

Please use the following data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, a string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

