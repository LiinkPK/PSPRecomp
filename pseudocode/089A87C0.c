/* Entry 0x089A87C0 | file offset 0x001A5798 | FUN_089a87c0 | bytes 80 */

int FUN_089a87c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = param_2 * 0x10 + 8;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if (((uVar2 & 0x10) != 0) || (*(int *)(param_1 + 0x2c) == 0)) {
    if ((uVar2 & 1) != 0) {
      iVar1 = iVar1 + 0x20;
    }
    if ((uVar2 & 2) != 0) {
      iVar1 = iVar1 + 0x20;
    }
    iVar1 = iVar1 + param_2 * 8;
  }
  return iVar1;
}

