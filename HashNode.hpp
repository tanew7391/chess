//from https://aozturk.medium.com/simple-hash-map-hash-table-implementation-in-c-931965904250
#pragma once
template <typename K, typename V>
class HashNode {
public:
    HashNode(const K &key, const V &value) :
    key(key), value(value){
    }

    K getKey() const {
        return key;
    }

    V getValue() const {
        return value;
    }

    void setValue(V value) {
        this->value = value;
    }

private:
    // key-value pair
    K key;
    V value;
};