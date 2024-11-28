# GBemu
This is the note and code repository during my leanring [LLD - Gameboy Emulator Developme](https://www.youtube.com/watch?v=e87qKixKFME&list=PLVxiWMqQvhg_yk4qy2cSC3457wZJga_e5&index=1). All the technical materials are from LLD_gbemu/docs[1] and [2].

## GameBoy Hardware Components
[4] shows some hardware details of GB

| ITEM               | SPEC                                            |
| ------------------ | ----------------------------------------------- |
| CPU                | 8-bit (Similar to the Z80 processor.)           |
| Main RAM           | 8K Byte                                         |
| Video RAM          | 8K Byte                                         |
| Screen Size        | 2.6"                                            |
| Resolution         | 160x144 (20x18 tiles)                           |
| Max # of sprites   | 40                                              |
| Max # sprites/line | 10                                              |
| Max sprite size    | 8x16                                            |
| Min sprite size    | 8x8                                             |
| Clock Speed        | 4.194304 MHz (4.295454 SGB, 4.194/8.388MHz GBC) |
| Horiz Sync         | 9198 KHz (9420 KHz for SGB)                     |
| Vert Sync          | 59.73 Hz (61.17 Hz for SGB)                     |
| Sound              | 4 channels with stereo sound                    |
| Power              | DC6V 0.7W (DC3V 0.7W for GB Pocket)             |

Nintendo documents describe the CPU & instructions speed in machine cycles while this document describes them in clock cycles. Here is the translation: `1 machine cycle = 4 clock cycles`

|                | GB CPU Speed | NOP Instruction |
| -------------- | ------------ | --------------- |
| Machine Cycles | 1.05MHz      | 1 cycle         |
| Clock Cycles   | 4.19MHz      | 4 cycles        |

## Misc
There are still some other emulators written in other programming language like [5]

## Reference
[1] [LLD - Gameboy Emulator Developme](https://www.youtube.com/watch?v=e87qKixKFME&list=PLVxiWMqQvhg_yk4qy2cSC3457wZJga_e5&index=1)
[2] [GB 开发资源列表](https://github.com/apachecn/awesome-gb-dev-zh)
[3] [The Game Boy, a hardware autopsy]([https://www.youtube.com/watch?v=XPGOh1_cVG8](https://www.youtube.com/watch?v=RZUDEaLa5Nw))
[4] [Game BoyTM CPU Manual](http://marc.rawer.de/Gameboy/Docs/GBCPUman.pdf)
[5] [PyBoy](https://github.com/Baekalfen/PyBoy/tree/master)
