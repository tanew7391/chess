//from https://aozturk.medium.com/simple-hash-map-hash-table-implementation-in-c-931965904250
#pragma once
#include "HashNode.hpp"
#include <cstddef>

// Hash map class template
template <typename K, typename V, typename F, int tableSize>
class HashMap
{
public:
    HashMap()
    {
        table = new HashNode<K, V> *[tableSize]();
    }

    ~HashMap()
    {
        for (int i = 0; i < tableSize; ++i)
        {
            HashNode<K, V> *entry = table[i];

            delete entry;

            table[i] = NULL;
        }
    }

    V get(const K &key)
    {
        int hashValue = hashFunc(key);
        HashNode<K, V> *entry = table[hashValue];

        if (entry != NULL)
        {
            return entry->getValue(); //assumes key always hits correct index (which it does because the table is one to one)
        }
        return nullptr;
    }

    void put(const K &key, const V &value)
    {
        int hashValue = hashFunc(key);
        HashNode<K, V> *entry = table[hashValue];

        if (entry == NULL)
        {
            entry = new HashNode<K, V>(key, value);
            table[hashValue] = entry;
        }
        else
        {
            entry->setValue(value);
        }
    }

    void remove(const K &key)
    {
        int hashValue = hashFunc(key);
        HashNode<K, V> *entry = table[hashValue];

        if (entry == NULL)
        {
            // key not found
            return;
        }
        else
        {
            delete entry;
        }
    }

private:
    // hash table
    HashNode<K, V> **table;
    F hashFunc;
};