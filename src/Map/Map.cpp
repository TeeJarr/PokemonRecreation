#include "Map/Map.hpp"
#include "Map/Tile.hpp"
#include <cassert>
#include <filesystem>
#include <fstream>

Map loadMap(std::string mapFilePath) {
  Map map;
  std::ifstream in(mapFilePath);
  assert(in.is_open());
  // TODO: load tiles into map;
  // TODO: implement JSON file reading;
  return map;
}

void drawMap(Map& map) {
  for (auto& tile : map.tiles) {
    drawTile(tile);
  }
}
