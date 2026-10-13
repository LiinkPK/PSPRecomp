/* Entry 0x088D40BC | file offset 0x000D1094 | FUN_088d40bc | bytes 464 */

void FUN_088d40bc(int param_1,int param_2,uint param_3,uint param_4,uint param_5,undefined2 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  
  piVar5 = (int *)(param_2 + (param_3 & 0xffff) * 4);
  FUN_0887b924(*piVar5);
  iVar1 = *piVar5;
  piVar6 = (int *)(param_1 + (param_5 & 0xffff) * 4);
  iVar3 = *piVar6;
  iVar2 = 0;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x8000;
    if (*(int *)(iVar3 + 0x34) == 0) {
      *(int *)(iVar3 + 0x34) = iVar1;
      *(int *)(iVar3 + 0x30) = iVar1;
      *(undefined4 *)(iVar1 + 0x4c) = 0;
      *(undefined4 *)(iVar1 + 0x54) = 0;
      iVar2 = *(int *)(iVar3 + 0x38);
    }
    else {
      *(int *)(*(int *)(iVar3 + 0x34) + 0x4c) = iVar1;
      uVar4 = *(undefined4 *)(iVar3 + 0x34);
      *(undefined4 *)(iVar1 + 0x4c) = 0;
      *(undefined4 *)(iVar1 + 0x54) = uVar4;
      iVar2 = *(int *)(iVar3 + 0x38);
      *(int *)(iVar3 + 0x34) = iVar1;
    }
    *(int *)(iVar3 + 0x38) = iVar2 + 1;
    iVar2 = *piVar5;
  }
  if ((param_4 & 1) == 0) {
    if ((param_4 & 2) == 0) {
      if ((param_4 & 4) != 0) {
        FUN_0887b958(iVar2);
        iVar2 = *piVar5;
      }
    }
    else {
      FUN_0887b98c();
      iVar2 = *piVar5;
    }
  }
  else {
    FUN_0887b970();
    iVar2 = *piVar5;
  }
  if ((param_4 & 8) == 0) {
    if ((param_4 & 0x10) == 0) {
      if ((param_4 & 0x20) == 0) {
        iVar1 = *piVar6;
        goto LAB_088d4210;
      }
      FUN_0887b9e4(iVar2);
      iVar2 = *piVar5;
    }
    else {
      FUN_0887b9c4();
      iVar2 = *piVar5;
    }
  }
  else {
    FUN_0887b9a4();
    iVar2 = *piVar5;
  }
  iVar1 = *piVar6;
LAB_088d4210:
  iVar3 = *(int *)(*(int *)(iVar1 + 0x24) + 0xc);
  uVar4 = uRam00000008;
  if ((int)*(short *)(iVar1 + 0xc) < *(int *)(iVar3 + 0x2c)) {
    uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0xc) + *(short *)(iVar1 + 0xc) * 0x1c + 8);
  }
  FUN_0887b900(iVar2,uVar4);
  FUN_088d4584(param_1,param_5 & 0xffff,param_6,*piVar5);
  return;
}

