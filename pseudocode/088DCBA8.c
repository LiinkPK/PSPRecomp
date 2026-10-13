/* Entry 0x088DCBA8 | file offset 0x000D9B80 | FUN_088dcba8 | bytes 424 */

void FUN_088dcba8(int param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short local_20 [2];
  
  *(undefined2 *)(param_1 + 0x66) = param_4;
  *(undefined1 *)(param_1 + 0x68) = param_5;
  *(undefined2 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    param_3 = 0;
  }
  else {
    FUN_08935524(param_1 + 0x58,param_3,4);
    param_3 = param_3 + 4;
  }
  uVar1 = FUN_088dc84c(param_1,param_2);
  uVar1 = FUN_088dc944(param_1,uVar1,0);
  uVar1 = FUN_088dcf18(param_1,uVar1,0,0);
  FUN_088dd21c(param_1,uVar1,0,0,0);
  if (param_3 != 0) {
    iVar6 = 0;
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0x58)) {
      do {
        FUN_08935524(local_20,param_3,2);
        FUN_08935524(*(int *)(param_1 + 0x54) + iVar5,param_3 + 2,2);
        FUN_08935524(*(int *)(param_1 + 0x54) + iVar5 + 4,param_3 + 4,4);
        iVar4 = *(int *)(param_1 + 0xc) + local_20[0] * 0x1c;
        param_3 = param_3 + 8;
        iVar3 = *(int *)(param_1 + 0x54) + iVar5;
        if (*(int *)(iVar4 + 0x14) == 0) {
          *(int *)(iVar4 + 0x14) = iVar3;
          *(int *)(iVar4 + 0x10) = iVar3;
          *(undefined4 *)(iVar3 + 8) = 0;
          *(undefined4 *)(iVar3 + 0xc) = 0;
          iVar2 = *(int *)(iVar4 + 0x18);
        }
        else {
          *(int *)(*(int *)(iVar4 + 0x14) + 8) = iVar3;
          uVar1 = *(undefined4 *)(iVar4 + 0x14);
          *(undefined4 *)(iVar3 + 8) = 0;
          *(undefined4 *)(iVar3 + 0xc) = uVar1;
          iVar2 = *(int *)(iVar4 + 0x18);
          *(int *)(iVar4 + 0x14) = iVar3;
        }
        *(int *)(iVar4 + 0x18) = iVar2 + 1;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x10;
      } while (iVar6 < *(int *)(param_1 + 0x58));
    }
  }
  return;
}

