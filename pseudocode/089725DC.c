/* Entry 0x089725DC | file offset 0x0016F5B4 | FUN_089725dc | bytes 284 */

int FUN_089725dc(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_08972bac();
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar5 = 0;
    iVar1 = -1;
    if (0 < *param_1) {
      iVar4 = 0;
      do {
        if (*(int *)(param_1[1] + iVar4) == 0) {
          if (iVar1 == -1) {
            iVar1 = iVar5;
          }
        }
        else {
          iVar2 = FUN_08972bb4(param_1,param_2);
          iVar3 = FUN_08972bb4(param_1,*(undefined4 *)(param_1[1] + iVar4));
          if (iVar2 == iVar3) {
            return iVar5;
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar5 < *param_1);
    }
    if (iVar1 != -1) {
      *(undefined4 *)(param_1[1] + iVar1 * 4) = param_2;
      FUN_08972750(param_1,iVar1);
    }
  }
  return iVar1;
}

