/* Entry 0x088223F8 | file offset 0x0001F3D0 | FUN_088223f8 | bytes 96 */

undefined4 FUN_088223f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_08822d80(param_1);
    if (iVar1 == 1) {
      uVar2 = 0;
    }
    else {
      FUN_08823410(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

