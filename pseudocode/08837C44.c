/* Entry 0x08837C44 | file offset 0x00034C1C | FUN_08837c44 | bytes 104 */

undefined4 FUN_08837c44(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x39c) == 0) || (iVar1 = FUN_0884e53c(), iVar1 == 0)) {
    if ((*(byte *)(param_1 + 0x194) & 0x20) != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

