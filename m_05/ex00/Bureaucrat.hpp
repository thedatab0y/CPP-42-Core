/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busmanov <busmanov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:59:39 by busmanov          #+#    #+#             */
/*   Updated: 2024/02/11 17:56:13 by busmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

		Bureaucrat();
	public:
		Bureaucrat( const std::string& name, int grade);
		Bureaucrat( const Bureaucrat& srcs);
		~Bureaucrat();
		
		Bureaucrat& operator=( const Bureaucrat& rhs);
		
		std::string getName() const;
		int getGrade() const;
		
		void incrementGrade();
		void decrementGrade();
		
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() { 
					return "Grade too high";
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Grade too less";
				}
		};
	
};

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs);

#endif