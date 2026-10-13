/* Entry 0x088DC7E4 | file offset 0x000D97BC | FUN_088dc7e4 | bytes 104 */

void FUN_088dc7e4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0x17] + param_1[0xf];
  *param_1 = param_1[0x17];
  iVar1 = iVar2 + param_1[0x10];
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  iVar1 = iVar1 + param_1[0x11];
  param_1[3] = iVar1;
  iVar1 = iVar1 + param_1[0x12];
  param_1[4] = iVar1;
  iVar1 = iVar1 + param_1[0x13];
  if (param_1[0x16] == 0) {
    param_1[0x15] = 0;
  }
  else {
    param_1[0x15] = iVar1;
    iVar1 = iVar1 + param_1[0x16] * 0x10;
  }
  param_1[5] = iVar1;
  return;
}

