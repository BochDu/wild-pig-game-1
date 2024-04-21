#include "gui.h"

static int gui_quit_check(void);

int gui_init(void)
{
    int ret = gui_sdl_init();
    assert(ret == 0);

    return 0;
}

int gui_loop(void)
{

    if (gui_sdl_get_state() == GUI_SDL_CREATED &&
        gui_quit_check() != GUI_KEEP)
    {
        gui_sdl_deinit();
        return 1;
    }
    return 0;
}

static int gui_quit_check(void)
{
    SDL_Event event;
    if (SDL_PollEvent(&event) && event.type == SDL_QUIT)
    {
        printf("gui_quit : GUI_QUIT_USR_CLOSE\n");
        return GUI_QUIT_USR_CLOSE;
    }
    return GUI_KEEP;
}