#include "ArrayList.h"
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
void ArrayList::print(){
    for(int i = 0; i < m_len;i++)
    std::cout << m_array[i] << ' ';
    std::cout <<
     std::endl;
}