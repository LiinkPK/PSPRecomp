/* Entry 0x089A457C | file offset 0x001A1554 | FUN_089a457c | bytes 352 */

undefined4 FUN_089a457c(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = vcmp_p(0xb,CONCAT44(param_2,param_1),CONCAT44(param_2,param_1));
  uVar4 = vzero_s();
  if ((uVar6 >> 4 & 1) == 0) {
    uVar2 = vcmp_s(6,param_2,uVar4);
    vcst_s(9);
    uVar4 = vcmovt_s(uVar4,(byte)uVar2 & 1);
    uVar6 = vcmp_s(8,param_1,param_1);
    uVar2 = vcst_s(8);
    if ((uVar6 & 1) != 0) {
      return uVar4;
    }
    uVar4 = vrcp_s(param_2);
    uVar3 = vmul_s(param_1,uVar4);
    uVar6 = vcmp_s(9,uVar3,uVar3);
    uVar4 = vmov_s(uVar3);
    if ((uVar6 & 1) != 0) {
      return uVar4;
    }
    uVar6 = vcmp_s(0xb,uVar3,uVar3);
    if ((uVar6 & 1) == 0) {
      uVar3 = vmul_s(uVar3,uVar3);
      uVar6 = vcmp_s(0xb,uVar3,uVar3);
      uVar5 = vone_s();
      if ((uVar6 & 1) != 0) {
        uVar4 = vsgn_s(param_1);
        uVar2 = vcst_s(8);
        uVar3 = vone_s();
        if ((uVar6 & 1) == 0) {
          uVar5 = vsgn_s(param_2);
          uVar3 = vsub_s(uVar3,uVar5);
        }
        goto LAB_089a46c0;
      }
      vpfxs(8,1,2,3);
      uVar6 = vcmp_s(2,uVar4,uVar5);
      uVar5 = vadd_s(uVar3,uVar5);
      if ((uVar6 & 1) == 0) {
        uVar4 = vrcp_s(uVar5);
        uVar4 = vmul_s(uVar3,uVar4);
        vpfxd(2,5,5,5);
        uVar4 = vocp_s(uVar4);
        uVar4 = vsqrt_s(uVar4);
        uVar4 = vasin_s(uVar4);
        uVar3 = vocp_s(uVar4);
      }
      else {
        uVar3 = vrsq_s(uVar5);
        uVar4 = vmul_s(uVar4,uVar3);
        uVar3 = vasin_s(uVar4);
      }
    }
    else {
      uVar3 = vsgn_s(param_1);
    }
    vpfxd(1,2,5,5);
    vpfxs(0,0x11,2,3);
    uVar1 = vsgn_p(CONCAT44(param_2,param_1));
    uVar4 = (undefined4)uVar1;
    uVar5 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar6 = vcmp_s(8,uVar5,uVar5);
    if ((uVar6 & 1) == 0) {
      vpfxs(6,1,2,3);
      vpfxt(8,1,2,3);
      uVar3 = vsub_s(uVar3,uVar3);
    }
  }
  else {
    uVar6 = vcmp_p(9,CONCAT44(param_2,param_1),CONCAT44(param_2,param_1));
    uVar4 = vfim_s(0xbc00);
    uVar2 = vrsq_s(uVar4);
    if ((uVar6 >> 4 & 1) != 0) {
      return uVar2;
    }
    uVar6 = vcmp_p(10,CONCAT44(param_2,param_1),CONCAT44(param_2,param_1));
    if ((uVar6 >> 5 & 1) == 0) {
      uVar4 = vi2f_s(param_1,0);
      vpfxt(7,1,2,3);
      uVar4 = vadd_s(uVar4,uVar4);
      uVar4 = vsgn_s(uVar4);
      uVar2 = vcst_s(8);
      uVar3 = vone_s();
      if ((uVar6 & 1) == 0) {
        uVar2 = vzero_s();
        uVar3 = vcmp_s(6,param_2,uVar2);
        uVar3 = vcmovt_s(uVar2,(byte)uVar3 & 1);
        uVar2 = vcst_s(9);
      }
    }
    else {
      uVar1 = vsgn_p(CONCAT44(param_2,param_1));
      uVar4 = (undefined4)uVar1;
      vpfxs(6,1,2,3);
      uVar3 = vsub_s(uVar2,(int)((ulonglong)uVar1 >> 0x20));
      uVar2 = vcst_s(7);
    }
  }
LAB_089a46c0:
  vpfxs(8,1,2,3);
  uVar4 = vmul_s(uVar3,uVar4);
  uVar4 = vmul_s(uVar4,uVar2);
  return uVar4;
}

