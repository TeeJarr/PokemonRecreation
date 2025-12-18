#pragma once
#include "Settings/Settings.hpp"
#include <string>

class SpriteManager {
  public:
  void drawSpriteToScreen(std::string spritePath, Vector2 spritSheetPosition,
                          Vector2 drawPosition) const;

  private:
  const std::string spritesFolderPath = Settings::ASSETS_FOLDER + "sprites/";
};
