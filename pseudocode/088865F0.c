/* Entry 0x088865F0 | file offset 0x000835C8 | FUN_088865f0 | bytes 80 */

undefined4 FUN_088865f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = 0;
  if (iVar2 != 0) {
    if (*(short *)(iVar2 + 0xc) == 0) {
      uVar1 = 1;
    }
    else if ((*(short *)(iVar2 + 0xc) == 2) && ((*(ushort *)(iVar2 + 0x20) & 0x20) == 0)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

