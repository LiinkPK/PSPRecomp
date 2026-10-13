/* Entry 0x08906740 | file offset 0x00103718 | FUN_08906740 | bytes 152 */

void FUN_08906740(int *param_1)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  short local_20 [2];
  undefined1 *local_1c;
  undefined2 local_18;
  undefined2 local_16;
  code *local_14;
  undefined2 local_10;
  undefined2 local_e;
  code *local_c;
  
  local_20[1] = 0;
  local_20[0] = 0;
  local_1c = &LAB_08906ad0;
  local_16 = 0;
  local_18 = 0;
  local_14 = FUN_08906ad8;
  local_e = 0;
  local_10 = 0;
  iVar4 = *param_1;
  local_c = FUN_08906b60;
  pcVar2 = (code *)(&local_1c)[iVar4 * 2];
  iVar1 = (int)param_1 + (int)local_20[iVar4 * 4];
  if (local_20[iVar4 * 4 + 1] != 0) {
    psVar3 = (short *)(*(int *)(pcVar2 + iVar1) + local_20[iVar4 * 4 + 1] * 8);
    pcVar2 = *(code **)(psVar3 + 2);
    iVar1 = iVar1 + *psVar3;
  }
  (*pcVar2)(iVar1);
  return;
}

