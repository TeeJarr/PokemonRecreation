#include "Entity/GroundItem.hpp"
#include "Engine/ScreenHandler.hpp"
#include "Settings/Settings.hpp"

GroundItem::GroundItem(Vector2 pos, bool isHidden) {
  this->setPos(pos);
  this->isHidden = isHidden;
  this->itemBounds.width = Settings::TILE_SCALED;
  this->itemBounds.height = Settings::TILE_SCALED;
}

void GroundItem::draw() {
  DrawRectangleV(ScreenHandler::getTilePosition(itemBounds.x, itemBounds.y),
                 ScreenHandler::getTileSize(), YELLOW);
}

void GroundItem::update() {}

Rectangle GroundItem::bounds() { return this->itemBounds; }

void GroundItem::setPos(Vector2 pos) {
  this->itemBounds.x = pos.x;
  this->itemBounds.y = pos.y;
}

int GroundItem::getType() const { return this->entityType; }

Texture2D GroundItem::getSprite() {
  Texture2D temp;
  return temp;
}
