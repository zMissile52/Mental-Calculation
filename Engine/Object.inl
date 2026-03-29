#pragma once

template<typename ComponentType, typename ...param>
void Object::AddComponent(param ...parameters) {
	ComponentType* component = new Component(parameters);

	components.emplace_back(component);
}

template<typename ComponentType>
ComponentType* Object::GetComponent() {
	for (Component* c : components) {
		if (ComponentType* search = dynamic_cast<ComponentType>(c)) {
			return search;
		}
	}

	return nullptr;
}