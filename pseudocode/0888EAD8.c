/* Entry 0x0888EAD8 | file offset 0x0008BAB0 | FUN_0888ead8 | bytes 132 */

void FUN_0888ead8(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  short local_20 [2];
  undefined1 *local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined1 *local_14;
  
  local_20[1] = 0;
  local_20[0] = 0;
  local_1c = &LAB_0888ec78;
  local_16 = 0;
  local_18 = 0;
  iVar3 = *(int *)(param_1 + 4);
  local_14 = &LAB_0888ecd4;
  pcVar1 = (code *)(&local_1c)[iVar3 * 2];
  param_1 = param_1 + local_20[iVar3 * 4];
  if (local_20[iVar3 * 4 + 1] != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + param_1) + local_20[iVar3 * 4 + 1] * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    param_1 = param_1 + *psVar2;
  }
  (*pcVar1)(param_1);
  return;
}

