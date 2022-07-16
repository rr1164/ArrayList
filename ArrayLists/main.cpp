#include <iostream>
#include "ArrayList.h"
int main(){
    int size = 10;
    ArrayList list(size);
    list.insert_new_element(2);
    list.insert_new_element(2);
    list.insert_new_element(2);
    list.insert_new_element(1);
    list.insert_new_element(1);
    list.insert_new_element(1);
    list.insert_new_element(1);
    list.insert_new_element(1);
    list.insert_new_element(3);
    list.insert_new_element(3);
    list.most_repeated();
}