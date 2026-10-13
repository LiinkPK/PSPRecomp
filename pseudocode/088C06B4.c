/* Entry 0x088C06B4 | file offset 0x000BD68C | FUN_088c06b4 | bytes 244 */

int FUN_088c06b4(short *param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int local_30 [12];
  
  piVar1 = local_30;
  local_30[0] = 0;
  local_30[1] = 1;
  local_30[2] = 1;
  local_30[3] = 2;
  local_30[4] = 3;
  local_30[5] = 3;
  local_30[6] = 4;
  local_30[7] = 5;
  local_30[8] = 5;
  iVar2 = 0;
  do {
    *(undefined4 *)((int)piVar1 + 0x24) = 2;
    if (0 < param_1[1]) {
      fVar3 = (float)(int)*param_1 / (float)(int)param_1[1];
      if (0.5 < fVar3) {
        *(undefined4 *)((int)piVar1 + 0x24) = 0;
      }
      else if (0.3 < fVar3) {
        *(undefined4 *)((int)piVar1 + 0x24) = 1;
      }
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 2;
    piVar1 = (int *)((int)piVar1 + 4);
  } while (iVar2 < 2);
  return local_30[local_30[9] * 3 + local_30[10]];
}

