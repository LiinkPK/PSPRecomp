/* Entry 0x08910B54 | file offset 0x0010DB2C | FUN_08910b54 | bytes 1212 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08910b54(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 auStack_2b0 [4];
  undefined1 auStack_2ac [128];
  undefined1 auStack_22c [256];
  undefined1 auStack_12c [256];
  undefined4 local_2c;
  
  uVar3 = DAT_089d6ac8;
  FUN_088698fc(auStack_2b0);
  FUN_08869954(auStack_2b0,param_2);
  uVar1 = FUN_0889381c(uVar3);
  FUN_0893476c(auStack_2ac,"map_se_%s-msnd.mpk",uVar1);
  iVar2 = FUN_08869ab4(auStack_2b0,auStack_2ac);
  if (iVar2 != 0) {
    uVar1 = FUN_0889381c(uVar3);
    FUN_0888e3ac(uVar1,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
    uVar3 = FUN_0889381c(uVar3);
    FUN_0888e4d4(uVar3);
  }
  iVar2 = FUN_08899300();
  if (*(int *)(iVar2 + 4) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(*(int *)(iVar2 + 4) + 0x44);
  }
  uVar6 = 1;
  do {
    if ((uVar8 & 1 << (uVar6 & 0x1f)) != 0) {
      FUN_0893476c(auStack_2ac,"scar_%03d.gim",uVar6);
      iVar2 = FUN_08869ab4(auStack_2b0,auStack_2ac);
      FUN_0893476c(auStack_2ac,"piece_%03d.gim",uVar6);
      iVar4 = FUN_08869ab4(auStack_2b0,auStack_2ac);
      if ((iVar2 != 0) && (iVar4 != 0)) {
        FUN_0884c4dc(DAT_089d4d80,uVar6,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                     *(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
      }
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x20);
  func_0x08b533a0(_DAT_08b54330,auStack_2b0,*(undefined4 *)(param_1 + 8));
  local_2c = DAT_089d6ac8;
  iVar2 = FUN_08893cf8();
  if ((iVar2 == 1) && (iVar2 = FUN_08893834(local_2c), iVar2 != 0)) {
    iVar4 = FUN_089359e8(iVar2);
    iVar5 = FUN_089359e8(".fobx");
    if ((uint)(iVar4 + iVar5) < 0x80) {
      FUN_089359a4(auStack_2ac,iVar2);
      FUN_08935914(auStack_2ac,".fobx");
      iVar2 = FUN_08869ab4(auStack_2b0,auStack_2ac);
      if (iVar2 != 0) {
        FUN_0881e248(DAT_089d4910,*(undefined4 *)(param_1 + 8),*(undefined4 *)(iVar2 + 4),
                     *(undefined4 *)(iVar2 + 8));
      }
    }
  }
  puVar7 = (undefined4 *)0x0;
  while (puVar7 = (undefined4 *)FUN_0881e75c(puVar7), uVar3 = DAT_089d6ac8,
        puVar7 != (undefined4 *)0x0) {
    iVar2 = FUN_088470b8(*puVar7);
    if (iVar2 != 0) {
      FUN_0893476c(auStack_22c,"%s.gmo",iVar2 + 0x24);
      FUN_0893476c(auStack_12c,"%s.objx",iVar2 + 0x34);
      iVar2 = FUN_08869ab4(auStack_2b0,auStack_22c);
      iVar4 = FUN_08869ab4(auStack_2b0,auStack_12c);
      if (iVar2 != 0) {
        uVar3 = 0;
        uVar1 = 0;
        if (iVar4 != 0) {
          uVar3 = *(undefined4 *)(iVar4 + 4);
          uVar1 = *(undefined4 *)(iVar4 + 8);
        }
        FUN_088442a0(DAT_089d4960,*puVar7,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                     uVar3,uVar1,0,0);
      }
    }
  }
  iVar2 = FUN_08893cf8(DAT_089d6ac8);
  if ((iVar2 == 1) && (iVar2 = FUN_08893840(uVar3), iVar2 != 0)) {
    iVar4 = FUN_089359e8(iVar2);
    iVar5 = FUN_089359e8(&DAT_089ce1a0);
    if ((uint)(iVar4 + iVar5) < 0x80) {
      FUN_089359a4(auStack_2ac,iVar2);
      FUN_08935914(auStack_2ac,&DAT_089ce1a0);
      iVar2 = FUN_08869ab4(auStack_2b0,auStack_2ac);
      uVar3 = _DAT_08aaad80;
      if (iVar2 != 0) {
        uVar1 = FUN_089110b4();
        func_0x08aa7888(uVar3,uVar1,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
      }
    }
  }
  uVar3 = DAT_089d6ac8;
  iVar2 = FUN_08893cf8(DAT_089d6ac8);
  if ((iVar2 == 1) && (iVar2 = FUN_0889381c(uVar3), iVar2 != 0)) {
    FUN_0893476c(auStack_2ac,"%s-effe.mpk",iVar2);
    iVar4 = FUN_08869ab4(auStack_2b0,auStack_2ac);
    if (iVar4 != 0) {
      FUN_08895a54(DAT_089d6ae0,iVar2,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
      FUN_08895b1c(DAT_089d6ae0,iVar2);
    }
  }
  iVar2 = FUN_0889381c(local_2c);
  if (iVar2 != 0) {
    FUN_0893476c(auStack_2ac,"%s.gri",iVar2);
    iVar2 = FUN_08869ab4(auStack_2b0,auStack_2ac);
    uVar3 = _DAT_08acd0e8;
    if (iVar2 != 0) {
      uVar1 = FUN_089110b4();
      func_0x08acceb0(uVar3,uVar1,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
    }
  }
  FUN_08869908(auStack_2b0,2);
  return;
}

