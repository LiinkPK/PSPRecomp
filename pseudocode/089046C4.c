/* Entry 0x089046C4 | file offset 0x0010169C | FUN_089046c4 | bytes 348 */

undefined4 FUN_089046c4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_30 [8];
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = 0;
  iVar4 = param_1 + 8;
  if (0 < iVar2) {
    do {
      uVar1 = FUN_08905810(auStack_30,param_2);
      iVar2 = FUN_08935490(iVar4,uVar1,6);
      if (iVar2 == 0) {
        if (param_4 != 0) {
          FUN_08935524(*(undefined4 *)(iVar4 + 8),param_3,param_4);
          *(int *)(iVar4 + 0xc) = param_4;
        }
        return 1;
      }
      iVar2 = *(int *)(param_1 + 4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < iVar2);
  }
  if (iVar2 < 0x10) {
    if (((param_3 == 0) || (param_4 == 0)) || (*(int *)(param_1 + 0x110) < param_4)) {
      uVar1 = 0;
    }
    else {
      iVar2 = param_1 + iVar2 * 0x10;
      FUN_08935524(iVar2 + 8,param_2,6);
      *(int *)(iVar2 + 0x14) = param_4;
      if (param_4 != 0) {
        FUN_08935524(*(undefined4 *)(iVar2 + 0x10),param_3,param_4);
      }
      uVar1 = 1;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

