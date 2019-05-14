/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cooswold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 19:27:58 by cooswold          #+#    #+#             */
/*   Updated: 2018/05/15 14:52:03 by cooswold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**rm_piece(char **board)
{
	int i;
	int j;
	int count;

	i = -1;
	count = 0;
	g_pieces_placed--;
	while (++i < g_bs)
	{
		j = -1;
		while (++j < g_bs)
		{
			if (board[i][j] == g_pieces_placed + 65)
			{
				board[i][j] = '.';
				count++;
				if (count == 1)
				{
					g_x = j + 1;
					g_y = i;
				}
			}
		}
	}
	return (board);
}
