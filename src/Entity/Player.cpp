#include "Entity/Player.hpp"
#include "Engine/KeyHandler.hpp"
#include "Engine/ScreenHandler.hpp"
#include "Settings/Settings.hpp"

Player::Player() {
  this->playerBounds = {10, 10, Settings::TILE_SCALED, Settings::TILE_SCALED};
}

void Player::update() { move(); }

void Player::setPos(Vector2 pos) {
  this->playerBounds.x = pos.x;
  this->playerBounds.y = pos.y;
}

void Player::draw() {
  DrawRectangleV(
      ScreenHandler::getTilePosition(this->playerBounds.x, this->playerBounds.y),
      {Settings::TILE_SCALED, Settings::TILE_SCALED}, GREEN);
}

void Player::move() {
  if (IsKeyDown(KeyHandler::getInputKeyValue(MOVE_LEFT)) &&
      !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_RIGHT)) &&
      !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_UP)) &&
      !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_DOWN))) {
    this->playerBounds.x -= 1;
  } else if (IsKeyDown(KeyHandler::getInputKeyValue(MOVE_RIGHT)) &&
             !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_LEFT)) &&
             !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_UP)) &&
             !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_DOWN))) {
    this->playerBounds.x += 1;
  } else if (IsKeyDown(KeyHandler::getInputKeyValue(MOVE_UP)) &&
             !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_LEFT)) &&
             !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_RIGHT)) &&
             !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_DOWN))) {
    this->playerBounds.y -= 1;
  } else if (IsKeyDown(KeyHandler::getInputKeyValue(MOVE_DOWN)) &&
             !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_LEFT)) &&
             !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_RIGHT)) &&
             !IsKeyDown(KeyHandler::getInputKeyValue(MOVE_UP))) {
    this->playerBounds.y += 1;
  }
}

Rectangle Player::bounds() { return this->playerBounds; }

int Player::getType() const { return this->entityType; }

Texture2D Player::getSprite() {
  // TODO: impliment
  Texture2D temp;
  return temp;
}
