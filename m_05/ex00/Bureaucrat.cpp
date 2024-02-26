/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busmanov <busmanov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:06:36 by busmanov          #+#    #+#             */
/*   Updated: 2024/02/18 18:43:18 by busmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string& name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& src) : _name(src._name), _grade(src._grade)
{
	
}

Bureaucrat::~Bureaucrat() {
	
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& rhs) {
	if (this != &rhs)
		_grade = rhs.getGrade();
	return *this;
}
	
std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::incrementGrade() {
	if ( _grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

std::ostream& operator<<