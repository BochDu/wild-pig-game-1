#include "gui_sdl.h"

static gui_sdl_t gui_sdl;

int gui_sdl_init(void)
{
    // 初始化SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL_Init fail: %s\n", SDL_GetError());
        return 1;
    }

    // 创建窗口
    gui_sdl.window = SDL_CreateWindow("WILD PIG GAME", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    if (gui_sdl.window == NULL)
    {
        printf("SDL_CreateWindow fail: %s\n", SDL_GetError());
        return 1;
    }

    // 创建渲染器
    gui_sdl.renderer = SDL_CreateRenderer(gui_sdl.window, -1, SDL_RENDERER_ACCELERATED);
    if (gui_sdl.renderer == NULL)
    {
        printf("SDL_CreateRenderer fail: %s\n", SDL_GetError());
        return 1;
    }

    gui_sdl.gui_sdl_state = GUI_SDL_CREATED;

    printf("--- gui sdl init success ---\n");

    return 0;
}

int gui_sdl_deinit(void)
{
    // 清理SDL
    SDL_DestroyRenderer(gui_sdl.renderer);
    SDL_DestroyWindow(gui_sdl.window);
    SDL_Quit();

    gui_sdl.gui_sdl_state = GUI_SDL_DEFAULT;

    printf("--- gui sdl deinit success ---\n");

    return 0;
}

SDL_Renderer *gui_sdl_get_renderer(void)
{
    return gui_sdl.renderer;
}

int gui_sdl_get_state(void)
{
    return gui_sdl.gui_sdl_state;
}
