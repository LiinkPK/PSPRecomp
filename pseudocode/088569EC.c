/* Entry 0x088569EC | file offset 0x000539C4 | FUN_088569ec | bytes 108 */

void FUN_088569ec(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_088dab44();
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x78) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x20;
  } while (iVar1 < 6);
  return;
}

