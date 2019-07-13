#include "Node.h"
#pragma once

const std::string Node::getName()
{
	return name;
}

void Node::setName(std::string n)
{
	name=n;
}

const std::string Node::getLastName()
{
	return lastName;
}

void Node::setLastName(std::string n)
{
	lastName=n;
}

const std::string Node::getEmail()
{
	return email;
}

void Node::setEmail(std::string n)
{
	email=n;
}

void Node::setBirthDate(unsigned char add_BD, unsigned char add_BM, unsigned char add_BY) {
	birthDay = (unsigned char)add_BD;
	birthMonth = (unsigned char)add_BM;
	birthYear = (unsigned char)add_BY;
}

const std::string Node::getFullName()
{
	return name+" "+lastName;
}

const unsigned int Node::getAge() {
	unsigned int age = 19;
	if (birthYear <= age) {
		age = age - int((unsigned char)birthYear);
		return age;
	}
	else {
		age = 0;
		return age;
	}
}

bool SingleNode::operator>(SingleNode &Lmao)
{
	return this->getName() > Lmao.getName();
}

bool SingleNode::operator<( SingleNode &Lmao)
{
	return this->getName() <Lmao.getName();
}

SingleNode::~SingleNode()
{

	if (next != nullptr)
	{
		delete next;
	}


}

std::ostream & operator << (std::ostream & out, DoubleNode & node) 
{
	// TODO: insertar una instrucción return aquí
	
	out << "\nEl nombre es:" << node.getFullName() << "\nLa edad es: " << node.getAge() << "\nEl email es: " << node.getEmail();
	if (node.next == nullptr) {
		return out;
	}
	else 
	{
		return out << node.next;
	}
}
std::istream & operator >>(std::istream & inp, DoubleNode & N)
{
	std::cout << "Ingrese su nombre: "; inp >> N.name;
	std::cout << "Ingrese su apellido: "; inp >> N.lastName;
	std::cout << "Ingrese su email: "; inp >> N.email;
	std::cout << "Ingrese el dia que naciste: "; inp >> N.birthDay;
	std::cout << "Ingrese el mes que naciste: "; inp >> N.birthMonth;
	std::cout << "Ingrese el año en que naciste: "; inp >> N.birthYear;

	N.setName(N.name);
	N.setLastName(N.lastName);
	N.setEmail(N.email);
	N.setBirthDate(N.birthDay, N.birthMonth, N.birthYear);

	return inp;
}
/////////////////////////////////////////////////////////////////////////////////////
std::istream & operator>>(std::istream & inp, SingleNode & N)
{
	std::cout << "Ingrese su nombre: "; inp >> N.name;
	std::cout << "Ingrese su apellido: "; inp >> N.lastName;
	std::cout << "Ingrese su email: "; inp >> N.email;
	std::cout << "Ingrese el dia que naciste: "; inp >> N.birthDay;
	std::cout << "Ingrese el mes que naciste: "; inp >> N.birthMonth;
	std::cout << "Ingrese el año en que naciste: "; inp >> N.birthYear;

	return inp;
}
std::ostream & operator << (std::ostream & out, SingleNode & node) {
	// TODO: insertar una instrucción return aquí
	out << "\nThe name is:" << node.getFullName() << "\nThe age is: " << node.getAge() << "\nThe email is: " << node.getEmail();
	if (node.next == nullptr) {
		return out;
	}
	else {
		return out << node.next;
	}
}

bool DoubleNode::operator>(DoubleNode&Lnao)
{
	return this->getName() > Lnao.getName();
}

bool DoubleNode::operator<(DoubleNode &lmao)
{
	return this->getName() < lmao.getName();
}

DoubleNode::~DoubleNode()
{

	if (next != nullptr)
	{
		delete next;
	}


}
