/* Entry 0x08973F30 | file offset 0x00170F08 | FUN_08973f30 | bytes 100 */

undefined4 * FUN_08973f30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0;
  param_1[0x182] = 0;
  puVar2 = param_1 + 0x13d;
  puVar1 = param_1;
  do {
    puVar1[0x142] = puVar2;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + -5;
    puVar1 = puVar1 + 1;
  } while (iVar3 < 0x40);
  param_1[0x182] = iVar3;
  param_1[0x183] = 0;
  return param_1;
}

