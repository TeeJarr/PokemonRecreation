#pragma once
#include <raylib.h>
#include <string>

class Entity {
  public: // loop methods
  virtual void draw();
  virtual void update();

  public: // getters
  virtual int getType() const;
  virtual void setPos(Vector2 pos);
  virtual Rectangle bounds();

  private:
  virtual Texture2D getSprite();

  private: // member data
  std::string spritePath;
  int entityType;
  Rectangle rect;
  int entityState;
};

enum EntityStates {
  FACE_DOWN,
  FACE_UP,
  FACE_LEFT,
  FACE_RIGHT,

  WALK_LEFT,
  WALK_RIGHT,
  WALK_UP,
  WALK_DOWN,

  RUN_UP,
  RUN_DOWN,
  RUN_LEFT,
  RUN_RIGHT,

  SURF_LEFT,
  SURF_RIGHT,
  SURF_UP,
  SURF_DOWN,

  BIKE_UP,
  BIKE_DOWN,
  BIKE_LEFT,
  BIKE_RIGHT
};

enum EntityTypes {
  PLAYER,
  NPC,
  ITEM,
  BOULDER,
  ROCK,
  TREE,
  GRASS,
};
