/* Entry 0x0890C5BC | file offset 0x00109594 | FUN_0890c5bc | bytes 132 */

void FUN_0890c5bc(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  short local_20 [2];
  code *local_1c;
  undefined2 local_18;
  undefined2 local_16;
  code *local_14;
  
  local_20[1] = 0;
  local_20[0] = 0;
  local_1c = FUN_0890d664;
  local_16 = 0;
  local_18 = 0;
  iVar3 = *(int *)(param_1 + 0x40);
  local_14 = FUN_0890df58;
  pcVar1 = (&local_1c)[iVar3 * 2];
  param_1 = param_1 + local_20[iVar3 * 4];
  if (local_20[iVar3 * 4 + 1] != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + param_1) + local_20[iVar3 * 4 + 1] * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    param_1 = param_1 + *psVar2;
  }
  (*pcVar1)(param_1);
  return;
}

