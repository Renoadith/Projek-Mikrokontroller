#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Daftar frekuensi not musik dalam Hz
#define NOTE_F6  1396
#define NOTE_E6  1318
#define NOTE_D6  1174
#define NOTE_C6  1046
#define NOTE_A5  880

// Pin untuk output suara dan sensor suara
const int speakerPin = 9;
const int soundSensorPin = A0;

// Pin untuk LCD
const int lcdAddress = 0x27;
const int lcdColumns = 16;
const int lcdRows = 2;
LiquidCrystal_I2C lcd(lcdAddress, lcdColumns, lcdRows);

// Melodi peringatan stasiun kereta api dengan durasi not yang lebih panjang
int melody[] = {NOTE_F6, NOTE_E6, NOTE_D6, NOTE_C6, NOTE_A5};
int noteDurations[] = {400, 400, 400, 400, 800};

void setup() {
  pinMode(speakerPin, OUTPUT);
  pinMode(soundSensorPin, INPUT);

  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Sound Level:");
}

void loop() {
  int soundValue = analogRead(soundSensorPin);
  float soundLevel = analogToDecibel(soundValue);

  lcd.setCursor(0, 1);
  lcd.print("dB: ");
  lcd.print(soundLevel, 1);

  if (soundLevel > 127) {
    for (int thisNote = 0; thisNote < 5; thisNote++) {
      int noteDuration = noteDurations[thisNote];
      tone(speakerPin, melody[thisNote], noteDuration);
      delay(noteDuration);
      noTone(speakerPin);
      delay(50); // Jeda antara not
    }
    delay(1000); // Jeda sebelum memainkan kembali melodi
  }
}

float analogToDecibel(int analogValue) {
  float voltage = analogValue * (5.0 / 1023.0);
  float soundPressure = voltage / 0.1;
  float soundLevel = 20 * log10(soundPressure / 0.00002);
  return soundLevel;
}
