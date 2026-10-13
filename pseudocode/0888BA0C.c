/* Entry 0x0888BA0C | file offset 0x000889E4 | FUN_0888ba0c | bytes 1596 */

void FUN_0888ba0c(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [40];
  int local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  int local_3c;
  undefined4 *local_38;
  
  uVar10 = *(undefined4 *)(param_1 + 0x7d8);
  uVar8 = *(undefined4 *)(param_1 + 0x7dc);
  local_38 = &DAT_09afb8a0;
  if (*(int *)(param_1 + 0x4c) == 5) {
    iVar3 = FUN_08831320(0x12d0);
    iVar5 = 0;
    if (iVar3 != 0) {
      uVar4 = FUN_088729a0(0);
      uVar10 = FUN_088470b8(uVar10);
      func_0x08b39e5c(iVar3,uVar4,uVar10,0,0);
      iVar5 = iVar3;
    }
    *(int *)(param_1 + 0x38) = iVar5;
    iVar5 = FUN_08831320(0x12d0);
    if (iVar5 == 0) {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar5 = 0;
    }
    else {
      uVar10 = FUN_088729a0(1);
      uVar8 = FUN_088470b8(uVar8);
      func_0x08b39e5c(iVar5,uVar10,uVar8,1,0);
      iVar3 = *(int *)(param_1 + 0x54);
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    uVar8 = *(undefined4 *)(param_1 + iVar3 * 4 + 0x38);
  }
  else {
    if (*(int *)(param_1 + 0x4c) == 6) {
      iVar3 = FUN_08831320(0x12d0);
      iVar5 = 0;
      if (iVar3 != 0) {
        uVar4 = FUN_088729a0(1);
        uVar10 = FUN_088470b8(uVar10);
        func_0x08b39e5c(iVar3,uVar4,uVar10,0,0);
        iVar5 = iVar3;
      }
      *(int *)(param_1 + 0x38) = iVar5;
    }
    else {
      iVar5 = FUN_08831320(0x12d0);
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else {
        uVar4 = FUN_088729a0(0);
        uVar10 = FUN_088470b8(uVar10);
        func_0x08b39e5c(iVar5,uVar4,uVar10,0,0);
        *(int *)(param_1 + 0x38) = iVar5;
      }
    }
    iVar5 = FUN_08831320(0x12d0);
    if (iVar5 == 0) {
      iVar3 = *(int *)(param_1 + 0x54);
      iVar5 = 0;
    }
    else {
      uVar10 = FUN_088729a0(1);
      uVar8 = FUN_088470b8(uVar8);
      func_0x08b39e5c(iVar5,uVar10,uVar8,1,0);
      iVar3 = *(int *)(param_1 + 0x54);
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    uVar8 = *(undefined4 *)(param_1 + iVar3 * 4 + 0x38);
  }
  local_3c = param_1;
  func_0x08b2ef44(uVar8);
  iVar5 = local_3c;
  FUN_08836da4(*(undefined4 *)(local_3c + 0x38),*(undefined4 *)(local_3c + 0x3c));
  FUN_08836da4(*(undefined4 *)(iVar5 + 0x3c),*(undefined4 *)(iVar5 + 0x38));
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0x3f800000;
  FUN_088359a8(*(undefined4 *)(iVar5 + 0x38),&local_90,1);
  local_8c = 0;
  local_90 = 0xbf800000;
  local_88 = 0;
  local_84 = 0x3f800000;
  FUN_088359a8(*(undefined4 *)(iVar5 + 0x3c),&local_90,1);
  puVar9 = local_38;
  iVar3 = 0;
  local_40 = local_38 + 0x9f8;
  puVar11 = (ushort *)(local_38 + 0x830);
  iVar13 = 0;
  iVar12 = 0;
  puVar6 = local_38;
  do {
    func_0x08b01090(auStack_80,iVar3);
    iVar7 = *(int *)(*(int *)(iVar5 + 0x38) + 0x544);
    (**(code **)(iVar7 + 0x104))
              (*(int *)(iVar5 + 0x38) + (int)*(short *)(iVar7 + 0x100),puVar6,auStack_80);
    iVar7 = *(int *)(iVar5 + 0x38);
    if ((*(uint *)((int)local_40 + iVar13) & 1) != 0) {
      *(byte *)(iVar7 + 0x5b7) = *(byte *)(iVar7 + 0x5b7) | 0x10;
      iVar7 = *(int *)(iVar5 + 0x38);
    }
    if ((*(ushort *)((int)puVar9 + iVar12 + 0x27e8) & 1) == 0) {
      uVar2 = *puVar11;
    }
    else {
      *(byte *)(iVar7 + 0x5b8) = *(byte *)(iVar7 + 0x5b8) | 0x20;
      iVar7 = *(int *)(iVar5 + 0x38);
      uVar2 = *puVar11;
    }
    local_54 = (uVar2 & 4) != 0;
    local_58 = (int)(char)puVar11[1];
    local_53 = (uVar2 & 0x10) != 0;
    func_0x08b3b1b8(*(undefined4 *)(iVar7 + 0x5ac),&local_58);
    iVar3 = iVar3 + 1;
    puVar6 = puVar6 + 0x418;
    iVar13 = iVar13 + 4;
    iVar5 = iVar5 + 4;
    iVar12 = iVar12 + 2;
    puVar11 = puVar11 + 2;
  } while (iVar3 < 2);
  uVar8 = FUN_08899300();
  puVar6 = (undefined4 *)FUN_08897dec(uVar8,0);
  puVar9 = local_38;
  iVar5 = local_3c;
  iVar12 = 0;
  iVar3 = local_3c;
  do {
    if ((*(int *)(iVar3 + 0x38) != 0) && (puVar6 != (undefined4 *)0x0)) {
      local_50 = *puVar6;
      local_4c = puVar6[1];
      local_48 = puVar6[2];
      local_44 = 0x3f800000;
      FUN_088359a8(*(int *)(iVar3 + 0x38),&local_50,1);
    }
    iVar13 = local_3c;
    iVar12 = iVar12 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar12 < 2);
  if ((*(int *)(iVar5 + 0x4c) != 0) && (*(int *)(iVar5 + 0x4c) != 0xd)) {
    iVar3 = 0;
    puVar6 = puVar9;
    iVar5 = local_3c;
    do {
      if ((iVar3 != 0) || (*(int *)(iVar13 + 0x4c) == 6)) {
        iVar12 = *(int *)(iVar5 + 0x38);
        uVar8 = *(undefined4 *)(iVar12 + 0x5c4);
        if (*(int *)(iVar13 + 0x4c) == 6) {
          func_0x08b2f2e4(iVar12,0);
          func_0x08a640cc(uVar8,(int)*(short *)((int)puVar6 + 0xf36));
          func_0x08a64100(uVar8,(int)*(short *)(puVar6 + 0x3ce));
        }
        else if (*(short *)(puVar6 + 0x3cd) != 0) {
          func_0x08b2f2e4(iVar12,0);
          sVar1 = *(short *)(puVar6 + 0x3cd);
          if (sVar1 < 2) {
            if (0 < sVar1) {
              func_0x08a640cc(uVar8,(int)*(short *)((int)puVar6 + 0xf36));
              func_0x08a64100(uVar8,(int)*(short *)(puVar6 + 0x3ce));
            }
          }
          else if (sVar1 < 3) {
            uVar8 = FUN_088cbb58(*(undefined4 *)(*(int *)(iVar5 + 0x38) + 0x30c));
            uVar8 = FUN_088c0640(uVar8);
            func_0x08b2f274(*(undefined4 *)(iVar5 + 0x38),puVar6 + 0x3d0,uVar8);
          }
        }
      }
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 0x418;
      iVar5 = iVar5 + 4;
    } while (iVar3 < 2);
  }
  iVar5 = local_3c;
  iVar12 = 0;
  puVar11 = (ushort *)(puVar9 + 0x830);
  puVar6 = puVar9;
  iVar3 = local_3c;
  do {
    if ((*(short *)(puVar6 + 0x3cd) == 0) && ((*puVar11 & 0x40) == 0)) {
      uVar8 = *(undefined4 *)(*(int *)(iVar3 + 0x38) + 0x5c4);
      func_0x08a64078(uVar8,2);
      func_0x08a64100(uVar8,0xf);
    }
    iVar12 = iVar12 + 1;
    puVar6 = puVar6 + 0x418;
    puVar11 = puVar11 + 2;
    iVar3 = iVar3 + 4;
  } while (iVar12 < 2);
  if ((*(ushort *)(puVar9 + 0x9e1) & 0x20) != 0) {
    uVar8 = *(undefined4 *)(*(int *)(iVar5 + 0x38) + 0x5c4);
    func_0x08a64078(uVar8,2);
    func_0x08a64100(uVar8,0xf);
  }
  iVar3 = 0;
  iVar12 = iVar5 + 0x754;
  do {
    if ((*(char *)((int)puVar9 + 0xa76) < '\x01') || (iVar13 = FUN_08891684(iVar12), iVar13 < 0)) {
      func_0x08b33904(*(undefined4 *)(iVar5 + 0x38),0);
    }
    else {
      func_0x08b33904(*(undefined4 *)(iVar5 + 0x38),1);
    }
    iVar3 = iVar3 + 1;
    puVar9 = puVar9 + 0x418;
    iVar12 = iVar12 + 0x28;
    iVar5 = iVar5 + 4;
  } while (iVar3 < 2);
  return;
}

