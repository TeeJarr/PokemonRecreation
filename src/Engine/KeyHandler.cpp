#include "Engine/KeyHandler.hpp"
#include <raylib.h>

KeyHandler::KeyHandler() {
  // add logic to load keys from settings
  // create settings if no settings file is found

  KeyHandler::inputMappingMap.insert_or_assign(MOVE_UP, KEY_UP);
  KeyHandler::inputMappingMap.insert_or_assign(MOVE_RIGHT, KEY_RIGHT);
  KeyHandler::inputMappingMap.insert_or_assign(MOVE_LEFT, KEY_LEFT);
  KeyHandler::inputMappingMap.insert_or_assign(MOVE_DOWN, KEY_DOWN);

  KeyHandler::inputMappingMap.insert_or_assign(PAUSE, KEY_ENTER);
  KeyHandler::inputMappingMap.insert_or_assign(SELECT, KEY_LEFT_SHIFT);

  KeyHandler::inputMappingMap.insert_or_assign(ACCEPT, KEY_X);
  KeyHandler::inputMappingMap.insert_or_assign(CANCEL, KEY_Z);
}

void KeyHandler::changeInputKeyMapping(int inputMapping, int keyCode) {
  if (!KeyHandler::inputMappingMap.contains(inputMapping)) {
    return;
  }

  KeyHandler::inputMappingMap.insert_or_assign(inputMapping, keyCode);
}

int KeyHandler::getInputKeyValue(int inputMapping) {
  if (KeyHandler::inputMappingMap.contains(inputMapping)) {
    return KeyHandler::inputMappingMap.at(inputMapping);
  } else {
    return 0;
  }
}
