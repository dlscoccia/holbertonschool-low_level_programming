## 0x1A. C - Hash tables
Hash Table is a data structure which stores data in an associative manner. In a hash table, data is stored in an array format, where each data value has its own unique index value.

Access of data becomes very fast if we know the index of the desired data.
Thus, it becomes a data structure in which insertion and search operations are very fast irrespective of the size of the data. Hash Table uses an array as a storage medium and uses hash technique to generate an index where an element is to be inserted or is to be located from.
A hash table organizes data so you can quickly look up values for a given key.
##### Strengths:
    • Fast lookups. Lookups take O(1) time on average.
    • Flexible keys. Most data types can be used for keys, as long as they're hashable.

##### Weaknesses:
    • Slow worst-case lookups. Lookups take O(n) time in the worst case.
    • Unordered. Keys aren't stored in a special order. If you're looking for the smallest key,the largest key, or all the keys in a range, you'll need to look through every key to find it.
    • Single-directional lookups. While you can look up the value for a given key in O(1) time, looking up the keys for a given value requires looping through the whole dataset—O(n) time.
    • Not cache-friendly. Many hash table implementations use linked lists, which don't put data next to each other in memory.

#### Basic Operations
Following are the basic primary operations of a hash table.

    • Search − Searches an element in a hash table.
    • Insert − inserts an element in a hash table.
    • delete − Deletes an element from a hash table.

#### What is a hash function

A hash function is any function that can be used to map data of arbitrary size to fixed-size values. The values returned by a hash function are called hash values, hash codes, digests, or simply hashes. The values are used to index a fixed-size table called a hash table. Use of a hash function to index a hash table is called hashing or scatter storage addressing.

![Hash Function](https://www.tutorialspoint.com/data_structures_algorithms/images/hash_function.jpg)

> Using KeyVaLue % Size (of the array) you make sure that every value is in range
##### Hashing
```
Hashing is a technique to convert a range of key values into a range of indexes of an array.
We're going to use modulo operator to get a range of key values. Consider an example of
hash table of size 20, and the following items are to be stored.
Item are in the >>> (key,value) format.
```
>>> perfect hash function: Function which, when applied to all the members of the set of items
to be stored in a hash table, produces a unique set of integers within some suitable range.
#### What is a collision and what are the main ways of dealing with collisions in the context of a hash table
When a hash function maps two different keys to the same table address, a collision is said to occur.
#### Handling the collisions
In the small number of cases, where multiple keys map to the same integer, then elements with different keys may be stored in the same "slot" of the hash table. It is clear that when the hash function is used to locate a potential match, it will be necessary to compare the key of that element with the search key. But there may be more than one element which should be stored in a single slot of the table. Various techniques are used to manage this problem:

    1. chaining,
    2. overflow areas,
    3. re-hashing,
    4. using neighbouring slots (linear probing),
    5. quadratic probing,
    6. random probing, ...

###### Chaining
One simple scheme is to chain all collisions in lists attached to the appropriate slot. This allows an unlimited number of collisions to be handled and doesn't require a priori knowledge of how many elements are contained in the collection. The tradeoff is the same as with linked lists versus array implementations of collections: linked list overhead in space and, to a lesser extent, in time.
###### Re-hashing
Re-hashing schemes use a second hashing operation when there is a collision. If there is a further collision, we re-hash until an empty "slot" in the table is found.
The re-hashing function can either be a new function or a re-application of the original one. As long as the functions are applied to a key in the same order, then a sought key can always be located.
###### Linear probing
One of the simplest re-hashing functions is +1 (or -1), ie on a collision, look in the neighbouring slot in the table. It calculates the new address extremely quickly and may be extremely efficient on a modern RISC processor due to efficient cache utilisation (cf. the discussion of linked list efficiency).
The animation gives you a practical demonstration of the effect of linear probing: it also implements a quadratic re-hash function so that you can compare the difference.
###### Clustering
Linear probing is subject to a clustering phenomenon. Re-hashes from one location occupy a block of slots in the table which "grows" towards slots to which other keys hash. This exacerbates the collision problem and the number of re-hashed can become large.
###### Quadratic Probing
Better behaviour is usually obtained with quadratic probing, where the secondary hash function depends on the re-hash index:
address = h(key) + c i2
on the tth re-hash. (A more complex function of i may also be used.) Since keys which are mapped to the same value by the primary hash function follow the same sequence of addresses, quadratic probing shows secondary clustering. However, secondary clustering is not nearly as severe as the clustering shown by linear probes.
Re-hashing schemes use the originally allocated table space and thus avoid linked list overhead, but require advance knowledge of the number of items to be stored.
However, the collision elements are stored in slots to which other key values map directly, thus the potential for multiple collisions increases as the table becomes full.
###### Overflow area
Another scheme will divide the pre-allocated table into two sections: the primary area to which keys are mapped and an area for collisions, normally termed the overflow area.
___

#### Advantages:
In a well-dimensioned hash table, the average cost for each lookup is independent of the number of elements stored in the table.
Many hash table designs also allow arbitrary insertions and deletions of key-value pairs.
In many situations, hash tables turn out to be more efficient than search trees or any other table lookup structure.

#### Disadvantages:
The hash tables are not effective when the number of entries is very small. (However, in some cases the high cost of computing the hash function can be mitigated by saving the hash value together with the key.)

#### Uses:
They are widely used in many kinds of computer software, particularly for associative arrays, database indexing, caches and sets.
___
```
“Experience is the name everyone gives to their mistakes.”
– Oscar Wilde
```