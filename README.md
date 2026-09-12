# DreamPad

### A customizable physical control pad for your digital workspace.

**DreamPad by DreamXV** is a custom USB control pad designed to make everyday laptop interactions faster, easier, and more fun.

It combines productivity shortcuts, customizable website buttons, volume control, and controls for a virtual character into one compact device.

---

## ✨ Features

- ⌨️ Copy, Cut, and Paste buttons
- 🌐 4 customizable website shortcuts
- 🔊 Rotary encoder for laptop volume control
- 🎮 3 buttons for controlling a virtual character
- 🔌 USB connection to a laptop
- ⚙️ Customizable button actions
- 🧩 Custom PCB
- 🖨️ Custom 3D-printed enclosure

---

## 💡 Inspiration

I wanted to build a small device that could sit on my desk and give me quick physical access to the things I use every day.

Instead of constantly switching between my keyboard, mouse, and different applications, DreamPad puts frequently used actions into one physical device.

I also wanted to make it more personal by connecting the physical buttons to a virtual character on my laptop.

---

## 🧠 How It Works

```text
Physical Button
      ↓
Microcontroller
      ↓
USB
      ↓
Laptop
      ↓
Software
      ↓
Shortcut / Website / Volume / Character
```

---

## 🔘 Button Layout

| Button | Function |
|---|---|
| Copy | Copy selected text |
| Cut | Cut selected text |
| Paste | Paste selected text |
| Button 1 | Custom website shortcut |
| Button 2 | Custom website shortcut |
| Button 3 | Custom website shortcut |
| Button 4 | Custom website shortcut |
| Flip | Character backflip |
| Eat | Character eating animation |
| Sleep | Character sleeping animation |
| Rotary Encoder | Laptop volume control |

### Example Website Shortcuts

```text
Button 1 → YouTube
Button 2 → Hack Club
Button 3 → GitHub
Button 4 → Slack
```

The four website buttons will be configurable so they can be changed depending on the user's workflow.

---

# 🔧 Hardware

## Schematic

The schematic shows how the electronic components of DreamPad are connected.

![DreamPad Schematic](images/schematic.png)

---

## PCB

The schematic will later be converted into the physical PCB layout.

![DreamPad PCB](images/pcb.png)

> PCB design coming soon.

---

## PCB 3D View

A 3D representation of the completed PCB.

![DreamPad PCB 3D](images/pcb_3d.png)

> Coming soon.

---

# 🖨️ CAD Design

The enclosure will be designed as a custom 3D-printable case for DreamPad.

![DreamPad CAD](images/cad.png)

> CAD design coming soon.

---

## CAD + PCB

The final enclosure will be checked together with the PCB to make sure all components fit correctly.

![DreamPad CAD + PCB](images/cad_pcb.png)

> Coming soon.

---

# 💻 Software

DreamPad will communicate with the laptop through USB.

The software will handle:

- Website shortcuts
- Copy / Cut / Paste
- Volume control
- Virtual character animations
- Custom button configuration

More software details will be added as development progresses.

---

# 🛠️ Build Progress

- [x] Project concept
- [x] Button layout
- [x] Schematic
- [ ] PCB layout
- [ ] PCB 3D model
- [ ] CAD enclosure
- [ ] CAD + PCB integration
- [ ] Firmware
- [ ] Laptop software
- [ ] 3D printing
- [ ] Assembly
- [ ] Testing
- [ ] Final build

---

# 📁 Project Structure

```text
DreamPad/
│
├── images/
│   ├── schematic.png
│   ├── pcb.png
│   ├── pcb_3d.png
│   ├── cad.png
│   └── cad_pcb.png
│
├── hardware/
│   ├── schematic/
│   └── pcb/
│
├── cad/
│
├── firmware/
│
├── software/
│
└── README.md
```

---

# 🚧 Future Improvements

- More programmable buttons
- OLED display
- More virtual character animations
- Custom profiles for different applications
- Wireless connectivity
- RGB lighting
- Configuration software

---

# 📚 What I Plan to Learn

- PCB design
- Electronics
- USB HID
- Microcontroller programming
- CAD and 3D printing
- Desktop software
- Hardware/software integration

---

# 👨‍💻 Creator

**DreamPad by DreamXV**

Built by **DreamXV**.