# 💧 Smart Hydrate – The Future of Water Bottles

Smart Hydrate is an innovative smart water bottle that promotes healthier lifestyles through intelligent hydration tracking, LED-based reminders, and UV-C water purification. Designed for portability and tech-savviness, it integrates with a mobile application to offer real-time hydration data, personalized goals, and clean drinking water anytime, anywhere.

---

## 🧠 Motivation

Water is essential for our body’s functioning — yet, many people neglect proper hydration due to busy routines or forgetfulness. Traditional water bottles don’t solve this problem.  
**Smart Hydrate** aims to:
- Promote daily hydration awareness.
- Encourage healthy habits.
- Provide purified, safe drinking water on-the-go.

---

## 🚀 Features

| Feature                          | Description                                                                 |
|----------------------------------|-----------------------------------------------------------------------------|
| 💧 Intelligent Water Tracking     | Measures water intake using a water level sensor.                           |
| 🔔 LED-Based Drink Reminders     | Glowing LED ring reminds users to drink at regular intervals.               |
| 🧴 UV-C Water Purification       | UV module kills bacteria and viruses to ensure safe drinking water.         |
| 📱 Mobile App Integration        | Syncs via Bluetooth for real-time tracking and insights.                     |
| 🔋 Rechargeable Design           | USB-C charging for portability and environmental friendliness.               |
| 🎨 Stylish and Functional Design | Modern look, easy to grip, spill-proof, and cup-holder friendly.            |

---

## 🛠 Hardware Components

| Component                | Specs/Details                                |
|--------------------------|----------------------------------------------|
| Water Level Sensor       | Analog input to track bottle water level     |
| UV-C LED Module          | 275 nm wavelength for disinfection           |
| LED Ring                 | RGB LEDs for reminder notification           |
| Bluetooth 5.0 Module     | Connects to mobile application               |
| Lithium-Ion Battery      | Rechargeable, USB-C input                    |
| Button                   | Manual trigger for purification              |
| Microcontroller (ESP32)  | Core logic and wireless communication        |
| Tritan Plastic Body      | BPA-free, light-weight, durable              |
| Food-Grade Silicone Cap  | Seals the bottle, prevents leaks             |

See more in [`components_list.md`](./components_list.md)

---

## 📐 Technical Specifications

- **Height**: 24 cm  
- **Diameter**: 7 cm  
- **Weight**: 350 g (empty)  
- **Capacity**: 650 ml  
- **UV-C Wavelength**: 275 nm  
- **Battery**: Rechargeable lithium-ion  
- **Connectivity**: Bluetooth 5.0  
- **Material**: BPA-free Tritan Plastic / Stainless Steel option  

---

## 📊 System Architecture
+-----------------------------+
| Smart Hydrate |
+-----------------------------+
| Water Level Sensor |
| UV-C LED Module |
| LED Ring (Hydration Alert) |
| Bluetooth Module |
| Button (UV Trigger) |
| Rechargeable Battery |
| Microcontroller (ESP32) |
+-----------------------------+
↓ Bluetooth
+-----------------------------+
| Mobile App |
| - Displays intake data |
| - Sends reminder schedules |
| - Controls UV remotely |
+-----------------------------+


---

## 💻 Software – `code.ino`

Written in Arduino C++, the microcontroller script:
- Reads water level using analog input.
- Blinks LED ring periodically as a reminder.
- Detects button press to activate UV light.
- Sends data via Bluetooth serial to mobile app.

See the full code in [`code.ino`](./code.ino)

---

## 🧪 Testing Procedures

| Test Type            | Description                                      |
|----------------------|--------------------------------------------------|
| Prototype Testing    | Hardware function, component integration         |
| Durability Testing   | Bottle resilience under normal use               |
| Battery Life Testing | Power drain analysis with LEDs and UV            |
| User Testing         | Usability, grip comfort, mobile app feedback     |
| Compliance Testing   | Safety, labeling, electronic standards           |

---

## 📅 Project Timeline

| Phase              | Duration  |
|--------------------|-----------|
| Ideation           | Week 1    |
| Component Research | Week 2    |
| Circuit Design     | Week 3    |
| Prototype Build    | Week 4–5  |
| Testing & Tuning   | Week 6–7  |
| Documentation      | Week 8    |

---

## 📲 Future Improvements

- 📦 Smart app with hydration prediction based on body metrics
- 🧠 AI-based goal setting (age, weather, activity level)
- 🔊 Voice assistant integration (Alexa, Google Assistant)
- 🌐 Cloud sync and hydration history dashboard
- 🌿 Solar-powered charging option

---

## 👩‍💻 Contributors

- M Dhana Mouli (N200775)  
- G RamyaSri (N200155)  
- B Manasa Reddy (N200327)  
- S Mani Deepika (N200735)  
- **M Kalyani (N200845)** 🌟

---




