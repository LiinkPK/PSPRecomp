/* Entry 0x0880AB38 | file offset 0x00007B10 | FUN_0880ab38 | bytes 188 */

undefined4 * FUN_0880ab38(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = param_2;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[1] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 8);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[9] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 8);
  param_1[0x11] = 0;
  FUN_08993560(param_1 + 0x12,4,0xc,&LAB_0880ab2c);
  if (DAT_089d4774 == (undefined4 *)0x0) {
    DAT_089d4770 = param_1;
    DAT_089d4774 = param_1;
    param_1[0x1e] = 0;
  }
  else {
    *(undefined4 **)((int)DAT_089d4774 + 0x78) = param_1;
    param_1[0x1e] = 0;
    DAT_089d4774 = param_1;
  }
  return param_1;
}

