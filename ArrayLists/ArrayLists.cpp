#include "ArrayList.h"
#include <vector>
#include <algorithm> // for sort()
ArrayList::ArrayList(int array_size){
   m_array = new int[array_size];
   m_len = array_size;
}
void ArrayList::insert_new_element(int element){
    {
        if(m_capacity >= m_len){
            std::cout << "capacity exceeds len " << m_capacity << ' ' << m_len << std::endl;
        }
        else{
            m_array[m_capacity] = element;
            m_capacity++;
        }
    }
}
void ArrayList::clear(){
    m_capacity = 0;
}
ArrayList::~ArrayList() {
    delete[] m_array;
}
void ArrayList::print(){
    for(int i = 0; i < m_len;i++)
    std::cout << m_array[i] << ' ';
    std::cout <<
     std::endl;
}
void ArrayList::most_repeated() {
    if (m_capacity == 0)
        return;
    std::vector<int> other_array (m_capacity);
    
    for (int i = 0; i < m_capacity;i++)
        other_array[i] = m_array[i];

    std::sort(other_array.begin(), other_array.end() );
    
    if (m_capacity == 1) {
        std::cout << other_array[0] << std::endl;
        return;
    }

    bool first_print = true;

    for (int i = 0; i < other_array.size() - 1;i++) {
        int next = other_array[i + 1];
        int current = other_array[i];

        if (current != next) {
            if (first_print == true) {
                std::cout << current << ' ' << next << ' ';
                first_print = false;
            }
            else
                std::cout << next;
        }
    }

}