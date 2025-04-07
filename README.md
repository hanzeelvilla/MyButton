# MyButton Library

A small and simple Arduino library to handle physical buttons using internal pull-up resistors, making wiring and reading easier.

## Features

- Easy-to-use, minimal interface.
- Automatically uses `INPUT_PULLUP` (no need for external resistors).
- `isPressed()` method to check button state.
- Great for projects with multiple buttons.

## Installation

1. Download the repository as a ZIP file or clone it to your Arduino libraries folder

```bash
git clone https://github.com/hanzeelvilla/MyButton.git
```

2. Place the **MyButton folder** into your Arduino libraries directory (typically Documents/Arduino/libraries on most systems).
3. Restart the Arduino IDE if it was open during installation.

## Getting Started

### Include the Library

To use the library in your Arduino sketch, include the `MyButton.h` header file.
```cpp
#include "MyButton.h"
```

### Creating a MyButton Object
Create a `MyButton` object by passing the GPIO pin number where your button is connected
```cpp
MyButton myBtn(12); // Button connected to pin 12
```

### Initializing MyButton
Before checking the button state, initialize it in the `setup()` function. This sets the pin mode to `INPUT_PULLUP` automatically
```cpp
void setup() {
  myBtn.init();
}
```

### Detect if the Button is pressed
Use the `isPressed()` method inside the `loop()` to check if the button is being pressed. It returns `true` when the button is pressed (LOW)
```cpp
void loop() {
  if (myBtn.isPressed()) {
    Serial.println("Button Pressed!");
  }
}
```

## Methods

| Method        | Description                               |
|---------------|-------------------------------------------|
| `init()`      | Initializes the button pin as INPUT_PULLUP |
| `isPressed()` | Returns `true` if the button is pressed    |


> [!WARNING]
> Ensure the relay is connected properly to avoid short circuits or damage to the board.