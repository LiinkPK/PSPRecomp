/* Entry 0x08897AD0 | file offset 0x00094AA8 | FUN_08897ad0 | bytes 108 */

undefined4 FUN_08897ad0(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    bVar1 = false;
  }
  else if (param_2 < 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if (param_2 < *(int *)(*(int *)(param_1 + 0x58) + 0xc)) {
      bVar1 = true;
    }
  }
  if ((bVar1) && (*(short *)(*(int *)(param_1 + 0x68) + param_2 * 0x2c + 0x20) != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

