#pragma once

template<typename ComponentType, typename ...param>
ComponentType* Object::AddComponent(param ...parameters) {
	ComponentType* component = new ComponentType(parameters...);
	component->owner = this;
	components.emplace_back(component);

	return component;
}

template<typename ComponentType>
ComponentType* Object::GetComponent() {
	for (Component* c : components) {
		if (ComponentType* search = dynamic_cast<ComponentType*>(c)) {
			return search;
		}
	}

	return nullptr;
}