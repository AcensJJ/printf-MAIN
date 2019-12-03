/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/18 10:29:41 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 16:14:26 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int		main(void)
{
	int ret;
	int i;

	i = -1;

	// ret = ft_printf("Moi : |%16.2x|\n", -24);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%16.2x|\n", -24);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%16.4X|\n", -24);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%16.4X|\n", -24);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%3%|\n");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%3%|\n");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%16.2u|\n", -24);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%16.2u|\n", -24);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%16.2u|\n", 24);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%16.2u|\n", 24);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%16.2u|\n", 2468);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%16.2u|\n", 2468);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%16.2u|\n", 2);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%16.2u|\n", 2);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%-45.0u|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-45.0u|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%45.0u|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%45.0u|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%0.0u|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0.0u|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%0.0d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0.0d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%0.0x|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0.0x|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%-10.8X|%d|%5.4d|%x|%X|d|\n", -1, 123, 456, 7, 8);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-10.8X|%d|%5.4d|%x|%X|d|\n", -1, 123, 456, 7, 8);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%-10.8X|%-10.8d|%5.4d|%x|%X|d|\n", -1, 123, 456, 7, 8);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-10.8X|%-10.8d|%5.4d|%x|%X|d|\n", -1, 123, 456, 7, 8);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%-10.8X|\n", -1);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-10.8X|\n", -1);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%.x|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.x|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%-10.8X|\n", -12354);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-10.8X|\n", -12354);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%10d|\n", -12354);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%10d|\n", -12354);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%10.6d|\n", -12354);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%10.6d|\n", -12354);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%10.7d|\n", -12354);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%10.7d|\n", -12354);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);
	
	// ret = ft_printf("Moi : |%10.8d|\n", -12354);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%10.8d|\n", -12354);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%-10.8d|\n", -12354);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-10.8d|\n", -12354);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%10c|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%10c|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%.s|\n", NULL);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.s|\n", NULL);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.s|\n", "NULL");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.s|\n", "NULL");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.d|\n", 10);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.d|\n", 10);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.d|\n", 1230);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.d|\n", 1230);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.d|\n", -1230);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.d|\n", -1230);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.p|\n", (void *)123456);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.p|\n", (void *)123456);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%p|\n", (void *)123456);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%p|\n", (void *)123456);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.p|\n", NULL);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.p|\n", NULL);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%c|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%c|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%5c|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%5c|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%10x|\n", 12399);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%10x|\n", 12399);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%x|\n", 12354);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%x|\n", 12354);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%d|\n", 12354);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%d|\n", 12354);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%*.17d|\n", 25, 12354);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.17d|\n", 25, 12354);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.15d|\n", 10);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.15d|\n", 10);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%2d|\n", 10142);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%2d|\n", 10142);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%*d|\n", 10, 10142);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*d|\n", 10, 10142);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%.2s|\n", NULL);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.2s|\n", NULL);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%s|\n", "NULL");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%s|\n", "NULL");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%10s|\n", "NULL");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%10s|\n", "NULL");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%x|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%x|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.x|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.x|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%p|\n", (void *)0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%p|\n",  (void *)0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.p|\n",  (void *)0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.p|\n",  (void *)0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);


	// ret = ft_printf("Moi : |%0d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%01d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%01d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%010d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%010d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%010x|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%010x|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%1.10d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%1.10d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	
	// ret = ft_printf("Moi : |%*.*d|\n", -12, 7, 12);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.*d|\n", -12, 7, 12);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);
	
	// ret = ft_printf("Moi : |%*.*d|\n", -12, -7, 12);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.*d|\n", -12, -7, 12);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%*.*d|\n", 12, -7, 12);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.*d|\n", 12, -7, 12);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%*.*d|\n", 54, 0, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.*d|\n", 54, 0, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);


	

	// ret = ft_printf("Moi : |%.2s|\n", "NULL");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.2s|\n", "NULL");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%s|\n", "NULL");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%s|\n", "NULL");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%10s|\n", "NULL");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%10s|\n", "NULL");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);
	


	// ret = ft_printf("Moi : |%.46s|\n", NULL);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.46s|\n", NULL);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%54.0d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%54.0d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%010.0d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%010.0d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%20s|\n", "fvTymR0e24eqIVl9OqR7F6gUKPQFjG1I5b8JHUL1");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%20s|\n", "fvTymR0e24eqIVl9OqR7F6gUKPQFjG1I5b8JHUL1");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%20s|\n", "Ai0S3P6gQ6zK18MhR21ZQUHo7dfPnNyGr7yXbS0ohPhKYIHM9DObr");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%20s|\n", "Ai0S3P6gQ6zK18MhR21ZQUHo7dfPnNyGr7yXbS0ohPhKYIHM9DObr");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%-2s|\n",  "bonjour");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-2s|\n",  "bonjour");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%54.0s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%54.0s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%54.1s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%54.1s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%54.10s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%54.10s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%20s|\n", "fvTymR0e24eqIVl9OqR7F6gUKPQFjG1I5b8JHUL1");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%20s|\n", "fvTymR0e24eqIVl9OqR7F6gUKPQFjG1I5b8JHUL1");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.20s|\n", "Ai0S3P6gQ6zK18MhR21ZQUHo7dfPnNyGr7yXbS0ohPhKYIHM9DObr");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.20s|\n", "Ai0S3P6gQ6zK18MhR21ZQUHo7dfPnNyGr7yXbS0ohPhKYIHM9DObr");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%54.0s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%54.0s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%54.1s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%54.1s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%54.10s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%54.10s|\n", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);
	
	// ret = ft_printf("Moi : |%.2s|\n", "NULL");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.2s|\n", "NULL");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%s|\n", "NULL");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%s|\n", "NULL");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%10s|\n", "NULL");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%10s|\n", "NULL");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%20s|\n", NULL);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%20s|\n", NULL);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%.s|\n" , "aEyXaFRbMJtoGq");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.s|\n" , "aEyXaFRbMJtoGq");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);
	


	
	// ret = ft_printf("Moi : |%20s|\n",  "1C2XevyByWDGBi33KHXw");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%20s|\n",  "1C2XevyByWDGBi33KHXw");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.s|\n",  "1C2XevyByWDGBi33KHXw");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.s|\n",  "1C2XevyByWDGBi33KHXw");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%10.1i|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%10.1i|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%54.0d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%54.0d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%54.0d|\n", 1423385165);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%54.0d|\n", 1423385165);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%0.0x|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0.0x|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%0.0d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0.0d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	

	// ret = ft_printf("Moi : |%.0x|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.0x|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.0d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.0d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%*.0x|\n", -45, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.0x|\n", -45, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%3i|\n", -388);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%3i|\n", -388);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%3i|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%3i|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%3i|\n", -69);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%3i|\n", -69);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%*.0X|\n", -45, 5);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.0X|\n", -45, 5);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%*.0X|\n", -45, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.0X|\n", -45, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%*.0d|\n", -20, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.0d|\n", -20, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%*.0X|\n", 45, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.0X|\n", 45, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%*.0d|\n", -45, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.0d|\n", -45, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%0.*d|\n", -45, -1);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0.*d|\n", -45, -1);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%0.*d|\n", -45, -9);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0.*d|\n", -45, -9);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%0.*d|\n", -45, -11);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0.*d|\n", -45, -11);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%*d|\n", -45, -11);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*d|\n", -45, -11);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%0.54d|\n", 38);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0.54d|\n", 38);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%0.54d|\n", -38);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0.54d|\n", -38);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%0.*d|\n", -45, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0.*d|\n", -45, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : |%54.0d|\n", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%54.0d|\n", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%--45u|\n", 50);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%--45u|\n", 50);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%--45d|\n", 50);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%--45d|\n", 50);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	// ret = ft_printf("Moi : [%05d]", -38);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : [%05d]", -38);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : [%4.s]", "salut");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : [%4.s]", "salut");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : [%20.10s]", "salut");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : [%20.10s]", "salut");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : [%5.X]", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : [%5.X]", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	
	
	
	// ret = ft_printf("Moi : |%*d|", 0, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*d|", 0, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%0*d|", -10, 42);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0*d|", -10, 42);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.*s|", -3, "Hello");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.*s|", -3, "Hello");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%.*s|", 3, "Hello");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.*s|", 3, "Hello");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);




	// ret = ft_printf("Moi : |%0*d|", -10, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0*d|", -10, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);
	
	// ret = ft_printf("Moi : |%.*d|", -10, 42);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.*d|", -10, 42);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);
	
	// ret = ft_printf("Moi : |%.*d|", -10, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%.*d|", -10, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%*.*d|", 0, -5, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.*d|", 0, -5, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%*.*d|", -5, 0, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.*d|", -5, 0, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%*.*d|", 5, 0, 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.*d|", 5, 0, 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%-1i|", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-1i|", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%-5.0s|", "Hello");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-5.0s|", "Hello");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%-3.0s|", "Hello");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-3.0s|", "Hello");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%*.*s|", 0, -5, "Hello");
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%*.*s|", 0, -5, "Hello");
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%-10.0i|", 0);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-10.0i|", 0);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%-10.0x|", 65535);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-10.0x|", 65535);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%-10.0x|", 655);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-10.0x|", 655);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);




	// ret = ft_printf("Moi : |%-010d|", 42);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%-010d|", 42);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);

	// ret = ft_printf("Moi : |%0*d|", -10, 42);
	// ft_printf("MoiR : ret = |%d|\n", ret);
	// ret = printf("Lui : |%0*d|", -10, 42);
	// printf("LuiR : ret = |%d|\n", ret);
	// i++;ft_printf("i = %d\n\n", i);



	ret = ft_printf("Moi : |%p|\n", (void *)1);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%p|\n", (void *)1);
	printf("LuiR : ret = |%d|\n", ret);
	i++;ft_printf("i = %d\n\n", i);

	ret = ft_printf("Moi : |%p|\n", (void *)321);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%p|\n", (void *)321);
	printf("LuiR : ret = |%d|\n", ret);
	i++;ft_printf("i = %d\n\n", i);

	ret = ft_printf("Moi : |%p|\n", (void *)-1);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%p|\n", (void *)-1);
	printf("LuiR : ret = |%d|\n", ret);
	i++;ft_printf("i = %d\n\n", i);

	return (0);
	// ft_printf("\ns = |%d|,p = |%d|,z = |%d|,l = |%d|,dot = |%d|\nMoi = |", struc->space, struc->print, struc->zero, struc->left, struc->dot);
}
