# DreamPad
### DreamPad
A custom little control pad that I made for my laptop 

It is a custom USB control pad I made because I wanted to have quick access to keyboard shortcuts and websites, and my most used laptop shortcuts as physical buttons.

It has 9 buttons, an OLED Display and a Rotatory Encoder. The first 3 buttons are Cut, Copy and Paste. The other 6 can be set to wbsites that I often use.

---

## Why I Made This

### I use my laptop a lot for coding and working on hardware projects, and i keep using the same shortcuts and website again and again(*also it was a mission in Stardance... LOL*)

So I thought, why not just make a small device for them?(**for mission :D**)

---

## Button Layout 

| Position | Function |
|---  |---|
| 0,0 | Cut |
| 0,1 | Copy |
| 0,2 | Paste |
| 1,0 | Link 1 |
| 1,1 | Link 2 |
| 1,2 | Link 3 |
| 2,0 | Link 4 |
| 2,1 | Link 5 |
| 2,2 | Link 6 |

The 6 links can be changed in the Firmware.

For example, I can set them to:

```text
YouTube
Hack Club
GitHub
Slack
ChatGPT
My own website
```
## Parts (*that i got for mission*)
| Part | What I use it for |
|---|---|
| XIAO RP2040 | Main controller |
| 9 × Switches | Buttons |
| 9 × Diodes | Key matrix |
| OLED | Display |
| Rotary Encoder | Volume |
| PCB | Connecting everything |
| 3D Printed Case | Enclosure |

---

## Schematic 

I started the project by making schematic in KiCad.

This is where I worked out how the 9 buttons, OLED, rotary encoder and XIAO RP2040 would all connect.

![Schematic](images/Schematic.png)

---

## PCB

Once the schematic was working, I moved on to the PCB.

I placed all the components and routed the connections on the board.

![PCB](images/pcb.png)

---

## PCB 3D View

I used the 3D view in KiCad to check how the components would sit on the board.

This also helped me catch placement problems before making the enclosure.

![PCB 3D](images/pcb_3d.png)

---

## CAD

After the PCB, I made the case in Fusion 360.

I designed the case around the actual PCB and components so everything would fit inside.

![CAD](images/cad.png)

---
## CAD + PCB

I then put the PCB and the case together in Fusion 360 to check the fit.

This was useful for checking things like the button positions, OLED, rotary encoder and the space inside the case.

![CAD + PCB](images/cad_pcb.png)

---

## Firmware

The firmware is written for the XIAO RP2040 using Antigravity IDE.

The DreamPad connects directly to my laptop using the USB port on the XIAO.

The firmware handles:

- Cut
- Copy
- Paste
- 6 custom links
- OLED
- Rotary encoder
- Volume up/down
- Mute

The links are just variables in the code, so I can change them whenever I want.

---

## What I learned

This project made me learn a lot of things I hadn't really worked with before.

I got to work with KiCad, PCB routing, key matrices, rotary encoders, OLEDs, the RP2040 and Fusion 360.

The CAD part was also pretty interesting because I had to make the case around the actual PCB instead of just designing something that looked good.

---

## Made by

**DreamXV**

**DreamPad** — something I built because I wanted my own physical shortcuts instead of always reaching for the keyboard.

> **And ALSO FOR THE MISSION :D**

