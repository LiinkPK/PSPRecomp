/* Entry 0x08814D78 | file offset 0x00011D50 | FUN_08814d78 | bytes 552 */

undefined4 FUN_08814d78(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  FUN_08814d08();
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x564) = param_2;
    *(int *)(param_1 + 0x568) = param_3;
    FUN_089a3868(param_1 + 0x550,param_5);
    local_30 = *param_4;
    local_2c = param_4[1];
    local_28 = param_4[2];
    local_24 = param_4[3];
    FUN_088359a8(param_1,&local_30,1);
    FUN_08835c54(*(undefined4 *)(param_5 + 4),param_1);
    iVar1 = FUN_08824aa8(param_1 + 0x570,param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_08817d68(param_1 + 0x5b0,param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_088211b8(param_1 + 0x5dc,param_1,param_1 + 0x5b0);
        if (iVar1 == 0) {
          if (((uint)(int)*(char *)(param_2 + 8) < *(uint *)(DAT_089d4910 + 0x18)) ||
             ((uint)(int)*(char *)(param_2 + 9) < *(uint *)(DAT_089d4910 + 0x2c))) {
            local_20 = 0;
            iVar2 = FUN_08842100(0x34);
            iVar1 = local_20;
            if (iVar2 != 0) {
              FUN_0881efa4(iVar2);
              iVar1 = iVar2;
            }
            *(int *)(param_1 + 0x5f4) = iVar1;
            if (iVar1 == 0) {
              return 0xfffffffb;
            }
            iVar1 = FUN_0881f0a0(iVar1,param_1);
            if (iVar1 != 0) {
              return 0xfffffffa;
            }
          }
          iVar1 = *(int *)(param_1 + 0x394);
          if (iVar1 != 0) {
            *(code **)(iVar1 + 0x134) = FUN_08815f68;
            *(int *)(iVar1 + 0x138) = param_1;
          }
          FUN_08815e14(param_1);
          iVar1 = FUN_08835134(param_1,0xc,0);
          uVar4 = *(uint *)(param_1 + 0x560) & 0xfffffff7 | (uint)(iVar1 != 0) << 3;
          *(uint *)(param_1 + 0x560) = uVar4;
          *(uint *)(param_1 + 0x560) = uVar4 | 1;
          iVar1 = FUN_08814fa0(param_1);
          if (iVar1 == 0) {
            uVar3 = 0;
          }
          else {
            FUN_08814d08(param_1);
            uVar3 = 0xfffffff9;
          }
        }
        else {
          uVar3 = 0xfffffffc;
        }
      }
      else {
        uVar3 = 0xfffffffd;
      }
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  return uVar3;
}

