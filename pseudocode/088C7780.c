/* Entry 0x088C7780 | file offset 0x000C4758 | FUN_088c7780 | bytes 276 */

void FUN_088c7780(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118 [64];
  int local_18;
  
  puVar5 = &local_120;
  puVar6 = &local_120;
  local_120 = param_2;
  local_11c = param_3;
  iVar1 = FUN_088c76ac(local_118,0x40,&local_120);
  iVar4 = 0;
  iVar3 = 0;
  local_18 = param_4;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + *(short *)(*(int *)((int)puVar5 + 8) + 6);
      puVar5 = (undefined4 *)((int)puVar5 + 4);
    } while (iVar4 < iVar1);
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      local_18 = local_18 * 0x343fd + 0x269ec3;
      iVar7 = *(int *)((int)puVar6 + 8);
      if ((int)(local_18 >> 0x10 & 0x7fffU) % iVar3 < (int)*(short *)(iVar7 + 6)) {
        *param_1 = iVar7;
        iVar2 = iVar2 + 1;
        param_1 = param_1 + 1;
        if (iVar2 == 2) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 - *(short *)(iVar7 + 6);
      puVar6 = (undefined4 *)((int)puVar6 + 4);
    } while (iVar4 < iVar1);
  }
  return;
}

