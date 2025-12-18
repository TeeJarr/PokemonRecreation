#pragma once
#include <raylib.h>

class ScreenHandler {
  public:
  static Vector2 getTilePosition(float xPos, float yPos);
  static Vector2 getTileSize();
};
