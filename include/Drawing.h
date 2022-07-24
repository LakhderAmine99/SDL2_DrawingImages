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

    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;

};

#endif // !__Drawing__