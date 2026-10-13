/* Entry 0x08973F94 | file offset 0x00170F6C | FUN_08973f94 | bytes 92 */

void FUN_08973f94(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  iVar1 = param_1[0x182];
  if (iVar1 < 1) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    param_1[0x182] = iVar1 + -1;
    puVar2 = (undefined4 *)param_1[iVar1 + 0x141];
  }
  param_1[0x183] = puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_1[0x183] + 4) = param_3;
  *(undefined4 *)(param_1[0x183] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[0x183] + 0xc) = 0;
  *(undefined4 *)(param_1[0x183] + 0x10) = 0;
  return;
}

