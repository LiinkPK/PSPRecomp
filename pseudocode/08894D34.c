/* Entry 0x08894D34 | file offset 0x00091D0C | FUN_08894d34 | bytes 244 */

undefined4 * FUN_08894d34(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[0x48] = &DAT_089ca868;
  FUN_0886ee24(param_1 + 4);
  FUN_0886f028(param_1 + 0x18);
  FUN_08864c1c(param_1 + 0x1e);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0x24] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0x3f800000;
    puVar1[0x29] = 0x80808080;
    puVar1[0x2a] = 1;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (iVar2 < 4);
  param_1[0x22] = 2;
  param_1[0x23] = 0;
  *param_1 = 0;
  param_1[0x1d] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0x24] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0x3f800000;
    puVar1[0x29] = 0x80808080;
    puVar1[0x2a] = 1;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (iVar2 < 4);
  param_1[0x23] = 0;
  return param_1;
}

