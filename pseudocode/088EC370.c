/* Entry 0x088EC370 | file offset 0x000E9348 | FUN_088ec370 | bytes 340 */

void FUN_088ec370(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_90 [8];
  undefined1 auStack_70 [64];
  undefined1 auStack_30 [3];
  char local_2d;
  
  piVar2 = local_90;
  piVar4 = local_90;
  local_90[0] = 0;
  local_90[1] = 1;
  local_90[2] = 0;
  local_90[3] = 2;
  local_90[4] = 1;
  local_90[5] = 0xffffffff;
  uVar1 = 0;
  do {
    iVar3 = *(int *)(param_1 + *piVar2 * 4);
    FUN_088da0a8(*(undefined4 *)(param_1 + 8),*(undefined4 *)((int)piVar4 + 8),auStack_70,auStack_30
                );
    if ((local_2d == '\0') && (*(int *)((int)piVar4 + 0xc) != 0)) {
      FUN_088da0a8(*(undefined4 *)(param_1 + 8),*(int *)((int)piVar4 + 0xc),auStack_70,auStack_30);
    }
    if (local_2d == '\0') {
      if (*(short *)(iVar3 + 0xc) != -1) {
        FUN_088d9f5c(iVar3,0xffffffff,1);
      }
    }
    else if (*(short *)(iVar3 + 0xc) == -1) {
      FUN_088d9f5c(iVar3,0,1);
    }
    FUN_088d9b84(iVar3,auStack_70);
    FUN_088d9af4(iVar3,auStack_30);
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
    piVar4 = (int *)((int)piVar4 + 8);
  } while (uVar1 < 2);
  return;
}

