/* Entry 0x08997880 | file offset 0x00194858 | FUN_08997880 | bytes 1884 */

int FUN_08997880(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar8 = CONCAT44(param_4,param_3);
  uVar7 = CONCAT44(param_2,param_1);
  uVar6 = param_2 & 0x7fffffff;
  if ((uVar6 < 0x3e300000) && (iVar1 = FUN_0899a8c8(param_1,param_2), iVar1 == 0)) {
    if ((uVar6 == 0 && param_1 == 0) && param_5 == -1) {
      uVar7 = FUN_0899379c(param_1,param_2);
      param_1 = FUN_0899a56c(0,0x3ff00000,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    }
    else if (param_5 != 1) {
      param_1 = FUN_0899a56c(0,0xbff00000,param_1,param_2);
    }
    return param_1;
  }
  local_58 = param_3;
  local_54 = param_4;
  if (0x3fe59427 < uVar6) {
    if ((int)param_2 < 0) {
      uVar7 = FUN_0899a99c(param_1,param_2);
      uVar8 = FUN_0899a99c(param_3,param_4);
    }
    uVar7 = FUN_0899a180(0x54442d18,0x3fe921fb,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar8 = FUN_0899a180(0x33145c07,0x3c81a626,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    uVar7 = FUN_0899a118((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,
                         (int)((ulonglong)uVar7 >> 0x20));
    local_54 = 0;
    local_58 = 0;
  }
  local_64 = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_68 = (undefined4)uVar7;
  uVar7 = FUN_0899a1f4(local_68,local_64,local_68,local_64);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar2 = (undefined4)uVar7;
  uVar7 = FUN_0899a1f4(uVar2,uVar4,uVar2,uVar4);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar3 = (undefined4)uVar7;
  uVar7 = FUN_0899a1f4(uVar3,uVar5,0xdb605373,0xbef375cb);
  uVar7 = FUN_0899a118(0xa03792a6,0x3f147e88,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0899a1f4(uVar3,uVar5,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0899a118(0xf2f26501,0x3f4344d8,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0899a1f4(uVar3,uVar5,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0899a118(0xc9560328,0x3f6d6d22,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0899a1f4(uVar3,uVar5,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0899a118(0x8406d637,0x3f9664f4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0899a1f4(uVar3,uVar5,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0899a118(0x1110fe7a,0x3fc11111,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar8 = FUN_0899a1f4(uVar3,uVar5,0x74bf7ad4,0x3efb2a70);
  uVar8 = FUN_0899a118(0x32f0a7e9,0x3f12b80f,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar8 = FUN_0899a1f4(uVar3,uVar5,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar8 = FUN_0899a118(0x1a8d1068,0x3f3026f7,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar8 = FUN_0899a1f4(uVar3,uVar5,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar8 = FUN_0899a118(0xfee08315,0x3f57dbc8,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar8 = FUN_0899a1f4(uVar3,uVar5,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar8 = FUN_0899a118(0xe96e8493,0x3f8226e3,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar8 = FUN_0899a1f4(uVar3,uVar5,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar8 = FUN_0899a118(0x1bb341fe,0x3faba1ba,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar8 = FUN_0899a1f4(uVar2,uVar4,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar9 = FUN_0899a1f4(local_68,local_64,uVar2,uVar4);
  uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uVar7 = FUN_0899a118((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                       (int)((ulonglong)uVar8 >> 0x20));
  uVar7 = FUN_0899a1f4((int)uVar9,uVar3,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0899a118((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),local_58,local_54);
  uVar7 = FUN_0899a1f4(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0899a118(local_58,local_54,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar8 = FUN_0899a1f4(0x55555563,0x3fd55555,(int)uVar9,uVar3);
  uVar7 = FUN_0899a118((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                       (int)((ulonglong)uVar8 >> 0x20));
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar2 = (undefined4)uVar7;
  uVar7 = FUN_0899a118(uVar2,uVar3,local_68,local_64);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  iVar1 = (int)uVar7;
  if (0x3fe59427 >= uVar6) {
    if (param_5 != 1) {
      uVar7 = FUN_0899a180(0,uVar4,local_68,local_64);
      uVar7 = FUN_0899a180(uVar2,uVar3,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      uVar8 = FUN_0899a56c(0,0xbff00000,iVar1,uVar4);
      uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar9 = FUN_0899a1f4(0,uVar2,0,uVar4);
      uVar9 = FUN_0899a118((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x3ff00000);
      uVar7 = FUN_0899a1f4(0,uVar2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      uVar7 = FUN_0899a118((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar7,
                           (int)((ulonglong)uVar7 >> 0x20));
      uVar7 = FUN_0899a1f4((int)uVar8,uVar2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      iVar1 = FUN_0899a118(0,uVar2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
      return iVar1;
    }
    return iVar1;
  }
  uVar7 = FUN_0899a7ec();
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar8 = FUN_0899a7ec(1 - ((int)param_2 >> 0x1e & 2U));
  uVar9 = FUN_0899a1f4(iVar1,uVar4,iVar1,uVar4);
  uVar10 = FUN_0899a118((int)uVar7,uVar5,iVar1,uVar4);
  uVar9 = FUN_0899a56c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar10,
                       (int)((ulonglong)uVar10 >> 0x20));
  uVar9 = FUN_0899a180((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar3);
  uVar9 = FUN_0899a180(local_68,local_64,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  uVar9 = FUN_0899a1f4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,0x40000000);
  uVar7 = FUN_0899a180((int)uVar7,uVar5,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  iVar1 = FUN_0899a1f4((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,
                       (int)((ulonglong)uVar7 >> 0x20));
  return iVar1;
}

