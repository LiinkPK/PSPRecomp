/* Entry 0x089A3BC8 | file offset 0x001A0BA0 | FUN_089a3bc8 | bytes 48 */

undefined4 * FUN_089a3bc8(undefined4 *param_1,undefined1 (*param_2) [12])

{
  undefined1 auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *(undefined4 *)param_2[1];
  uVar3 = vdot_t(*param_2,*param_2);
  uVar4 = vzero_s();
  uVar5 = vcmp_s(8,uVar3,uVar3);
  vrsq_s(uVar3);
  uVar3 = vcmovt_s(uVar4,(byte)uVar5 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*param_2,uVar3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = uVar2;
  return param_1;
}

