#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

template <typename T>
void swap(T &t1, T &t2)
{
    T temp;

    temp = t1;
    t1 = t2;
    t2 = temp;
}

template <typename T>
T &min(T &t1, T &t2)
{
    if (t1 < t2)
        return t1;
    return t2;
}

template <typename T>
T &max(T &t1, T &t2)
{
    if (t1 > t2)
        return t1;
    return t2;
}

#endif