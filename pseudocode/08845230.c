/* Entry 0x08845230 | file offset 0x00042208 | FUN_08845230 | bytes 1968 */

void FUN_08845230(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_150;
  int local_14c;
  undefined1 local_148 [8];
  undefined1 local_140;
  undefined1 auStack_13c [256];
  undefined4 local_3c;
  uint local_38;
  
  local_38 = param_5;
  iVar1 = FUN_088470b8(param_2);
  *param_1 = iVar1;
  uVar2 = FUN_08844fa4(iVar1 + 0x24,&DAT_089c88a8);
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 9) != '\0') {
    iVar3 = FUN_08862d30(uVar2);
    iVar1 = *param_1;
    if (iVar3 == 0) {
      iVar1 = FUN_08844fe4(iVar1);
      if (iVar1 == 0) {
        return;
      }
      *param_1 = iVar1;
      FUN_08844fa4(iVar1 + 0x24,&DAT_089c88a8);
      iVar1 = *param_1;
    }
  }
  iVar1 = FUN_088450a8(param_1,&DAT_089c88a8,param_3,param_4,*(char *)(iVar1 + 9) != '\0');
  if (iVar1 == 0) {
    return;
  }
  FUN_0884333c(param_1,param_3,iVar1);
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 6) != 0) {
    bVar7 = false;
    if ((*(char *)(iVar1 + 0x24) == 'Z') && (bVar7 = false, *(char *)(iVar1 + 0x25) == '_')) {
      bVar7 = true;
    }
    if (bVar7) {
      uVar2 = FUN_08844fa4(iVar1 + 0x24,&DAT_089c8898);
      iVar1 = *param_1;
    }
    else {
      iVar1 = FUN_088470dc((int)*(char *)(iVar1 + 6),(int)*(char *)(iVar1 + 7),0);
      uVar2 = FUN_08844fa4(iVar1 + 0x24,&DAT_089c8898);
      iVar1 = *param_1;
    }
    iVar3 = FUN_088fe7c8(uVar2,*(char *)(iVar1 + 9) != '\0');
    iVar1 = *param_1;
    if (iVar3 != 0) {
      bVar7 = false;
      if ((*(char *)(iVar1 + 0x24) == 'Z') && (bVar7 = false, *(char *)(iVar1 + 0x25) == '_')) {
        bVar7 = true;
      }
      if (bVar7) {
        iVar1 = FUN_088450a8(param_1,&DAT_089c8898,param_3,param_4,*(char *)(iVar1 + 9) != '\0');
      }
      else {
        local_150 = FUN_088470dc((int)*(char *)(iVar1 + 6),(int)*(char *)(iVar1 + 7),0);
        iVar1 = FUN_088450a8(&local_150,&DAT_089c8898,param_3,param_4,
                             *(char *)(*param_1 + 9) != '\0');
      }
      if (iVar1 == 0) {
        return;
      }
      FUN_08843460(param_1,param_3,iVar1);
      iVar1 = *param_1;
    }
  }
  bVar7 = false;
  if ((*(char *)(iVar1 + 0x24) == 'P') && (bVar7 = false, *(char *)(iVar1 + 0x25) == '_')) {
    bVar7 = true;
  }
  if (((bVar7) && (*(char *)(iVar1 + 6) != '\x17')) && ((*(byte *)(iVar1 + 8) & 8) == 0)) {
    iVar3 = FUN_089359e8(iVar1 + 0x24);
    iVar3 = iVar1 + 0x24 + iVar3;
    bVar7 = false;
    iVar1 = *param_1;
    if ((*(char *)(iVar3 + -2) == '_') && (bVar7 = false, *(char *)(iVar3 + -1) == 'W')) {
      bVar7 = true;
    }
    if (!bVar7) {
      local_14c = FUN_088470dc((int)*(char *)(iVar1 + 6),(int)*(char *)(iVar1 + 7),0);
      uVar2 = FUN_08844fa4(local_14c + 0x24,&DAT_089c88a0);
      iVar3 = FUN_088fe7c8(uVar2,*(char *)(*param_1 + 9) != '\0');
      iVar1 = *param_1;
      if (iVar3 != 0) {
        iVar1 = FUN_088450a8(&local_14c,&DAT_089c88a0,param_3,param_4,*(char *)(iVar1 + 9) != '\0');
        if (iVar1 == 0) {
          return;
        }
        FUN_0884351c(param_1,param_3,iVar1);
        iVar1 = *param_1;
      }
    }
  }
  iVar3 = 0;
  if (*(char *)(iVar1 + 0x34) != '\0') {
    uVar2 = FUN_08844fa4((char *)(iVar1 + 0x34),&DAT_089c8850);
    iVar1 = *param_1;
    uVar5 = 0;
    if (*(char *)(iVar1 + 9) != '\0') {
      bVar7 = false;
      if ((*(char *)(iVar1 + 0x24) == 'P') && (bVar7 = false, *(char *)(iVar1 + 0x25) == '_')) {
        bVar7 = true;
      }
      if (!bVar7) {
        uVar5 = 1;
      }
    }
    iVar3 = FUN_088fe7c8(uVar2,uVar5);
  }
  if (iVar3 == 0) {
    return;
  }
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 9) == '\0') {
    uVar2 = 0;
  }
  else {
    bVar7 = false;
    if ((*(char *)(iVar1 + 0x24) == 'P') && (bVar7 = false, *(char *)(iVar1 + 0x25) == '_')) {
      bVar7 = true;
    }
    uVar2 = 0;
    if (!bVar7) {
      uVar2 = 1;
    }
  }
  local_3c = param_4;
  iVar1 = FUN_0884516c(param_1,&DAT_089c8850,param_3,param_4,uVar2);
  if (iVar1 == 0) {
    return;
  }
  FUN_088459e0(param_1,param_3,iVar1);
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 0x24) == 'P') {
    bVar7 = false;
    if (*(char *)(iVar1 + 0x25) == '_') {
      bVar7 = true;
    }
  }
  else {
    bVar7 = false;
  }
  if (!bVar7) {
    return;
  }
  iVar3 = FUN_089359e8(iVar1 + 0x24);
  iVar3 = iVar1 + 0x24 + iVar3;
  bVar7 = false;
  if ((*(char *)(iVar3 + -2) == '_') && (bVar7 = false, *(char *)(iVar3 + -1) == 'W')) {
    bVar7 = true;
  }
  if (bVar7) {
    return;
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar1 = FUN_088b70c8((int)*(char *)(*param_1 + 6));
  uVar2 = 0;
  iVar6 = 0;
  iVar3 = *param_1;
  do {
    local_148[iVar6] = *(undefined1 *)(iVar1 + 0x74 + iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  local_140 = 0;
  if ((*(byte *)(iVar3 + 8) & 8) == 0) {
    if ((local_38 & 1) != 0) {
      bVar7 = false;
      if ((*(char *)(iVar3 + 0x24) == 'P') && (bVar7 = false, *(char *)(iVar3 + 0x25) == '_')) {
        bVar7 = true;
      }
      if ((bVar7) && ((*(byte *)(iVar3 + 8) & 0x10) != 0)) {
        uVar2 = FUN_08867964();
        FUN_0893476c(auStack_13c,"voice/%s/battle/voice_%s_01.scd",uVar2,local_148);
        uVar2 = 1;
        goto LAB_088458cc;
      }
    }
    uVar5 = FUN_08867964();
    iVar1 = FUN_08844030(param_1);
    FUN_0893476c(auStack_13c,"voice/%s/battle/voice_%s%s.scd",uVar5,local_148,iVar1 + 0x34);
  }
  else {
    uVar5 = FUN_08867964();
    iVar1 = FUN_08844030(param_1);
    FUN_0893476c(auStack_13c,"voice/%s/battle/voice_%s_a%s.scd",uVar5,local_148,iVar1 + 0x34);
  }
LAB_088458cc:
  uVar5 = local_3c;
  DAT_089d5f1c = 1;
  uVar4 = FUN_088fe708(auStack_13c,param_3,local_3c,0);
  DAT_089d5f1c = 0;
  FUN_08842420(param_1 + 0x18,*param_1 + 0x24,param_3,uVar4,uVar2);
  if ((*(byte *)(*param_1 + 8) & 8) == 0) {
    if (DAT_089d5f20 == '\0') {
      uVar2 = FUN_08867964();
      FUN_0893476c(auStack_13c,"voice/%s/voice_load_%s.bin",uVar2,local_148);
    }
    else {
      uVar2 = FUN_08867964();
      FUN_0893476c(auStack_13c,"voice/%s/prologus_voice_load_%s.bin",uVar2,local_148);
    }
    DAT_089d5f1c = 1;
    uVar2 = FUN_088fe708(auStack_13c,param_3,uVar5,0);
    DAT_089d5f1c = 0;
    FUN_088a3914(param_1 + 0x35,*param_1 + 0x24,param_3,uVar2);
  }
  return;
}

