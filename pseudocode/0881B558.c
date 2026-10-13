/* Entry 0x0881B558 | file offset 0x00018530 | FUN_0881b558 | bytes 196 */

void FUN_0881b558(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_08842138();
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_08842138();
  }
  puVar1 = *(undefined4 **)(param_1 + 0x110);
  while (puVar1 != (undefined4 *)0x0) {
    if ((puVar1 != (undefined4 *)0x0) && (*(undefined4 **)(param_1 + 0x114) != (undefined4 *)0x0)) {
      *(undefined4 *)(param_1 + 0x110) = *puVar1;
      if (puVar1 == *(undefined4 **)(param_1 + 0x114)) {
        *(undefined4 *)(param_1 + 0x114) = 0;
      }
      *puVar1 = 0;
    }
    FUN_08818778(puVar1,3);
    puVar1 = *(undefined4 **)(param_1 + 0x110);
  }
  FUN_08819c44(param_1 + 0x5c);
  FUN_0881a284(param_1 + 0x34);
  FUN_088167f0(param_1 + 0x14);
  FUN_0881b4a0(param_1);
  return;
}

