#include <iostream>
#include <cstring>
#include "array.h"
using namespace std;

Array::Array(){
   
    int* Arr = new int[1];     
    m_size = 1;
    m_curr = 0;
    m_array = Arr;
          

}

Array::~Array(){
    delete [] m_array;
}

void Array::showElements(){

    

    for(int i=0; i<m_curr; i++) cout<<m_array[i]<<" ";

    cout<<endl;
}

void Array::expandArray(int size){

   

    int* tmp = new int[size+m_size];
    memcpy(tmp, m_array, m_size*sizeof(int));
   
    delete[] m_array;
    
    m_array = tmp;
    m_size=m_size+size;

    
    
}

int Array::getSize(){

    return m_size;

}

int Array::getElemSize(){

    return m_curr;
}

void Array::setValue(int val){

    

    if(m_curr == m_size) expandArray(1);
    
    m_array[m_curr] = val;
    m_curr++;
    for(int i=0; i<m_curr; i++) cout<<m_array[i]<<" ";


}

void Array::setArray(int  * pArr ,  int size) {
   
    if((m_curr + size) > m_size) expandArray(m_size+size);


    for (int i = 0; i < size; ++i) {
        m_array[m_curr + i] = pArr[i];
    }

    m_curr = m_curr+size;

   
}

