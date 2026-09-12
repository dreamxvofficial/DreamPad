#include <Arduino.h>
#include <Keyboard.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define OLED_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const uint8_t rowPINS[3] = {D3, D6, D7};
const uint8_t colPINS[3] = {D0, D1, D2};

#define ENCODER_A D10
#define ENCODER_B D8
#define ENCODER_SW D9

const char* links[6] = {
  "https://youtube.com",
  "https://hackclub.com",
  "https://github.com",
  "https://slack.com",
  "https://chatgpt.com",
  "https://google.com"
};

bool keyState[3][3] = {};
int lastEncoderA = HIGH;
bool lastEncoderButton = HIGH;

void showMessage(const char* title, const String& message) {
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0,0);
    display.println(title);
    display.setCursor(0,25);
    display.println(message);
    display.display();
}

void setup() {
    Keyboard.begin();

    for(int r=0; r<3; r++){
        pinMode(rowPINS[r], OUTPUT);
        digitalWrite(rowPINS[r], HIGH);
    }
    for(int c=0; c<3; c++){
        pinMode(colPINS[c], INPUT_PULLUP);
    }
    pinMode(ENCODER_A, INPUT_PULLUP);
    pinMode(ENCODER_B, INPUT_PULLUP);
    pinMode(ENCODER_SW, INPUT_PULLUP);
    
    Wire.begin();

    display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS);
    
    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(10,10);
    display.println("DreamPad");
    display.setTextSize(1);
    display.setCursor(25, 40);
    display.println("by DreamXV");
    display.display();

    delay(2000);

    showMessage("DreamPad", "Ready");
}

void loop() {
  scanMatrix();
  readEncoder();
  readEncoderButton();
  delay(5); 
}

void scanMatrix() {
  for (int r = 0; r < 3; r++) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(rowPins[i], HIGH);
    }

    digitalWrite(rowPins[r], LOW);
    delayMicroseconds(50);

    for (int c = 0; c < 3; c++) {
      bool pressed = digitalRead(colPins[c]) == LOW;

      if (pressed && !keyState[r][c]) {
        keyState[r][c] = true;
        handleKey(r, c);
      }

      if (!pressed) {
        keyState[r][c] = false;
      }
    }
  }

  for (int r = 0; r < 3; r++) {
    digitalWrite(rowPins[r], HIGH);
  }
}

void handleKey(int row, int col) {
  if (row == 0) {
    if (col == 0) {
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('x');
      delay(50);
      Keyboard.releaseAll();
      showMessage("DreamPad", "CUT");
    }

    if (col == 1) {
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('c');
      delay(50);
      Keyboard.releaseAll();
      showMessage("DreamPad", "COPY");
    }

    if (col == 2) {
      Keyboard.press(KEY_LEFT_CTRL);
      Keyboard.press('v');
      delay(50);
      Keyboard.releaseAll();
      showMessage("DreamPad", "PASTE");
    }

    return;
  }

  int linkIndex = (row == 1) ? col : 3 + col;

  Keyboard.print(links[linkIndex]);

  showMessage(
    "DreamPad",
    "Link " + String(linkIndex + 1)
  );
}

void readEncoder() {
  int currentA = digitalRead(ENCODER_A);
  int currentB = digitalRead(ENCODER_B);

  if (currentA != lastEncoderA && currentA == LOW) {
    if (currentB == HIGH) {
      Keyboard.write(KEY_MEDIA_VOLUME_UP);
      showMessage("Volume", "UP");
    } else {
      Keyboard.write(KEY_MEDIA_VOLUME_DOWN);
      showMessage("Volume", "DOWN");
    }
  }

  lastEncoderA = currentA;
}

void readEncoderButton() {
  bool currentButton = digitalRead(ENCODER_SW);

  if (currentButton == LOW && lastEncoderButton == HIGH) {
    Keyboard.write(KEY_MEDIA_MUTE);
    showMessage("Volume", "MUTE");
    delay(200);
  }

  lastEncoderButton = currentButton;
}