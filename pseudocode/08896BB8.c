/* Entry 0x08896BB8 | file offset 0x00093B90 | FUN_08896bb8 | bytes 56 */

undefined4 * FUN_08896bb8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[4] = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 9);
  return param_1;
}

