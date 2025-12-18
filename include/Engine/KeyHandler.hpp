#pragma once
#include <map>

class KeyHandler {
  public:
  KeyHandler();

  static int getInputKeyValue(int inputMapping);
  static void changeInputKeyMapping(int inputMapping, int keyCode);

  private:
  inline static std::map<int, int> inputMappingMap;
};

enum INPUT {
  // Movement
  MOVE_UP,
  MOVE_DOWN,
  MOVE_LEFT,
  MOVE_RIGHT,

  // Interact
  ACCEPT,
  CANCEL,

  // Control
  PAUSE,
  SELECT
};
