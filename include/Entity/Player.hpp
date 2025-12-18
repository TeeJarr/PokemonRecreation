#pragma once
#include "Entity.hpp"
#include <map>
#include <memory>

class Player : Entity {
  public:
  Player();

  public: // loop functions
  void draw() override;
  void update() override;

  public: // getters
  Rectangle bounds() override;
  void setPos(Vector2 pos) override;
  int getType() const override;
  Texture2D getSprite() override;

  private: // member methods
  void move();

  private: // member variables
  std::string spritePath;
  int spriteState;
  int playerState;
  std::map<int, std::unique_ptr<Texture2D>> playerSpriteMap;

  int entityType;
  Rectangle playerBounds;
};

namespace SpritePosition {
  enum SpritePosition {
    WALK_DOWN_1,
    WALK_LEFT_1,
    WALK_RIGHT_1,
    WALK_UP_1,

    WALK_DOWN_2,
    WALK_LEFT_2,
    WALK_RIGHT_2,
    WALK_UP_2,

    FACE_DOWN,
    FACE_UP,
    FACE_LEFT,
    FACE_RIGHT,

    RUN_LEFT_1,
    RUN_LEFT_2,
    RUN_RIGHT_1,
    RUN_RIGHT_2,
    RUN_UP_1,
    RUN_UP_2,
    RUN_DOWN_1,
    RUN_DOWN_2

    // add surfing
  };
}

namespace PlayerStates {
  enum PlayerStates {
    WALK,
    RUN,
    BIKE,
    SURF,
  };
}
