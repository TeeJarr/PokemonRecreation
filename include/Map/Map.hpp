#pragma once
#include "Map/Tile.hpp"
#include <map>
#include <vector>

struct Map {
  int id;
  std::string name;
  std::vector<Tile> tiles;
};

inline std::map<int, std::string> mapFilePaths;
inline std::map<int, Map> loadedMaps;

Map loadMap(std::string mapFilePath);
void unloadMap(Map& map);

void drawMap(Map& map);
