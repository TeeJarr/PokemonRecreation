#pragma once
#include <raylib.h>
#include <string>

enum TileType {
  GROUND,
  WALL,
  GRASS,
  WATER,
  WATERFALL,
  WHIRLPOOL,
  ROCK,
  BOULDER,
  TREE
};

struct Tile {
  int type;
  std::string texturePath;
  Vector2 pos;
};

void drawTile(Tile& tile);

// FIXME:
void tileInteraction(int tileType);

// FIXME:
bool tileCollision(int tileType);
