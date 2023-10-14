/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:20:34 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/14 15:46:16 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	Harl
{
public:
	Harl(const std::string& lvlCap);
	void	complain(std::string level);
private:
	Harl();
	int		m_lvlCap;
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	call(std::string req, std::string level, void(Harl::*fun)(void));
	void	filter(const std::string& level);
};
