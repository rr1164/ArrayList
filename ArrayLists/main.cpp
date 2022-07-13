#include <iostream>
#include "ArrayList.h"
int main(){
    int size = 10;
    ArrayList list(size);
    for(int i = 0; i < size;i++)
        list.insert_new_element(i);
    list.print();
    list.clear();
    for(int i = 0; i < size;i++)
        list.insert_new_element(i);
    list.print();
}