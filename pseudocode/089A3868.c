/* Entry 0x089A3868 | file offset 0x001A0840 | FUN_089a3868 | bytes 40 */

undefined4 * FUN_089a3868(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = param_2[3];
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  return param_1;
}

