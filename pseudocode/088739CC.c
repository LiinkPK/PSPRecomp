/* Entry 0x088739CC | file offset 0x000709A4 | FUN_088739cc | bytes 152 */

void FUN_088739cc(int param_1)

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
  local_1c = &LAB_08873f78;
  local_16 = 0;
  local_18 = 0;
  local_14 = FUN_08873f80;
  local_e = 0;
  local_10 = 0;
  iVar3 = *(int *)(param_1 + 0x234);
  local_c = FUN_088740dc;
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

