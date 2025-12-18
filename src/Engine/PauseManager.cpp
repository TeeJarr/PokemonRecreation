#include "Engine/PauseManager.hpp"

bool PauseManager::getPauseState() { return PauseManager::pauseState; }

void PauseManager::setPauseState(bool pauseStateValue) {
  PauseManager::pauseState = pauseStateValue;
}
