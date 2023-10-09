/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:47:24 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/10/09 08:32:07 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void execute_array()
{
    Array<std::string> myArray(10);
    for (unsigned int i = 0; i < myArray.size(); i++)
    {
        std::string newStr;
        newStr = "T[] = ";
        newStr += std::to_string(i + 1);
        myArray[i] = newStr;
    }
    for (unsigned int i = 0; i < myArray.size(); i++)
        std::cout << myArray[i] << std::endl;
}

int main(void)
{
    execute_array();
    while (1);
    return 0;
}
