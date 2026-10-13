/* Entry 0x08862450 | file offset 0x0005F428 | FUN_08862450 | bytes 348 */

void FUN_08862450(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  short local_40 [2];
  int local_3c;
  undefined2 local_38;
  undefined2 local_36;
  code *local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  code *local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  
  local_40[0] = 0;
  local_40[1] = 0;
  local_3c = 0;
  local_38 = 0;
  local_36 = 0;
  local_34 = FUN_088625ac;
  iVar2 = *(int *)(param_1 + 0x6c);
  local_30 = 0;
  local_2e = 0;
  local_2c = 0;
  psVar1 = local_40 + iVar2 * 4;
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1e = 0;
  local_1c = FUN_088625d4;
  local_18 = 0;
  local_16 = 0;
  local_14 = 0;
  if (iVar2 != *(int *)(param_1 + 0x70)) {
    iVar3 = (int)local_40[iVar2 * 4 + 1];
    pcVar4 = (code *)(&local_3c)[iVar2 * 2];
    if (((iVar3 != 0) || (*psVar1 != 0)) || (pcVar4 != (code *)0x0)) {
      iVar2 = param_1 + *psVar1;
      if (iVar3 != 0) {
        psVar1 = (short *)(*(int *)(pcVar4 + iVar2) + iVar3 * 8);
        pcVar4 = *(code **)(psVar1 + 2);
        iVar2 = iVar2 + *psVar1;
      }
      (*pcVar4)(iVar2);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x6c);
      psVar1 = local_40 + *(int *)(param_1 + 0x6c) * 4;
    }
  }
  iVar2 = (int)psVar1[0xd];
  pcVar4 = *(code **)(psVar1 + 0xe);
  if (((iVar2 != 0) || (psVar1[0xc] != 0)) || (pcVar4 != (code *)0x0)) {
    iVar3 = param_1 + psVar1[0xc];
    if (iVar2 != 0) {
      psVar1 = (short *)(*(int *)(pcVar4 + iVar3) + iVar2 * 8);
      iVar3 = iVar3 + *psVar1;
      pcVar4 = *(code **)(psVar1 + 2);
    }
    iVar2 = (*pcVar4)(iVar3);
    if (iVar2 == 1) {
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    }
  }
  return;
}

