/* Entry 0x0890C250 | file offset 0x00109228 | FUN_0890c250 | bytes 188 */

void FUN_0890c250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1 + 8;
  if (0 < *(int *)(param_1 + 0x108)) {
    do {
      iVar1 = FUN_08935490(iVar2,param_2,6);
      if (iVar1 == 0) {
        FUN_08935524(*(undefined4 *)(iVar2 + 8),param_3,param_4);
        *(undefined4 *)(iVar2 + 0xc) = param_4;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x108));
  }
  return;
}

