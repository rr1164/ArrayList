#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <iostream>
class ArrayList{
public:
    ArrayList(int array_size);
    void insert_new_element(int element);
    void clear();
    void print();
private:
    int m_len = 0;
    int m_capacity = 0;
    int* m_array;
};

#endif