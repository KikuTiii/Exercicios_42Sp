/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkikuti- <mkikuti-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:20:52 by mkikuti-          #+#    #+#             */
/*   Updated: 2023/03/06 15:46:21 by mkikuti-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
 
 void ft_print_number(void);

 void ft_print_number(void){
    write(1, "0123456789", 10);    
 }

 int main(void){
    ft_print_number();
   return(0);
 }
 