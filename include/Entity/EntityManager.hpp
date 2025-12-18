#pragma once
#include "Entity.hpp"
#include <memory>
#include <vector>

inline std::vector<std::unique_ptr<Entity>> entityArr;

void updateEntities(std::vector<std::unique_ptr<Entity>> entityArr);

void drawEntities(std::vector<std::unique_ptr<Entity>> entityArr);
