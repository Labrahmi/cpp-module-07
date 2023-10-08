/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:59:00 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/10/08 12:44:09 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// int main(void)
// {
//     float x = 42.9f, y = 1337.1f;
//     float res;
//     {
//         std::cout << "== SWAP ==" << std::endl;
//         std::cout << "old-> ";
//         std::cout << "x : " << x;
//         std::cout << ", y : " << y << std::endl;
//         swap(x, y);
//         std::cout << "new-> ";
//         std::cout << "x : " << x;
//         std::cout << ", y : " << y << std::endl;
//     }
//     std::cout << std::endl;
//     {
//         std::cout << "== MIN ==" << std::endl;
//         res = min(x, y);
//         std::cout << "min: " << res << std::endl;
//     }
//     std::cout << std::endl;
//     {
//         std::cout << "== MAX ==" << std::endl;
//         res = max(x, y);
//         std::cout << "max: " << res << std::endl;
//     }
//     return 0;
// }

int main(void)
{
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
    std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
    return 0;
}
