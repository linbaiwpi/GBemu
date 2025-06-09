#include <stdio.h>
#include <emu.h>
#include <cart.h>
#include <cpu.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

static emu_context ctx;

void dealy(u32 ms) {
    SDL_Delay(ms);
}

int emu_run(int argc, char **argv) {
    printf("emu_run!\n");

    if (argc < 2) {
        printf("Usage: emu <rom_file>\n");
        return -1;
    }

    // load cartridge
    if (!cart_load(argv[1])) {
        printf("Failed to load ROM file: %s\n", argv[1]);
        return -1;
    }

    printf("Cart loaded..\n");

    SDL_Init(SDL_INIT_VIDEO);
    printf("SDL INIT\n");
    TTF_Init();
    printf("TTF INIT\n");

    cpu_init();

    ctx.running = true;
    ctx.paused = false;
    ctx.ticks = 0;

    while(ctx.running) {
        if (ctx.paused) {
            dealy(10);
            continue;
        }

        if (!cpu_step()) {
            printf("CPU Stopped\n");
            return -3;
        }

        ctx.ticks++;
    }

    return 0;
}
