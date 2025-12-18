#pragma once

class PauseManager {
  public:
  static bool getPauseState();
  static void setPauseState(bool pauseStateValue);

  private:
  inline static bool pauseState = false;
};
