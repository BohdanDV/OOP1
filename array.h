#pragma once

class Array{
      
        int m_size;
        int m_curr;
        int* m_array;
        int m_step;
        int m_element;
        
    public:
        ~Array();
        Array ();
        void showElements();
        void expandArray(int size);
        int getSize();
        int getElemSize();
        void setValue(int  val);
        void setArray(int  * pArr ,  int size);

};
