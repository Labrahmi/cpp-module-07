#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class Array
{
private:
    T *element;
    unsigned int length;

public:
    Array() : element(NULL), length(0){}
    //
    Array(unsigned int n) : length(n)
    {
        this->element = new T[n]();
    }
    //
    Array(const Array &src) : length(src.length)
    {
        this->element = new T[this->length]();
        for (unsigned i = 0; i < this->length; i++)
            this->element[i] = src.element[i];
    }
    //
    Array &operator=(Array const &rhs)
    {
        if (this != &rhs)
        {
            delete[] this->element;
            this->length = rhs.length;
            this->element = new T[this->length]();
            for (unsigned i = 0; i < this->length; i++)
                this->element[i] = rhs.element[i];
        }
        return (*this);
    }
    //
    ~Array()
    {
        delete[] this->element;
    }
    //
    T& operator[](unsigned int index)
    {
        if (index < this->length)
            return this->element[index];
        else
            throw std::exception();
    }
    //
    const T& operator[](unsigned int index) const
    {
        if (index < this->length)
            return this->element[index];
        else
            throw std::exception();
    }
    //
    unsigned int size()
    {
        return this->length;
    }
    //
};

#endif