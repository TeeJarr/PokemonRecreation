#include "Map/Tile.hpp"
#include "Engine/ScreenHandler.hpp"

void drawTile(Tile& tile) {
  Image textureImage = LoadImage(tile.texturePath.c_str());
  Texture2D tileTexture = LoadTextureFromImage(textureImage);
  DrawTextureV(tileTexture, ScreenHandler::getTilePosition(tile.pos.x, tile.pos.y),
               WHITE);
}

void tileInteraction(int tileType) {
  switch (tileType) {}
}

bool tileCollision(int tileType) {
  switch (tileType) {
    case GROUND:
      return true;
      break;
    case WATER:
      return false;
      break;
    default:
      return false;
      break;
  }
}
