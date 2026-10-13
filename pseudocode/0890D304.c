/* Entry 0x0890D304 | file offset 0x0010A2DC | FUN_0890d304 | bytes 164 */

int FUN_0890d304(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x358)) {
    iVar2 = param_1 + 0xf4;
    do {
      iVar1 = FUN_08935490(iVar2,param_2,6);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x4c;
    } while (iVar3 < *(int *)(param_1 + 0x358));
  }
  return -1;
}

