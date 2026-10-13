/* Entry 0x0891515C | file offset 0x00112134 | FUN_0891515c | bytes 76 */

void FUN_0891515c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x7df) != '\0') {
    if (-1 < *(int *)(param_1 + 0x7b0)) {
      iVar1 = FUN_08910644();
      func_0x08b43ae8(*(undefined4 *)(param_1 + 0x88),(int)*(short *)(iVar1 + 6));
    }
    *(undefined1 *)(param_1 + 0x7df) = 0;
  }
  return;
}

