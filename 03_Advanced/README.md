# 03 Advanced - Maharat 🔴

Ab hum expert level ke topics cover karein ge.

## 1. Structures & Unions
Jab humein mukhtalif kism ka data aik hi jagah jama karna ho (jaise aik student ka naam, roll number, aur marks), to hum `struct` istemal karte hain.

## 2. Dynamic Memory Allocation (DMA)
Kabhi kabhi humein nahi pata hota ke kitni memory chahiye hogi. DMA humein ijazat deta hai ke hum program chalte waqt (runtime) memory maangein.
- `malloc()` / `calloc()`: Memory mangne ke liye.
- `free()`: Memory wapis karne ke liye (taake memory leak na ho).

## 3. Data Structures (Linked List)
Jab humein dynamically data store karna ho jo memory mein musalsal (contiguous) na ho, to hum Linked List istemal karte hain. Har 'node' mein data aur agle node ka pata hota hai.

## 4. File Handling
C mein hum files bana sakte hain, unhein read kar sakte hain aur un mein data save kar sakte hain.
- `fopen()`: File kholne ke liye.
- `fprintf()` / `fscanf()`: File mein data likhne ya parhne ke liye.
- `fclose()`: File band karne ke liye.

## 5. Preprocessors
Ye wo commands hoti hain jo compiler ko code compile karne se pehle milti hain.
- `#define`: Constant ya Macro banane ke liye.
- `#include`: Header files shamil karne ke liye.

## 6. System Programming (Basics)
C language system level par kaam karne ke liye behtareen hai. Is ke zariye hum Operating System ke functions call kar sakte hain.

## Example Files:
- `structures.c`: Custom data types banana.
- `dma.c`: Dynamic memory (malloc/calloc) ka istemal.
- `linked_list.c`: Linked List data structure.
- `file_io.c`: Files ke saath kaam karna.
- `preprocessors.c`: Macros aur constants.
- `system_prog.c`: System level commands.
