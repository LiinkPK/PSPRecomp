/* Entry 0x08974084 | file offset 0x0017105C | FUN_08974084 | bytes 560 */

int FUN_08974084(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_2 + 0xfU & 0xfffffff0;
  if (*(int *)(param_1 + 4) < (int)uVar4) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x60c);
  for (iVar5 = iVar2; iVar1 = iVar2, iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x10)) {
    if ((*(int *)(iVar5 + 8) == -1) && (uVar4 == *(uint *)(iVar5 + 4))) {
      *(undefined4 *)(iVar5 + 8) = param_3;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      return iVar5;
    }
  }
  do {
    if (iVar1 == 0) {
LAB_0897417c:
      uVar3 = 0;
      iVar5 = 0;
      for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
        if ((uVar4 <= *(uint *)(iVar2 + 4)) && (uVar3 <= *(uint *)(iVar2 + 0xc))) {
          uVar3 = *(uint *)(iVar2 + 0xc);
          iVar5 = iVar2;
        }
      }
      if (iVar5 != 0) {
        if (*(uint *)(iVar5 + 4) <= uVar4) {
          *(undefined4 *)(iVar5 + 8) = param_3;
          *(undefined4 *)(iVar5 + 0xc) = 0;
          return iVar5;
        }
        iVar2 = FUN_089742f8(param_1,iVar5,uVar4,param_3);
        if (iVar2 == 1) {
          return iVar5;
        }
      }
      iVar2 = *(int *)(param_1 + 0x60c);
      uVar3 = *(uint *)(iVar2 + 0x10);
      while( true ) {
        if (uVar3 == 0) {
          return 0;
        }
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + *(int *)(uVar3 + 4);
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(uVar3 + 0x10);
        if ((param_1 + 8U <= uVar3) && (uVar3 < param_1 + 0x508U)) {
          iVar5 = *(int *)(param_1 + 0x608);
          *(int *)(param_1 + 0x608) = iVar5 + 1;
          *(uint *)(param_1 + iVar5 * 4 + 0x508) = uVar3;
        }
        if (uVar4 <= *(uint *)(iVar2 + 4)) break;
        uVar3 = *(uint *)(iVar2 + 0x10);
      }
      *(undefined4 *)(iVar2 + 8) = param_3;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      return iVar2;
    }
    if ((*(int *)(iVar1 + 8) == -1) && (uVar4 < *(uint *)(iVar1 + 4))) {
      iVar2 = FUN_089742f8(param_1,iVar1,uVar4,param_3);
      if (iVar2 == 1) {
        return iVar1;
      }
      iVar2 = *(int *)(param_1 + 0x60c);
      goto LAB_0897417c;
    }
    iVar1 = *(int *)(iVar1 + 0x10);
  } while( true );
}

