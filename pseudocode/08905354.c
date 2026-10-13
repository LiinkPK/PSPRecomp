/* Entry 0x08905354 | file offset 0x0010232C | FUN_08905354 | bytes 232 */

undefined4 FUN_08905354(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  local_20 = param_3;
  if (((param_1[3] + param_1[1]) - (param_1[2] + 1)) % param_1[1] < param_3) {
    uVar1 = 0;
  }
  else {
    while (0 < local_20) {
      local_1c = param_1[1] - param_1[2];
      piVar2 = &local_1c;
      if (local_20 < param_1[1] - param_1[2]) {
        piVar2 = &local_20;
      }
      iVar3 = *piVar2;
      FUN_08935524(*param_1 + param_1[2],param_2,iVar3);
      param_2 = param_2 + iVar3;
      local_20 = local_20 - iVar3;
      param_1[2] = (param_1[2] + iVar3) % param_1[1];
    }
    uVar1 = 1;
  }
  return uVar1;
}

