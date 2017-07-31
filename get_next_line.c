/*
** get_next_line.c for getnextline in /home/gadrat_r/CPE_2014_getnextline
**
** Made by Romain Gadrat
** Login   <gadrat_r@epitech.net>
**
** Started on  Sun Dec  4 06:23:43 2016 Romain Gadrat
** Last update Sun Dec  4 17:05:22 2016 Romain Gadrat
*/

#include "get_next_line.h"

char            *get_next_line(const int fd)
{
  static char   buffer[READ_SIZE + 1];
  static int    last = 0;
  static int    cnt = 0;
  char          *final;
  int           i;

  if (last == 0 || cnt == last)
    if ((last = read(fd, buffer, READ_SIZE)) < 1)
      return (NULL);
    else
      cnt = 0;
  if ((final = malloc(sizeof(char) * READ_SIZE + 1)) == NULL)
    return (NULL);
  i = 0;
  while (i <= READ_SIZE)
    final[i++] = '\0';
  i = 0;
  while (buffer[cnt] != '\n' && cnt < last && buffer[cnt] != '\0')
    final[i++] = buffer[cnt++];
  final[i] = 0;
  if (buffer[cnt] == '\n')
    ++cnt;
  return (final);
}
