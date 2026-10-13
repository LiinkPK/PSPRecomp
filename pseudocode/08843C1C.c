/* Entry 0x08843C1C | file offset 0x00040BF4 | FUN_08843c1c | bytes 216 */

undefined4 * FUN_08843c1c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_0883eae8(param_1 + 0xd);
  FUN_0884236c(param_1 + 0x18);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_08828a84(param_1 + 0x25);
  FUN_08810458(param_1 + 0x28);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_088a3900(param_1 + 0x35);
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)((int)param_1 + 0xe2) = 0;
  param_1[0x39] = 0;
  iVar1 = DAT_089d4960;
  puVar2 = (undefined4 *)(DAT_089d4960 + 8);
  if (*(int *)(DAT_089d4960 + 0xc) == 0) {
    *(undefined4 **)(DAT_089d4960 + 0xc) = param_1;
    *puVar2 = param_1;
    param_1[0x3a] = 0;
  }
  else {
    *(undefined4 **)(*(int *)(DAT_089d4960 + 0xc) + 0xe8) = param_1;
    param_1[0x3a] = 0;
    *(undefined4 **)(iVar1 + 0xc) = param_1;
  }
  return param_1;
}

