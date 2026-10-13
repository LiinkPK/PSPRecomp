/* Entry 0x089A4520 | file offset 0x001A14F8 | FUN_089a4520 | bytes 92 */

undefined4 FUN_089a4520(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = vcst_s(3);
  uVar2 = vcst_s(8);
  vpfxs(8,1,2,3);
  uVar4 = vcmp_s(2,param_1,uVar1);
  uVar3 = vmul_s(param_1,param_1);
  uVar1 = vsgn_s(param_1);
  if ((uVar4 & 1) == 0) {
    vpfxd(2,5,5,5);
    uVar3 = vocp_s(uVar3);
    uVar3 = vsqrt_s(uVar3);
    uVar3 = vasin_s(uVar3);
    uVar3 = vocp_s(uVar3);
    uVar1 = vmul_s(uVar3,uVar1);
  }
  else {
    uVar1 = vasin_s(param_1);
  }
  uVar1 = vocp_s(uVar1);
  uVar1 = vmul_s(uVar1,uVar2);
  return uVar1;
}

