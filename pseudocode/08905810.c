/* Entry 0x08905810 | file offset 0x001027E8 | FUN_08905810 | bytes 56 */

undefined1 * FUN_08905810(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  uVar3 = param_2[3];
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}

