/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouss <aelbouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:19:40 by aelbouss          #+#    #+#             */
/*   Updated: 2024/11/02 13:46:45 by aelbouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

    
void ps(int *c)
{
    *c = *c + 1;
}
void    pr(int c)
{
    printf("%d ",c);
}


void    array_iterator(int *arr, int size, void(*p)(int *), void(*f)(int))
{
    int i;

    i = 0;
    while (i < size)
    {
         p(&arr[i]);
         f(arr[i]);
         i++;
    }
}

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int size;

    size = sizeof(arr)/sizeof(arr[0]);
	 array_iterator(arr,size,ps,pr);
}