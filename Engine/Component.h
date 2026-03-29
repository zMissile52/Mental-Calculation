#pragma once
class Component
{
	friend class Object;
private:
	Object* owner;
};

