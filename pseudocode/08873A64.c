/* Entry 0x08873A64 | file offset 0x00070A3C | FUN_08873a64 | bytes 180 */

void FUN_08873a64(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  short local_20 [2];
  code *local_1c;
  undefined2 local_18;
  undefined2 local_16;
  code *local_14;
  undefined2 local_10;
  undefined2 local_e;
  code *local_c;
  
  local_20[0] = 0;
  local_20[1] = 0;
  local_1c = FUN_08874118;
  local_18 = 0;
  local_16 = 0;
  local_14 = FUN_0887414c;
  local_10 = 0;
  local_e = 0;
  local_c = FUN_08874180;
  if (*(char *)(param_1 + 0x239) == '\0') {
    iVar3 = *(int *)(param_1 + 0x234);
    param_1 = param_1 + local_20[iVar3 * 4];
    pcVar1 = (&local_1c)[iVar3 * 2];
    if (local_20[iVar3 * 4 + 1] != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + param_1) + local_20[iVar3 * 4 + 1] * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      param_1 = param_1 + *psVar2;
    }
    (*pcVar1)(param_1);
  }
  return;
}

