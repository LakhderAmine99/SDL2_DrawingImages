#ifndef __Drawing__

#include <SDL2/SDL.h>

class Drawing {

    public:

    Drawing();
    ~Drawing();

    bool init(const char* title,int x,int y,int width,int height,int flags);
    void update();
    void handleEvents();
    void render();
    void clean();

    private:

    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;

    SDL_Rect m_sourceRectangle;
    SDL_Rect m_distinationRectangle;

};

#endif // !__Drawing__