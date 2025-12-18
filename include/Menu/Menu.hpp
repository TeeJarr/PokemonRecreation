#pragma once
#include <map>
#include <memory>
#include <raylib.h>
#include <string>
#include <vector>

enum InputType {
  BUTTON,
  SLIDER,
  TEXT,
  NUMBER,
  DROPDOWN,
};

struct Input {
  int id;
  Vector2 pos;
  Vector2 size;
};

struct Button : public Input {
  bool isButton;
};

struct Title : public Input {
  std::string text;
};

struct Menu {
  std::string name;
  std::vector<std::unique_ptr<Input>> inputs;
};

void drawMenu(std::shared_ptr<Menu> menu);

bool buttonClicked(int inputId, Vector2& inputSize, Vector2& inputPos);

inline std::map<std::string, Menu> menusMap;
