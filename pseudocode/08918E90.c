/* Entry 0x08918E90 | file offset 0x00115E68 | FUN_08918e90 | bytes 1648 */

void FUN_08918e90(int param_1)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  float fVar12;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined1 auStack_800 [16];
  undefined1 auStack_7f0 [1892];
  undefined1 local_8c;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  iVar4 = FUN_0891705c(0xffffffff);
  iVar5 = FUN_08831320(0x12d0);
  iVar9 = 0;
  if (iVar5 != 0) {
    uVar6 = FUN_088729a0(0);
    uVar7 = FUN_088470b8(*(undefined4 *)(param_1 + 0x6cc));
    func_0x08b39e5c(iVar5,uVar6,uVar7,*(undefined4 *)(param_1 + 0x714),0);
    iVar9 = iVar5;
  }
  *(int *)(param_1 + 0x6d0) = iVar9;
  *(int *)(param_1 + 0x714) = *(int *)(param_1 + 0x714) + 1;
  func_0x08b2ef44(iVar9);
  FUN_0882fa10(0,0,*(int *)(param_1 + 0x6d0) + 0x130,1,0);
  func_0x08b34e00(*(undefined4 *)(param_1 + 0x6d0));
  iVar9 = *(int *)(param_1 + 0x6d0);
  uVar11 = *(uint *)(iVar9 + 0x38c);
  uVar6 = *(undefined4 *)(iVar9 + 0x388);
  *(uint *)(iVar9 + 0x38c) = uVar11 | 0x800;
  *(undefined4 *)(iVar9 + 0x388) = uVar6;
  *(uint *)(iVar9 + 0x38c) = uVar11 & 0xffffefff | 0x800;
  *(undefined4 *)(iVar9 + 0x388) = uVar6;
  iVar9 = FUN_088470b8(*(undefined4 *)(param_1 + 0x6cc));
  iVar5 = FUN_0890f3f8((int)*(char *)(iVar9 + 6));
  sVar1 = *(short *)(iVar5 + 4);
  if (sVar1 < 1) {
    uVar6 = FUN_088cb164(DAT_089d712c + 0xf58,(int)*(char *)(iVar9 + 6));
    iVar9 = *(int *)(*(int *)(param_1 + 0x6d0) + 0x544);
    (**(code **)(iVar9 + 0x104))(*(int *)(param_1 + 0x6d0) + (int)*(short *)(iVar9 + 0x100),uVar6,0)
    ;
    iVar9 = *(int *)(param_1 + 0x3c);
    local_810 = *(undefined4 *)(iVar9 + 0x10);
    local_808 = *(undefined4 *)(iVar9 + 0x14);
  }
  else {
    FUN_088cb9e8(auStack_800);
    FUN_088cba10(auStack_800);
    FUN_088cba54(auStack_800,(int)*(char *)(iVar9 + 6));
    uVar6 = FUN_088bca50((int)sVar1);
    FUN_088bc17c(uVar6,auStack_7f0);
    local_8c = *(undefined1 *)(iVar9 + 7);
    iVar9 = *(int *)(*(int *)(param_1 + 0x6d0) + 0x544);
    (**(code **)(iVar9 + 0x104))
              (*(int *)(param_1 + 0x6d0) + (int)*(short *)(iVar9 + 0x100),auStack_800,0);
    iVar9 = *(int *)(param_1 + 0x3c);
    local_810 = *(undefined4 *)(iVar9 + 0x10);
    local_808 = *(undefined4 *)(iVar9 + 0x14);
  }
  local_80c = 0;
  local_804 = 0;
  fVar12 = *(float *)(iVar9 + 0x18) * 0.017453292;
  if (-1 < *(short *)(iVar9 + 6)) {
    uVar6 = FUN_08899300();
    puVar8 = (undefined4 *)FUN_08897dec(uVar6,(int)*(short *)(*(int *)(param_1 + 0x3c) + 6));
    if (puVar8 != (undefined4 *)0x0) {
      FUN_089a383c(*puVar8,puVar8[1],puVar8[2],0,&local_810);
    }
    iVar9 = FUN_08897e48(uVar6,(int)*(short *)(*(int *)(param_1 + 0x3c) + 6));
    if (iVar9 != 0) {
      fVar12 = *(float *)(iVar9 + 4);
    }
  }
  if (-1 < *(int *)(param_1 + 0x40)) {
    uVar6 = FUN_08899300();
    puVar8 = (undefined4 *)FUN_08897dec(uVar6,*(undefined4 *)(param_1 + 0x40));
    if (puVar8 != (undefined4 *)0x0) {
      FUN_089a383c(*puVar8,puVar8[1],puVar8[2],0,&local_810);
    }
    iVar9 = FUN_08897e48(uVar6,*(undefined4 *)(param_1 + 0x40));
    if (iVar9 != 0) {
      fVar12 = *(float *)(iVar9 + 4);
    }
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
  bVar3 = false;
  if (-1 < *(int *)(param_1 + 0x44)) {
    iVar9 = FUN_08912fa4();
    if (iVar9 != 0) {
      local_810 = *(undefined4 *)(iVar9 + 0xc);
      local_808 = *(undefined4 *)(iVar9 + 0x10);
      fVar12 = *(float *)(iVar9 + 0x14) * 0.017453292;
    }
    bVar3 = true;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  }
  FUN_08899780(0x41a00000,&local_80,&local_810);
  local_820 = local_80;
  local_81c = local_7c;
  local_818 = local_78;
  local_814 = local_74;
  FUN_089a3868(&local_810,&local_820);
  local_820 = local_810;
  local_81c = local_80c;
  local_818 = local_808;
  local_814 = local_804;
  FUN_088359a8(*(undefined4 *)(param_1 + 0x6d0),&local_820,1);
  FUN_08835b3c(fVar12,*(undefined4 *)(param_1 + 0x6d0));
  bVar2 = true;
  if ((*(uint *)(iVar4 + 0x260) & 2) != 0) {
    FUN_08912854(&local_60,iVar4);
    FUN_089128a8(&local_50,iVar4);
    local_70 = local_60;
    local_6c = local_5c;
    local_68 = local_58;
    local_64 = local_54;
    FUN_088359a8(*(undefined4 *)(param_1 + 0x6d0),&local_70,1);
    local_70 = local_50;
    local_6c = local_4c;
    local_68 = local_48;
    local_64 = local_44;
    FUN_08835ba4(*(undefined4 *)(param_1 + 0x6d0),&local_70);
    uVar6 = FUN_088a9de8(*(undefined4 *)(DAT_089d6dd0 + 0xc),1,0,0,0);
    iVar9 = *(int *)(param_1 + 0x6d0);
    FUN_088a7284(*(undefined4 *)(iVar9 + 0x100),*(undefined4 *)(iVar9 + 0x104),
                 *(undefined4 *)(iVar9 + 0x108),uVar6);
    uVar7 = FUN_08837014(*(undefined4 *)(param_1 + 0x6d0));
    FUN_088a72e8(uVar7,uVar7,uVar7,uVar6);
    iVar9 = *(int *)(*(int *)(param_1 + 0x6d0) + 0x5ac);
    piVar10 = *(int **)(iVar9 + *(int *)(iVar9 + 0x108) * 4 + 300);
    iVar9 = *piVar10;
    (**(code **)(iVar9 + 0x3c))
              (*(undefined4 *)(iVar4 + 0x1cc),(int)piVar10 + (int)*(short *)(iVar9 + 0x38));
    *(undefined4 *)(iVar4 + 0x264) = *(undefined4 *)(iVar4 + 0x264);
    *(uint *)(iVar4 + 0x260) = *(uint *)(iVar4 + 0x260) & 0xfffffffd;
    if (*(char *)(param_1 + 0x7df) != '\0') {
      FUN_08835b3c(*(float *)(*(int *)(param_1 + 0x6d0) + 0x9c) + 3.1415927);
    }
    bVar2 = false;
  }
  FUN_08835cac(*(undefined4 *)(param_1 + 0x6d0));
  *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) = *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) | 2;
  *(undefined1 *)(*(int *)(param_1 + 0x6d0) + 0xbae) = 1;
  FUN_08830938(*(int *)(param_1 + 0x6d0) + 0x840);
  iVar9 = *(int *)(*(int *)(param_1 + 0x6d0) + 0x5ac);
  *(undefined4 *)(iVar9 + 0x100) = 1;
  *(undefined1 *)(iVar9 + 0x126) = 1;
  func_0x08b3b5ec(iVar9,5);
  if (bVar2) {
    piVar10 = *(int **)(iVar9 + *(int *)(iVar9 + 0x108) * 4 + 300);
    iVar4 = *piVar10;
    (**(code **)(iVar4 + 0x5c))((int)piVar10 + (int)*(short *)(iVar4 + 0x58),iVar9);
  }
  *(undefined1 *)(iVar9 + 0x124) = 1;
  *(undefined1 *)(iVar9 + 0xf4) = 1;
  if (bVar3) {
    *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) = *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) | 2;
    FUN_08834d30(0,0,*(undefined4 *)(param_1 + 0x6d0));
    *(undefined1 *)(param_1 + 0x7e4) = 1;
  }
  return;
}

