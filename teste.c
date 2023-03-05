/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 21:27:45 by marvin            #+#    #+#             */
/*   Updated: 2023/03/04 21:27:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> //inclui a biblioteca pra usar o write

  
int      rush(int x, int y); // é o responsavel pra definir as medidas do quadrado
void    ft_putchar(char c); //funcao que é responsavel por escrever/imprimir
void    top_row(int x, int i); //linha de cima
void    middle_row(int x, int i);// linha do meio
void    bottom_row(int x, int i); //linha abaixo

int    rush(int x, int y)
{
    int    i;
    int    j;
                
    i = 0;
    j = 0;
    while (j < y)
    { 
        if (j == 0)    
            top_row(x, i);               //enquanto o j for igual a zero o comando vai adicionar uma linha em cima e no meio ,quando o j for igual a "y-1" q é igual a 4, sera adicionado uma linha embaixo 
        else if (j == y - 1)
            bottom_row(x, i);
        else
            middle_row(x, i);
        j++;
    }
    return (0);
}

void    top_row(int x, int i)
{
    while (i < x) // enquanto i=0 for menor q x=5
    {
        if (i == 0)
        {
            ft_putchar('/');  // se o i for = 0 é printado no programa "/" e no final o i ganha mais 1
            i++;
        }
        if (x > 1) // se o x for maior q 1
        {
            if (i != x - 1)  // se i for diferente de x - 1 (que no caso é 4), é printado no programa "*"
                ft_putchar('*');
            else   // senao é adicionado um "\\" e o i ganha mais 1
                ft_putchar('\\');
            i++;
        }
    }
    ft_putchar('\n');
}

void    middle_row(int x, int i)
{
    i = 0;
    while (i < x)                            //enquanto i for menor que x
    {
        if (i == 0 || i == x - 1)            //se i for igual a zero e igual a x - 1 ele imprime "*"
            ft_putchar('*'); 
        else                                // senao ele imprime "" e i ganha mais 1
            ft_putchar(' ');
        i++;
    }
    ft_putchar('\n'); //comando para quebra de linha
}

void    bottom_row(int x, int i)
{
    while (i < x)                       //enquanto i for menor que x
    {
        if (i == 0)                     // se i for igual a 0 ele imprime "\\" e i ganha mais 1
        {
            ft_putchar('\\');
            i++;
        }
        if (x > 1)                     //se x for maior q 1
        {
            if (i != x - 1)            //se i for diferente de x-1 (4) ele vai printar "*" 
                                       //senao ele vai printar o "/" e o i vai ganhar mais um
                ft_putchar('*');
            else
                ft_putchar('/');
            i++;
        }
    }
    ft_putchar('\n');
}