# 04 Project Structure - Bara Codebase 🏗️

Jab aap aik bara software banate hain, to sara code aik file mein nahi rakhte. Hum code ko mukhtalif files mein bant dete hain.

## 1. Header Files (.h)
Is mein functions ki definitions (prototypes) aur constants hote hain.

## 2. Source Files (.c)
Is mein functions ki logic likhi jati hai.

## 3. Main File
Ye hamara entry point hota hai.

## Kaise Compile Karein?
Ab aap ko sari `.c` files aik saath compile karni paren gi:
```bash
gcc main.c math_utils.c -o program
./program
```

Is directory mein aik choti si misal di gayi hai:
- `math_utils.h`: Prototypes.
- `math_utils.c`: Logic.
- `main.c`: Istemal.
