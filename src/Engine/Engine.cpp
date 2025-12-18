#include "Engine/Engine.hpp"
#include "Engine/KeyHandler.hpp"
#include "Settings/Settings.hpp"
#include <Engine/ScreenHandler.hpp>
#include <raylib.h>

Engine::Engine() {
  initEngine();

  while (!WindowShouldClose()) {
    update();
    draw();
  }

  CloseWindow();
}

void Engine::draw() {
  BeginDrawing();
  ClearBackground(BLACK);
  // drawTiles();

  player->draw();
  groundItem->draw();

  if (PauseManager::getPauseState()) {
    DrawTextEx(GetFontDefault(), "Pause", ScreenHandler::getTilePosition(15, 10), 24,
               1, WHITE);
  }
  EndDrawing();
}

void Engine::drawTiles() {
  for (int y = 0; y < Settings::SCREEN_TILE_HEIGHT; y++) {
    for (int x = 0; x < Settings::SCREEN_TILE_WIDTH; x++) {
      Vector2 pos = ScreenHandler::getTilePosition(x, y);
      Rectangle rec = {pos.x, pos.y, (float)Settings::TILE_SCALED,
                       (float)Settings::TILE_SCALED};
      DrawRectangleLinesEx(rec, 0.5, WHITE);
    }
  }
}

float Engine::resetUpdateTimer() { return 0.125; }

bool Engine::countPlayerUpdateTimer() {
  !IsKeyDown(KeyHandler::getInputKeyValue(CANCEL))
      ? playerUpdatetimer -= GetFrameTime()
      : playerUpdatetimer -= GetFrameTime() * 2;
  if (playerUpdatetimer <= 0) {
    playerUpdatetimer = resetUpdateTimer();
    return true;
  }
  return false;
}

bool Engine::countUpdateTimer() {
  updateTimer -= GetFrameTime();
  if (updateTimer <= 0) {
    updateTimer = resetUpdateTimer();
    return true;
  }
  return false;
}

void Engine::update() {
  if (IsKeyPressed(KeyHandler::getInputKeyValue(PAUSE))) {
    PauseManager::setPauseState(!PauseManager::getPauseState());
  }
  if (!PauseManager::getPauseState()) {
    if (countPlayerUpdateTimer()) {
      player->update();
    }
    if (countUpdateTimer()) {
      // rest of entity updates
    }
  } else {
  }
}

void Engine::initEngine() {
  Vector2 windowSize = getWindowSettings();
  InitWindow(windowSize.x, windowSize.y, "Pokemon");
  InitAudioDevice();
  // SetTargetFPS(60);

  player = new Player();
  KeyHandler();
  PauseManager::setPauseState(false);
}

Vector2 Engine::getWindowSettings() {
  float screenWidth =
      Settings::TILE_SIZE * Settings::SCREEN_TILE_WIDTH * Settings::SCREEN_SCALE;
  float screenHeight =
      Settings::TILE_SIZE * Settings::SCREEN_TILE_HEIGHT * Settings::SCREEN_SCALE;
  return {screenWidth, screenHeight};
}
