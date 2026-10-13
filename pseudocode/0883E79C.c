/* Entry 0x0883E79C | file offset 0x0003B774 | FUN_0883e79c | bytes 360 */

void FUN_0883e79c(undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[2] == 0) {
    uVar3 = *param_1;
    iVar4 = 0;
    iVar5 = 0;
    uVar1 = *(undefined1 *)((int)param_1 + 6);
    while (iVar4 = FUN_08835134(uVar3,uVar1,iVar4), iVar4 != 0) {
      uVar3 = *param_1;
      iVar5 = iVar5 + 1;
      uVar1 = *(undefined1 *)((int)param_1 + 6);
    }
    *(char *)((int)param_1 + 7) = (char)iVar5;
    if (0 < iVar5) {
      uVar3 = FUN_08842100((uint)*(byte *)((int)param_1 + 7) << 2);
      param_1[2] = uVar3;
      uVar3 = *param_1;
      iVar4 = 0;
      uVar1 = *(undefined1 *)((int)param_1 + 6);
      iVar5 = 0;
      while (iVar4 = FUN_08835134(uVar3,uVar1,iVar4), iVar4 != 0) {
        *(int *)(param_1[2] + iVar5) = iVar4;
        uVar3 = *param_1;
        iVar5 = iVar5 + 4;
        uVar1 = *(undefined1 *)((int)param_1 + 6);
      }
    }
  }
  *(undefined2 *)(param_1 + 1) = 0;
  iVar5 = 0;
  iVar4 = 0;
  if (*(char *)((int)param_1 + 7) != '\0') {
    do {
      iVar2 = FUN_08837d18(*param_1,**(undefined1 **)(param_1[2] + iVar4));
      if (iVar2 != 0) {
        FUN_08812664(param_1 + *(short *)(param_1 + 1) * 7 + 3,*param_1,
                     *(undefined4 *)(param_1[2] + iVar4));
        *(short *)(param_1 + 1) = *(short *)(param_1 + 1) + 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < (int)(uint)*(byte *)((int)param_1 + 7));
  }
  return;
}

