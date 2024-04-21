// lib
#include <SDL2/SDL.h>
#include <stdio.h>
#include <assert.h>

// usr lib
#include "app.h"
#include "gui.h"

int WinMain(int argc, char *argv[])
{
    app_init();
    gui_init();

    while (1)
    {
        int break_ret;

        app_loop();

        break_ret = gui_loop();
        if (break_ret)
        {
            printf("gui_loop break_ret : %d\n", break_ret);
            break;
        }
    }

    return 0;
}

