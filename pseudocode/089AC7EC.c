/* Entry 0x089AC7EC | file offset 0x001A97C4 | FUN_089ac7ec | bytes 152 */

int FUN_089ac7ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if ((iVar1 + 1U & 0xffff0000) == 0) {
      iVar1 = 0;
    }
    FUN_089ac75c(iVar1,1);
    iVar1 = *(int *)(param_1 + 0x34);
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 4);
    }
    else {
      do {
        iVar3 = *(int *)(iVar1 + 4);
        FUN_089ac3dc(iVar1,1);
        iVar1 = iVar3;
      } while (iVar3 != 0);
      uVar2 = *(undefined4 *)(param_1 + 4);
    }
    FUN_089ac3dc(uVar2,1);
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 8));
    thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0x10));
    thunk_FUN_089abeac(1,*(undefined4 *)(param_1 + 0x24));
  }
  return param_1;
}

