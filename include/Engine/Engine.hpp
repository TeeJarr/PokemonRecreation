#pragma once
#include "Entity/GroundItem.hpp"
#include "Entity/Player.hpp"
#include "PauseManager.hpp"
#include <raylib.h>

class Engine {
  public:
  Engine();

  private:
  void draw();
  void update();

  void drawTiles();
  void initEngine();
  Vector2 getWindowSettings();
  float resetUpdateTimer();

  bool countUpdateTimer();
  bool countPlayerUpdateTimer();

  private:
  Player* player;
  GroundItem* groundItem = new GroundItem({5, 5}, false);

  float updateTimer = resetUpdateTimer();
  float playerUpdatetimer = resetUpdateTimer();
};
