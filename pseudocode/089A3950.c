/* Entry 0x089A3950 | file offset 0x001A0928 | FUN_089a3950 | bytes 40 */

undefined4 * FUN_089a3950(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = vdiv_s(*param_2,*param_3);
  uVar2 = vdiv_s(param_2[1],param_3[1]);
  uVar3 = vdiv_s(param_2[2],param_3[2]);
  uVar4 = vdiv_s(param_2[3],param_3[3]);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return param_1;
}

