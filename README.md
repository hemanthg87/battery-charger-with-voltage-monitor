# 🔋 Battery Charger Circuit with Voltage Monitoring

This project demonstrates the design and implementation of a **cost-effective battery charger circuit** using **diodes** with integrated **real-time voltage monitoring**.  
Developed as part of the **Electronic Devices and Circuits (EDC) course project**, it combines basic electronics with microcontroller programming for practical learning.

---

## 📌 Features
- ✅ **Diode-based charger** – prevents reverse current flow and ensures safe charging.  
- ✅ **Real-time voltage monitoring** using a voltage sensor.  
- ✅ **Arduino Uno integration** for processing and display.  
- ✅ **I2C LCD Display** (16x2) for clear battery voltage updates.  
- ✅ Low-cost, scalable, and easy to replicate.  

---

## 🛠️ Components Used
- Arduino Uno (ATmega328P)  
- Voltage Sensor (0–25V input range)  
- I2C LCD Module (16x2 display)  
- 1N4007 Diodes × 4  
- Transformer (220V → 12V)  
- Electrolytic Capacitor (1000µF)  
- Resistor (1kΩ)  
- LED (2 pin)  
- Breadboard & jumper wires  

---

## ⚡ Circuit Diagram
*(Insert circuit diagram image here)*

---

## 🖥️ Working Principle
1. **Charging Circuit** – Diodes regulate current and prevent reverse flow.  
2. **Voltage Measurement** – Sensor measures battery voltage, sends data to Arduino.  
3. **Data Processing** – Arduino converts sensor input and updates LCD.  
4. **User Display** – Real-time battery voltage shown on I2C LCD.  

---

## 📊 Results
- Accurate real-time voltage displayed on LCD.  
- Stable charging without reverse current.  
- Low power consumption for efficient operation.  

---

## 🚀 Applications
- Educational tools for electronics learning.  
- Small renewable energy setups (solar/wind).  
- Portable battery-operated devices.  

---

## 🔮 Future Improvements
- Add **current monitoring** for better diagnostics.  
- Include **temperature sensing** to avoid overheating.  
- Enable **wireless monitoring** (Bluetooth/WiFi).  
- Improve efficiency using **MOSFETs** instead of diodes.  

---

## 📚 References
- Banzi, Massimo. *Getting Started with Arduino*. O'Reilly Media, 2011.  
- Horowitz, Paul, and Winfield Hill. *The Art of Electronics*. Cambridge University Press, 2015.  
- Jackson, Kenneth. *Introduction to Electric Circuits*. Wiley, 2020.  

---

✨ *This project shows how simple electronic circuits can be enhanced with microcontrollers for smarter energy management.*
