#ifndef WINDOW_MANAGER_HPP
#define WINDOW_MANAGER_HPP

#include <SDL2/SDL.h>
#include <iostream>
#include <string>

using namespace std;

#define WINDOW_TITLE "Game Window Title"
#define WINDOW_WIDTH 1440
#define WINDOW_HEIGHT 900
#define WINDOW_RES_WIDTH 1440
#define WINDOW_RES_HEIGHT 900
#define WINDOW_BACKGROUND_R 0x00
#define WINDOW_BACKGROUND_G 0x00
#define WINDOW_BACKGROUND_B 0x00

class WindowManager {
public:
  SDL_Window *window;
  SDL_Renderer *renderer;
  void init();
  void quit();
};

#endif
