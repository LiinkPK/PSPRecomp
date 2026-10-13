/* Entry 0x089A3590 | file offset 0x001A0568 | FUN_089a3590 | bytes 60 */

undefined4 * FUN_089a3590(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = vdiv_s(*param_2,*param_3);
  uVar2 = vdiv_s(param_2[1],param_3[1]);
  uVar3 = vdiv_s(param_2[2],param_3[2]);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}

