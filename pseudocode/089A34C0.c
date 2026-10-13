/* Entry 0x089A34C0 | file offset 0x001A0498 | FUN_089a34c0 | bytes 32 */

undefined4 * FUN_089a34c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return param_1;
}

