/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:37:40 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/10/08 12:42:38 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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