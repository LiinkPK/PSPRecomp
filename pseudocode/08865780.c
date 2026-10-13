/* Entry 0x08865780 | file offset 0x00062758 | FUN_08865780 | bytes 148 */

int FUN_08865780(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x18)) {
    do {
      iVar1 = FUN_08935970(*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2),param_2);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < *(short *)(param_1 + 0x18));
  }
  return -1;
}

