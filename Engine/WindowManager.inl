#pragma once
template<typename SceneType>
void WindowManager::AddScene() {
	scenes.emplace_back(std::make_unique<SceneType>());
}