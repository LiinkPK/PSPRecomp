/* Entry 0x08915308 | file offset 0x001122E0 | FUN_08915308 | bytes 104 */

void FUN_08915308(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (0 < *(int *)(iVar1 + 0x6f4)) {
      FUN_08844de0();
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 4);
  func_0x08b453f8(*(undefined4 *)(param_1 + 0x8c));
  return;
}

