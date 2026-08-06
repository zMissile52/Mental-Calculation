#include "Component.h"
#include <iostream>

Object* Component::GetOwner()
{
	if (owner == nullptr) {
		std::cout << "Component : pas d'owner" << std::endl;
	}
	return owner;
}
