/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlopez-i <mlopez-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:29:16 by codespace         #+#    #+#             */
/*   Updated: 2024/01/15 16:37:50 by mlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/philo.h"

void	ft_error(int error)
{
	if (error == ARGS_ERROR)
	{
		write(1, "Wrong arguments. Try: \n", 23);
		write(1, "- number_of_philosophers\n- time_to_die\n", 39);
		write(1, "- time_to_eat\n- time_to_sleep\n", 30);
		write(1, "- [number_of_times_each_philosopher_must_eat]\n", 46);
	}
	if (error == INIT_ERROR)
		write(1, "Initialization error\n", 21);
	if (error == THREAD_ERROR)
		write(1, "Error creating threads\n", 23);
}

void	ft_free(t_data *data)
{
	if (data->philos)
		free(data->philos);
	if (data->forks)
		free(data->forks);
}
/*	falta destruir los mutex	*/
void	ft_finish(t_data *data)
{
	ft_free(&data);
}