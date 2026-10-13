/* Entry 0x08844B08 | file offset 0x00041AE0 | FUN_08844b08 | bytes 80 */

undefined4 * FUN_08844b08(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[4] = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x10);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  return param_1;
}

