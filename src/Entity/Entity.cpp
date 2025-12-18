#include "Entity/Entity.hpp"

void Entity::draw() { DrawRectangleRec(this->rect, RED); }

void Entity::update() {}

Rectangle Entity::bounds() { return this->rect; }

void Entity::setPos(Vector2 pos) {
  this->rect.x = pos.x;
  this->rect.y = pos.y;
}

int Entity::getType() const { return this->entityType; }

Texture2D Entity::getSprite() {
  // TODO: finish implimentation
  Texture2D temp;
  return temp;
}
