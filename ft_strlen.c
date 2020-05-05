/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgunray <rgunray@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 20:12:59 by rgunray           #+#    #+#             */
/*   Updated: 2020/05/04 20:27:13 by rgunray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlen(const char *s)
{
    size_t len;

    len = 0;
    while(s[len])
        len++;
    return len;
}