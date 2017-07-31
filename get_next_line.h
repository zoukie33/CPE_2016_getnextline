/*
** get_next_line.h for get_next_line.h in /home/gadrat_r/delivery
**
** Made by Romain Gadrat
** Login   <gadrat_r@epitech.net>
**
** Started on  Mon Nov 28 12:43:55 2016 Romain Gadrat
** Last update Mon Jun 26 17:17:46 2017 
*/
#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int);

# ifndef READ_SIZE
#  define READ_SIZE 4
# endif /* !READ_SIZE */

#endif /* !GET_NEXT_LINE_H_ */
