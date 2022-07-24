#ifndef __Drawing__

#include <SDL2/SDL.h>

class Drawing {

    public:

    Drawing();
    ~Drawing();

    void init();
    void update();
    void handleEvents();
    void render();
    void clean();

    private:

    SDL_Window *d_window;
    SDL_Renderer *d_renderer;
    SDL_Texture *d_texture;

};

#endif // !__Drawing__