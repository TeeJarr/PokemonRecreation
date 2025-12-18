#include "Entity/EntityManager.hpp"
#include "Entity/Entity.hpp"

void updateEntities(std::vector<std::unique_ptr<Entity>> entityArr) {
  for (auto& entity : entityArr) {
    switch (entity->getType()) {
      case NPC:
        break;
      case PLAYER:
        break;
      case ITEM:
        break;
      case BOULDER:
        break;
      case TREE:
        break;
      case ROCK:
        break;
    }
  }
}

void drawEntities(std::vector<std::unique_ptr<Entity>> entityArr) {
  for (const auto& entity : entityArr) {
    entity->draw();
  }
}
