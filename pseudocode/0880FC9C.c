/* Entry 0x0880FC9C | file offset 0x0000CC74 | FUN_0880fc9c | bytes 152 */

void FUN_0880fc9c(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
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
  local_1c = &LAB_08810064;
  local_16 = 0;
  local_18 = 0;
  local_14 = FUN_0881006c;
  local_e = 0;
  local_10 = 0;
  iVar3 = *(int *)(param_1 + 0xb4);
  local_c = FUN_0881019c;
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

