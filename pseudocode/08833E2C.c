/* Entry 0x08833E2C | file offset 0x00030E04 | FUN_08833e2c | bytes 820 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08833e2c(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 auStack_d0 [44];
  undefined1 local_a4;
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [20];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  bVar1 = false;
  iVar3 = param_1 + 0x130;
  if (**(int **)(param_1 + 0x3a4) == 3) {
    bVar1 = true;
  }
  else if ((**(int **)(param_1 + 0x3a4) == 0x17) &&
          ((*(uint *)(*(int *)(param_1 + 0x314) + 0xcc) & 0x1000000) != 0)) {
    bVar1 = true;
  }
  if ((*(short *)(param_1 + 0x180) == 700) || (*(short *)(param_1 + 0x180) == 0x2bd)) {
    FUN_0882fa10(0,0,iVar3,0x2be,0);
    FUN_0882fb90(0x41000000,0,iVar3,1);
    uVar4 = *(uint *)(param_1 + 900);
  }
  else {
    FUN_0882fa10(0,0,iVar3,0x2f0,0);
    FUN_0882fb90(0x41000000,0,iVar3,1);
    uVar4 = *(uint *)(param_1 + 900);
  }
  *(uint *)(param_1 + 900) = uVar4 | 0x200;
  *(uint *)(param_1 + 900) = uVar4 & 0xfffffeff | 0x200;
  *(uint *)(param_1 + 900) = uVar4 & 0xfffff6ff | 0x200;
  FUN_08834c10(param_1,0,0);
  if (bVar1) {
    uVar2 = FUN_08899300();
    FUN_089a3890(&local_80);
    local_7c = 0xbf800000;
    local_70 = local_80;
    local_6c = 0xbf800000;
    local_68 = local_78;
    local_f0 = local_80;
    local_ec = 0xbf800000;
    local_e8 = local_78;
    FUN_089a34c0(auStack_94,&local_f0);
    FUN_08837030(&local_50,param_1);
    local_e0 = local_50;
    local_dc = local_4c;
    local_d8 = local_48;
    local_d4 = local_44;
    local_64 = local_50;
    local_60 = local_4c;
    local_5c = local_48;
    local_f0 = local_50;
    local_ec = local_4c;
    local_e8 = local_48;
    FUN_089a34c0(auStack_a0,&local_f0);
    iVar3 = FUN_0889beb0(0x40400000,uVar2,auStack_d0,auStack_a0,0x22,1,1,0,0,0,0);
    if (iVar3 != 0) {
      uVar2 = FUN_0881baa8();
      iVar3 = FUN_0881c68c(uVar2,local_a4);
      uVar2 = _DAT_08ad0158;
      if (iVar3 == 0) {
        uVar5 = FUN_08837014(param_1);
        func_0x08acfa14(uVar5,uVar2,auStack_d0);
        FUN_08833c18(0x3f000000,param_1);
        FUN_08834160(param_1);
        uVar4 = *(uint *)(param_1 + 0x380);
        *(uint *)(param_1 + 0x380) = uVar4 | 0x20000;
        *(uint *)(param_1 + 0x380) = uVar4 | 0x60000;
      }
    }
  }
  return;
}

