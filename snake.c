#include <stdio.h>
#include <SDL2/SDL.h>

int main() {
    printf("Hello Snake\n");

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindow("Classic Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

    int running = 1;
    while (running) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = 0;
            }
        }
        SDL_Delay(100);
    }

    SDL_Quit();
    return 0;
}
