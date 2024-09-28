/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_board_part2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:35:03 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/28 05:14:11 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	initialize_row_3(int board[9][9])
{
	board[3][0] = 8;
	board[3][1] = 9;
	board[3][2] = 4;
	board[3][3] = 5;
	board[3][4] = 0;
	board[3][5] = 7;
	board[3][6] = 0;
	board[3][7] = 0;
	board[3][8] = 0;
}

void	initialize_row_4(int board[9][9])
{
	board[4][0] = 0;
	board[4][1] = 0;
	board[4][2] = 0;
	board[4][3] = 0;
	board[4][4] = 0;
	board[4][5] = 0;
	board[4][6] = 0;
	board[4][7] = 0;
	board[4][8] = 0;
}

void	initialize_row_5(int board[9][9])
{
	board[5][0] = 0;
	board[5][1] = 0;
	board[5][2] = 0;
	board[5][3] = 2;
	board[5][4] = 0;
	board[5][5] = 1;
	board[5][6] = 9;
	board[5][7] = 5;
	board[5][8] = 8;
}
