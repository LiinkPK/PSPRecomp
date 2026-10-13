/* Entry 0x088B32B4 | file offset 0x000B028C | FUN_088b32b4 | bytes 172 */

/* WARNING: Removing unreachable block (ram,0x088b3338) */
/* WARNING: Removing unreachable block (ram,0x088b333c) */
/* WARNING: Removing unreachable block (ram,0x088b3344) */

void FUN_088b32b4(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int local_20 [8];
  
  local_20[0] = 2;
  local_20[1] = 4;
  local_20[2] = 9;
  local_20[3] = 7;
  local_20[4] = 8;
  piVar1 = (int *)(param_1 + 0xfd94 + local_20[param_2] * 4);
  iVar2 = *piVar1;
  if (local_20[param_2] < 0x13) {
    param_3 = iVar2 + param_3;
    if (999999999 < param_3) {
      param_3 = 999999999;
    }
  }
  else if (param_3 < iVar2) {
    param_3 = iVar2;
  }
  *piVar1 = param_3;
  return;
}

