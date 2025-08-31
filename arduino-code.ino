#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Define the I2C address and LCD size
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Voltage sensor input pin
const int voltageSensorPin = A0;

// Voltage divider resistor values (adjust based on your sensor specs)
const float R1 = 30000.0; // 30k ohms
const float R2 = 7500.0;  // 7.5k ohms

// Reference voltage for ADC
const float referenceVoltage = 5.0;

void setup() {
  // Initialize serial monitor (optional for debugging)
  Serial.begin(9600);

  // Initialize LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Voltage Meter");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Read the raw analog value
  int rawValue = analogRead(voltageSensorPin);

  // Convert the raw value to voltage
  float voltageAtSensor = (rawValue * referenceVoltage) / 1024.0;

  // Calculate the actual input voltage using the voltage divider ratio
  float inputVoltage = voltageAtSensor / (R2 / (R1 + R2));

  // Display the voltage on the LCD
  lcd.setCursor(0, 0);
  lcd.print("Voltage:");
  lcd.setCursor(0, 1);
  lcd.print(inputVoltage, 2); // Display 2 decimal places
  lcd.print(" V");

  // Optional: Print voltage to Serial Monitor
  Serial.print("Input Voltage: ");
  Serial.print(inputVoltage, 2);
  Serial.println(" V");

  // Small delay
  delay(500);
}
