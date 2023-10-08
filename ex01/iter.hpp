/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:52:57 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/10/08 14:46:54 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename Func>
void iter(T *array, unsigned int length, Func func)
{
    for (unsigned int i = 0; i < length; i++)
    {
        func(array[i]);
    }
}

template <typename U>
void doubleElement(U &element)
{
    element *= 2;
}

template <typename T>
void print_array(T *arr, unsigned int length)
{
    for (unsigned int i = 0; i < length; i++)
    {
        std::cout << "arr[" << i << "] : " << arr[i] << std::endl;
    }
    std::cout << std::endl;
}
