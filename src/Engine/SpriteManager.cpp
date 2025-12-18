#include "Engine/SpriteManager.hpp"
#include "Engine/ScreenHandler.hpp"

void SpriteManager::drawSpriteToScreen(std::string spritePath,
                                       Vector2 spritSheetPosition,
                                       Vector2 drawPosition) const {

  Image image = LoadImage((spritesFolderPath + spritePath).c_str());
  Texture2D texture = LoadTextureFromImage(image);
  UnloadImage(image);

  Vector2 spriteSheetScreenPosition =
      ScreenHandler::getTilePosition(spritSheetPosition.x, spritSheetPosition.y);

  Rectangle spriteRectangle = {
      spriteSheetScreenPosition.x, spriteSheetScreenPosition.y,
      ScreenHandler::getTileSize().x, ScreenHandler::getTileSize().y};

  // Rectangle spriteDestination = {}

  // DrawTexturePro(texture, spriteRectangle, Rectangle dest, Vector2
  // origin,
  //                float rotation, Color tint);
}
