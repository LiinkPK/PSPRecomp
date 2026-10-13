/* Entry 0x088E897C | file offset 0x000E5954 | FUN_088e897c | bytes 896 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_088e897c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_2b0 [4];
  undefined1 auStack_2ac [128];
  undefined1 auStack_22c [256];
  undefined1 auStack_12c [256];
  int local_2c;
  
  uVar3 = DAT_089d6ac8;
  FUN_088698fc(auStack_2b0);
  FUN_08869954(auStack_2b0,*(undefined4 *)(param_1 + 0xc));
  uVar1 = FUN_0889381c(uVar3);
  FUN_0893476c(auStack_2ac,"map_se_%s_rt.mpk",uVar1);
  iVar2 = FUN_08869ab4(auStack_2b0,auStack_2ac);
  if (iVar2 != 0) {
    local_2c = iVar2;
    uVar1 = FUN_088a0cb0(*(undefined4 *)(param_1 + 0x14),auStack_2ac);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = FUN_088a0cf8(uVar1);
    FUN_08935524(uVar1,*(undefined4 *)(local_2c + 4),*(undefined4 *)(local_2c + 8));
    iVar2 = FUN_08869954(param_1,uVar1);
    uVar1 = DAT_089d6af0;
    if (iVar2 != 0) {
      uVar3 = FUN_0889381c(uVar3);
      FUN_08896854(uVar1,uVar3,param_1);
    }
  }
  iVar2 = FUN_08899300();
  if (*(int *)(iVar2 + 4) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(*(int *)(iVar2 + 4) + 0x44);
  }
  uVar7 = 1;
  do {
    if ((uVar8 & 1 << (uVar7 & 0x1f)) != 0) {
      FUN_0893476c(auStack_2ac,"scar_%03d.gim",uVar7);
      iVar2 = FUN_08869ab4(auStack_2b0,auStack_2ac);
      FUN_0893476c(auStack_2ac,"piece_%03d.gim",uVar7);
      iVar4 = FUN_08869ab4(auStack_2b0,auStack_2ac);
      if ((iVar2 != 0) && (iVar4 != 0)) {
        FUN_0884c4dc(DAT_089d4d80,uVar7,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                     *(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
      }
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x20);
  func_0x08b533a0(_DAT_08b54330,auStack_2b0,*(undefined4 *)(param_1 + 8));
  uVar3 = DAT_089d6ac8;
  iVar2 = FUN_08893cf8(DAT_089d6ac8);
  if ((iVar2 == 1) && (iVar2 = FUN_08893834(uVar3), iVar2 != 0)) {
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
  puVar6 = (undefined4 *)0x0;
  while (puVar6 = (undefined4 *)FUN_0881e75c(puVar6), puVar6 != (undefined4 *)0x0) {
    iVar2 = FUN_088470b8(*puVar6);
    if (iVar2 != 0) {
      FUN_0893476c(auStack_22c,"%s.gmo",iVar2 + 0x24);
      FUN_0893476c(auStack_12c,"%s.objx",iVar2 + 0x34);
      iVar2 = FUN_08869ab4(auStack_2b0,auStack_22c);
      iVar4 = FUN_08869ab4(auStack_2b0,auStack_12c);
      if (iVar2 != 0) {
        if (iVar4 == 0) {
          uVar3 = 0;
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(iVar4 + 8);
          uVar3 = *(undefined4 *)(iVar4 + 4);
        }
        FUN_088442a0(DAT_089d4960,*puVar6,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                     uVar3,uVar1,0,0);
      }
    }
  }
  FUN_08869908(auStack_2b0,2);
  return;
}

