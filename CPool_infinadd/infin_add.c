/*
** infin_add.c for infin_add in /home/jeremy.el-kaim/CPool_infinadd
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Mon Oct 24 09:40:06 2016 jeremy elkaim
** Last update Wed Oct 26 15:55:50 2016 jeremy elkaim
*/

int	infin_add(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (i != 0 && i > 0)
    {
      *s1 + *s2;
      i = i - 1;
    }
  return (0);
}

void	my_putstr(char *str, int x)
{
  int	i;

  i = 0;
  if (x == 1)
    {
      while (str[i] != '\0')
	{
	  write (1, &str[i], 1);
	  i = i + 1;
	}
    }
  else
    {
      while (str[i] != '\0')
	{
	  write (2, &str[i], 1);
	  i = i + 1;
	}
    }
}

int	checknb(char *nb, int j, int temp, int z)
{
  int	x;
  int	u;
  int	k;
  int	te;
  int	i;
  int	myreturn;
  
  i = j;
  k = z;
  while (i >= 0 )
    {
      nb[i] = nb[i] - 48;
      temp = nb[i];
      if (temp < 0 || temp > 9)
	myreturn = 84;
      i = i - 1;
    }
  x = 0;
  temp = 0;
  i = k;
  while (i >= 0)
    {
      nb[i] = nb[i] - 48;
      te = nb[i];
      if (te < 0 || te > 9)
	myreturn = 84;
      i = i - 1;
    }
  while (x < j)
    {
      temp = temp + nb[x];
      x = x + 1;
    }
  u = 0;
  te = 0;
  while (u < k)
    {
      te = te +nb[x];
      u = u + 1;
    }
  return (0);
}

int     main(int ac, char **av)
{
  int   i;
  int   j;
  int   k;
  int   myreturn;

  i = 0;
  j = 0;
  k = 0;
  myreturn = 0;
  i = malloc(800 * sizeof(int));
  j = malloc(800 * sizeof(int));
  while (av[0][i] != '\0')
    {
      if (av[i][1] == 45 && (av[i][2] == '\0'))
	j = j + 1;
      i = i + 1;
    }
  i = 0;
  while ((av[j][i] != '\0') && (j != 0) && (myreturn == 0))
    {
      if ((av[j][i] < 48) || (av[j][i] > 57))
	myreturn = 0;
      i = i + 1;
    }
  if (myreturn != 84)
    free(i);
  free(j);
  return (0);
}
