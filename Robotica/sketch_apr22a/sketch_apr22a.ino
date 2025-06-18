int leds[] = {2, 3, 4, 5};
int numLeds = 4;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 16; i++) {
    mostrarBinario(i);
    delay(1000);
  }
}

void mostrarBinario(int num) {
  for (int i = 0; i < numLeds; i++) {
    int bit = (num >> (numLeds - i - 1)) & 1;
    if (bit == 1) {
      digitalWrite(leds[i], HIGH);
      delay(500);
    } else {
      digitalWrite(leds[i], LOW);
    }
  }
}
