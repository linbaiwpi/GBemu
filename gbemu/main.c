#include <common.h>
#include <emu.h>

int main(int argc, char **argv) {
    printf("Welcome to GBemu!\n\r");
    return emu_run(argc, argv);
}
