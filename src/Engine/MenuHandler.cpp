#include "Menu/Menu.hpp"

void drawMenu(std::shared_ptr<Menu> menu) {
  for (const auto& input : menu->inputs) {
    switch (input->id) {
      case BUTTON:
        DrawRectangleV(input->pos, input->size, BLACK);
      default:
        break;
    }
  }
}
