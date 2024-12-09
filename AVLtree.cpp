#define UNTITLED_AVLTREE_H

#include <iostream>
using namespace std;

template <class K, class T>
class node {
public:
    K key;
    T data;
    node *left, *right;
    int heigt;

    node() = delete;
    node(const K& key, const T& data): key(key), data(data), left(nullptr), right(nullptr), heigt(0) {};
    node<K,T>& operator=(const node&) = default;
    ~node() = default;
    node<K,T>* minNode();
    node<K,T>* maxNode();
    node<K,T>* inOrderSuccessor();

};

