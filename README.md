# Raspberry Pi Pico 2 Learning Repository (RP2350)

This repository is a structured learning space for Raspberry Pi Pico 2 (RP2350) development using the Pico SDK, CMake, and Ninja build system.

Each experiment (blink, PWM, UART, I2C, SPI, etc.) is organized as a separate project folder inside this repository.

---

# 🧠 Purpose

This repo is used to learn and practice:

- Bare-metal embedded programming
- ARM cross-compilation
- Raspberry Pi Pico SDK usage
- GPIO, UART, I2C, SPI hardware interfacing
- Real embedded system development workflows

---

# ⚙️ Global Setup Requirements

Before creating any project, install:

- ARM GNU Toolchain (`arm-none-eabi-gcc`)
- CMake
- Ninja
- Git
- Raspberry Pi Pico SDK

Set the SDK path once:

```powershell
setx PICO_SDK_PATH "C:\pico-sdk"

Then restart your terminal.

🚀 How to Create a New Pico Project (Standard Workflow)

Follow this exact process for every new experiment:

1. Create a new project folder

Inside your repository root, create a new directory for your experiment.

mkdir project_name
cd project_name
2. Write your firmware code

Create your main C source file and implement your Pico SDK logic.

This is where you write:

GPIO control
sensor communication
UART logs
PWM signals, etc.
3. Add build configuration

Create a CMakeLists.txt file that:

Enables the Pico SDK
Sets project name
Links required libraries (GPIO, UART, I2C, SPI, etc.)
Configures build output
4. Create build directory

All compilation happens in a separate build folder.

mkdir build
cd build
5. Configure project using CMake

For Raspberry Pi Pico 2 (RP2350), run:

cmake -G Ninja -DPICO_BOARD=pico2 ..

This step:

Detects toolchain
Loads Pico SDK
Prepares build system
6. Build the firmware

Compile the project:

ninja

This generates:

.uf2 firmware file (for flashing)
.elf binary (for debugging)
7. Flash the Pico 2

To run your program:

Disconnect Pico from USB
Hold BOOTSEL button
Plug into USB
A drive named RP2350 Boot appears
Copy the .uf2 file into it
Wait a few seconds
Unplug and reconnect normally (no BOOTSEL)
💡 Expected Result

After flashing:

The Pico automatically runs your program
GPIO/UART/sensor behavior executes based on your code
