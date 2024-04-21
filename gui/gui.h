#ifndef GUI_H
#define GUI_H

enum
{
    GUI_KEEP = 0,
    GUI_QUIT_USR_CLOSE,
};

// lib
#include <assert.h>

// usr lib
#include "gui_sdl.h"

int gui_init(void);

int gui_loop(void);

#endif