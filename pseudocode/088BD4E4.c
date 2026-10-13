/* Entry 0x088BD4E4 | file offset 0x000BA4BC | FUN_088bd4e4 | bytes 52 */

undefined4 * FUN_088bd4e4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[2] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}

