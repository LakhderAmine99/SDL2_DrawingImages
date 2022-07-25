#include "Drawing.h"

Drawing::Drawing(){};

Drawing::~Drawing(){};

bool Drawing::init(const char* title,int x,int y,int width,int height,int flags){

    if(SDL_Init(SDL_INIT_EVERYTHING) >= 0){

        this->m_window = SDL_CreateWindow(title,x,y,width,height,flags);

        if(this->m_window){

            this->m_renderer = SDL_CreateRenderer(this->m_window,-1,SDL_RENDERER_PRESENTVSYNC);

            if(this->m_renderer){

                SDL_SetRenderDrawColor(this->m_renderer,0,0,0,255);

            }else{

                return false;
            }

        }else{

            return false;
        }

    }else{

        return false;
    }

    return true;
};

void Drawing::update(){

};

void Drawing::render(){

};

void Drawing::clean(){

};