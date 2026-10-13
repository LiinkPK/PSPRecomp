/* Entry 0x088A7118 | file offset 0x000A40F0 | FUN_088a7118 | bytes 192 */

void FUN_088a7118(int param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  short *psVar2;
  short local_20 [2];
  code *local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined1 *local_14;
  undefined2 local_10;
  undefined2 local_e;
  code *local_c;
  
  local_20[0] = 0;
  local_20[1] = 0;
  local_1c = FUN_088a7714;
  local_18 = 0;
  local_16 = 0;
  local_14 = &LAB_088a7768;
  local_10 = 0;
  local_e = 0;
  local_c = FUN_088a7770;
  if ((param_2 == *(int *)(param_1 + 0xd0)) && (*(int *)(param_1 + 0xd0) != 0)) {
    param_1 = param_1 + local_20[param_3 * 4];
    pcVar1 = (&local_1c)[param_3 * 2];
    if (local_20[param_3 * 4 + 1] != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + param_1) + local_20[param_3 * 4 + 1] * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      param_1 = param_1 + *psVar2;
    }
    (*pcVar1)(param_1,param_2,param_4);
  }
  return;
}

