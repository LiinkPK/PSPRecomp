/* Entry 0x088987E8 | file offset 0x000957C0 | FUN_088987e8 | bytes 108 */

undefined4 FUN_088987e8(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    bVar1 = false;
  }
  else if (param_2 < 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (param_2 < *(int *)(*(int *)(param_1 + 0x58) + 0x14)) {
      bVar1 = true;
    }
  }
  if ((bVar1) && ((*(ushort *)(*(int *)(param_1 + 0x70) + param_2 * 0x4c + 0x24) & 2) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

