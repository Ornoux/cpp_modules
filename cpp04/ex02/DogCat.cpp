/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:19:46 by npatron           #+#    #+#             */
/*   Updated: 2024/04/08 14:13:53 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogCat.hpp"

// DOGGY DOGGY //

Dog::Dog() : AAnimal() // CONSTRUCTOR
{
    std::cout << "Dog constructor called." << std::endl;
    setType("Dog");
    _brain = new Brain();
    return ;
}

Dog::~Dog() // DESTRUCTOR
{
    std::cout << "Dog destructor called." << std::endl;
    delete _brain;
    return ;
}

Dog::Dog(const Dog& src) : AAnimal(src) // COPY CONSTRUCTOR
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
    return ;
}

Dog& Dog::operator=(const Dog& rhs)
{
    std::cout << "Dog copy assignment called" << std::endl;
    if (this != &rhs)
        this->type = rhs.getType();
    return (*this);
}

// MEMBER FUNCTION

void    Dog::makeSound()
{
    std::cout << "Scoooooooobydoobydooooooooooo OUAF OUAF" << std::endl;
    return ;
}

// CATTY CATTY //

Cat::Cat() : AAnimal() // CONSTRUCTOR
{
    std::cout << "Cat constructor called." << std::endl;
    setType("Cat");
    _brain = new Brain();
    return ;
}

Cat::~Cat() // DESTRUCTOR
{
    std::cout << "Cat destructor called." << std::endl;
    delete _brain;
    return ;
}

Cat::Cat(const Cat& src) : AAnimal(src) // COPY CONSTRUCTOR
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
    return ;
}

Cat& Cat::operator=(const Cat& rhs)
{
    std::cout << "Cat copy assignment called" << std::endl;
    if (this != &rhs)
        this->type = rhs.getType();
    return (*this);
}

// MEMBER FUNCTION

void    Cat::makeSound()
{
    std::cout << "GARFIEEEEEELD MIAOU MIAOU" << std::endl;
    return ;
}