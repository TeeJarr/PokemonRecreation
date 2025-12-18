#pragma once
#include <raylib.h>
#include <string>

namespace Settings {
  // Screen Constants
  inline const int TILE_SIZE = 16;
  inline const int SCREEN_TILE_WIDTH = 30;
  inline const int SCREEN_TILE_HEIGHT = 20;

  inline const std::string ASSETS_FOLDER = "../../assets/";
  // Screen Variables
  inline int SCREEN_SCALE = 3;
  inline float TILE_SCALED = TILE_SIZE * SCREEN_SCALE;
} // namespace Settings
