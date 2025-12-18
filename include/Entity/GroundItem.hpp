#pragma once
#include "Entity.hpp"

class GroundItem : public Entity {
  public:
  GroundItem(Vector2 pos, bool isHidden);

  void draw() override;
  void update() override;

  Rectangle bounds() override;
  void setPos(Vector2 pos) override;

  bool getIsHidden() const;
  void setIsHidden(bool isHidden);
  int getType() const override;
  Texture2D getSprite() override;

  private:
  int entityType;
  Rectangle itemBounds;
  bool isHidden;
};
