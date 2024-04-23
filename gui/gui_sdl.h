#ifndef GUI_SDL_H
#define GUI_SDL_H

#include "SDL.h"
#include <stdio.h>

enum
{
    GUI_SDL_DEFAULT = 0,
    GUI_SDL_CREATED,
};

typedef struct
{
    SDL_Window *window;
    SDL_Renderer *renderer;

    int gui_sdl_state;
} gui_sdl_t;

int gui_sdl_init(void);
int gui_sdl_deinit(void);

SDL_Renderer *gui_sdl_get_renderer(void);
int gui_sdl_get_state(void);

#endif