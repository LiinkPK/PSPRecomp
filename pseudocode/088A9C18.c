/* Entry 0x088A9C18 | file offset 0x000A6BF0 | FUN_088a9c18 | bytes 272 */

void FUN_088a9c18(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x1c);
  while (iVar1 = iVar5, iVar1 != 0) {
    if (iVar1 == 0) {
      iVar5 = *(int *)(param_2 + 0x1c);
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x27c);
    }
    FUN_088a6da0(iVar1,param_3);
    FUN_088a6d10(param_1,iVar1);
    if ((*(uint *)(iVar1 + 0xdc) & 2) != 0) {
      iVar2 = *(int *)(param_2 + 0x1c);
      if ((iVar2 != 0) && (iVar4 = *(int *)(param_2 + 0x20), iVar4 != 0)) {
        uVar3 = *(undefined4 *)(iVar1 + 0x27c);
        if (iVar1 == iVar2) {
          *(undefined4 *)(param_2 + 0x1c) = uVar3;
          iVar2 = 0;
        }
        else {
          iVar4 = *(int *)(iVar2 + 0x27c);
          if (*(int *)(iVar2 + 0x27c) == iVar1) {
            *(undefined4 *)(iVar2 + 0x27c) = uVar3;
          }
          else {
            do {
              iVar2 = iVar4;
              iVar4 = *(int *)(iVar2 + 0x27c);
            } while (*(int *)(iVar2 + 0x27c) != iVar1);
            *(undefined4 *)(iVar2 + 0x27c) = uVar3;
          }
          iVar4 = *(int *)(param_2 + 0x20);
        }
        if (iVar1 == iVar4) {
          *(int *)(param_2 + 0x20) = iVar2;
        }
        *(undefined4 *)(iVar1 + 0x27c) = 0;
      }
      FUN_088a68b8(iVar1,3);
    }
  }
  return;
}

