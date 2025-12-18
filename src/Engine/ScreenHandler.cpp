#include "Engine/ScreenHandler.hpp"
#include "Settings/Settings.hpp"

Vector2 ScreenHandler::getTilePosition(float xPos, float yPos) {
  if (xPos > Settings::SCREEN_TILE_WIDTH || yPos > Settings::SCREEN_TILE_HEIGHT) {
    return {};
  }

  Vector2 pos;
  pos.x = xPos * Settings::TILE_SIZE * Settings::SCREEN_SCALE;
  pos.y = yPos * Settings::TILE_SIZE * Settings::SCREEN_SCALE;
  return pos;
}

Vector2 ScreenHandler::getTileSize() {
  return {Settings::TILE_SCALED, Settings::TILE_SCALED};
}
