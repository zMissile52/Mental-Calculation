#pragma once

template<typename ComponentType, typename ...param>
void Object::AddComponent(param ...parameters) {
	ComponentType* component = new Component(parameters);

	components.emplace_back(component);
}