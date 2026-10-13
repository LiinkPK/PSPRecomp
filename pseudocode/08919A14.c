/* Entry 0x08919A14 | file offset 0x001169EC | FUN_08919a14 | bytes 1760 */

void FUN_08919a14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  
  if (*(int *)(param_1 + 0x6d0) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x7e7) = 0;
  if (*(int *)(*(int *)(param_1 + 0x744) + 8) != 0) {
    return;
  }
  iVar1 = func_0x08b45488(*(undefined4 *)(param_1 + 0x8c));
  if ((iVar1 == 0) || ((*(uint *)(iVar1 + 0x388) & 1) != 0)) {
    func_0x08b2f22c();
    iVar1 = *(int *)(*(int *)(param_1 + 0x6d0) + 0x544);
    (**(code **)(iVar1 + 300))(*(int *)(param_1 + 0x6d0) + (int)*(short *)(iVar1 + 0x128),0);
    FUN_08836da4(*(undefined4 *)(param_1 + 0x6d0),0);
    uVar2 = *(undefined4 *)(param_1 + 0x6d0);
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x6d0) + 0x544);
    (**(code **)(iVar3 + 300))(*(int *)(param_1 + 0x6d0) + (int)*(short *)(iVar3 + 0x128),iVar1);
    FUN_08836da4(*(undefined4 *)(param_1 + 0x6d0),iVar1);
    iVar3 = func_0x08b2f9d0(*(undefined4 *)(param_1 + 0x6d0));
    uVar2 = *(undefined4 *)(param_1 + 0x6d0);
    if (iVar3 == 0) {
      func_0x08b2f17c(uVar2);
      uVar2 = *(undefined4 *)(param_1 + 0x6d0);
    }
    if ((*(byte *)(*(int *)(iVar1 + 0x2f8) + 8) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x7e7) = 1;
    }
  }
  iVar1 = func_0x08b333c8(uVar2);
  iVar3 = *(int *)(param_1 + 0x6d0);
  if (iVar1 != 0) {
    iVar1 = FUN_088377c0();
    iVar3 = *(int *)(param_1 + 0x6d0);
    if (iVar1 == 0) {
      FUN_0891166c(0x3fc00000,DAT_089d83a8,iVar3,2);
      iVar3 = *(int *)(param_1 + 0x6d0);
    }
  }
  if (**(int **)(iVar3 + 0x3a4) == 0xd) {
    *(undefined4 *)(iVar3 + 0x38c) = *(undefined4 *)(iVar3 + 0x38c);
    *(uint *)(iVar3 + 0x388) = *(uint *)(iVar3 + 0x388) & 0xffffdfff;
    *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) = *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) | 2;
    uVar2 = *(undefined4 *)(param_1 + 0x6d0);
  }
  else {
    *(undefined4 *)(iVar3 + 0x38c) = *(undefined4 *)(iVar3 + 0x38c);
    *(uint *)(iVar3 + 0x388) = *(uint *)(iVar3 + 0x388) | 0x2000;
    *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) =
         *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) & 0xfffffffd;
    uVar2 = *(undefined4 *)(param_1 + 0x6d0);
  }
  iVar1 = FUN_088374b0(uVar2);
  if (iVar1 == 0) {
    func_0x08b34ed0(*(undefined4 *)(param_1 + 0x6d0),0);
    iVar1 = *(int *)(param_1 + 0x6d0);
    *(uint *)(iVar1 + 0x38c) = *(uint *)(iVar1 + 0x38c) & 0xfffffffb;
    *(undefined4 *)(iVar1 + 0x388) = *(undefined4 *)(iVar1 + 0x388);
  }
  else {
    func_0x08b34e98(*(undefined4 *)(param_1 + 0x6d0),0);
    iVar1 = *(int *)(param_1 + 0x6d0);
    *(uint *)(iVar1 + 0x38c) = *(uint *)(iVar1 + 0x38c) | 4;
    *(undefined4 *)(iVar1 + 0x388) = *(undefined4 *)(iVar1 + 0x388);
  }
  iVar1 = FUN_088729a0(0);
  iVar3 = (int)*(short *)(*(int *)(iVar1 + 0x34) + 0x10);
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x34) + 0x14))(iVar1 + iVar3,iVar3,0x1000,0);
  if (iVar1 == 0) {
    iVar1 = FUN_088729a0(0);
    pcVar5 = *(code **)(*(int *)(iVar1 + 0x34) + 0x14);
    iVar1 = (*pcVar5)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x10),pcVar5,0x80000,0);
    if (iVar1 == 0) {
      iVar1 = FUN_088729a0(0);
      pcVar5 = *(code **)(*(int *)(iVar1 + 0x34) + 0x14);
      iVar1 = (*pcVar5)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x10),pcVar5,0x8000,0);
      if (iVar1 == 0) goto LAB_08919ee4;
    }
  }
  iVar1 = FUN_08916c34(param_1);
  if (iVar1 == 0) {
    iVar1 = func_0x08b333c8(*(undefined4 *)(param_1 + 0x6d0));
    if (iVar1 != 0) {
      iVar1 = FUN_088729a0(0);
      iVar3 = (int)*(short *)(*(int *)(iVar1 + 0x34) + 0x10);
      iVar1 = (**(code **)(*(int *)(iVar1 + 0x34) + 0x14))(iVar1 + iVar3,iVar3,0x1000,0);
      if (iVar1 != 0) goto LAB_08919ee4;
    }
    FUN_088d4bf4(4);
  }
  else {
    iVar1 = FUN_088729a0(0);
    iVar3 = (int)*(short *)(*(int *)(iVar1 + 0x34) + 0x10);
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x34) + 0x14))(iVar1 + iVar3,iVar3,0x1000,0);
    if (iVar1 == 0) {
      iVar1 = FUN_088729a0(0);
      pcVar5 = *(code **)(*(int *)(iVar1 + 0x34) + 0x14);
      iVar1 = (*pcVar5)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x10),pcVar5,0x80000,0);
      if (iVar1 == 0) {
        iVar1 = FUN_088729a0(0);
        pcVar5 = *(code **)(*(int *)(iVar1 + 0x34) + 0x14);
        iVar1 = (*pcVar5)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x10),pcVar5,0x8000,0);
        if (iVar1 != 0) {
          iVar1 = func_0x08b49e80(*(undefined4 *)(param_1 + 0x570));
          if (iVar1 == 0) {
            FUN_088d4bf4(4);
          }
          else {
            func_0x08b49ca4(*(undefined4 *)(param_1 + 0x570));
            FUN_088d4bf4(1);
            FUN_08914b64(param_1,4);
            *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) =
                 *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) | 2;
          }
        }
      }
      else {
        FUN_088d4bf4(1);
        FUN_08916380(param_1,0,0xffffffff);
      }
    }
    else {
      FUN_088d4bf4(1);
      FUN_0891600c(param_1);
    }
  }
LAB_08919ee4:
  iVar1 = func_0x08b32ac4(*(undefined4 *)(param_1 + 0x6d0));
  if ((((iVar1 == 0) && (iVar1 = func_0x08b32b6c(*(undefined4 *)(param_1 + 0x6d0)), iVar1 == 0)) &&
      (iVar1 = func_0x08b32cbc(*(undefined4 *)(param_1 + 0x6d0)), iVar1 == 0)) &&
     (((iVar1 = func_0x08b32c14(*(undefined4 *)(param_1 + 0x6d0)), iVar1 == 0 &&
       (iVar1 = FUN_08916c34(param_1), iVar1 != 0)) &&
      (*(short *)(*(int *)(param_1 + 0x6d0) + 0x180) == 1)))) {
    fVar7 = *(float *)(param_1 + 0x718) + DAT_089d5eac;
  }
  else {
    fVar7 = 0.0;
  }
  *(float *)(param_1 + 0x718) = fVar7;
  if (30.0 <= fVar7) {
    func_0x08b49ca4(*(undefined4 *)(param_1 + 0x570));
  }
  fVar7 = 0.0;
  iVar1 = FUN_088729a0(0);
  pcVar5 = *(code **)(*(int *)(iVar1 + 0x34) + 0xc);
  iVar1 = (*pcVar5)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 8),pcVar5,0x10000,0);
  if (iVar1 != 0) {
    fVar7 = (float)FUN_08838300(*(undefined4 *)(param_1 + 0x6d0));
    fVar7 = fVar7 * 0.05235988;
  }
  iVar1 = FUN_088729a0(0);
  pcVar5 = *(code **)(*(int *)(iVar1 + 0x34) + 0xc);
  iVar1 = (*pcVar5)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 8),pcVar5,0x20000,0);
  if (iVar1 != 0) {
    fVar7 = (float)FUN_08838300(*(undefined4 *)(param_1 + 0x6d0));
    fVar7 = fVar7 * -0.05235988;
  }
  if (fVar7 != 0.0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x6d0) + 0x5ac);
    piVar4 = *(int **)(iVar3 + 300 + *(int *)(iVar3 + 0x108) * 4);
    iVar1 = *piVar4;
    fVar6 = (float)(**(code **)(iVar1 + 0x44))((int)piVar4 + (int)*(short *)(iVar1 + 0x40));
    piVar4 = *(int **)(iVar3 + *(int *)(iVar3 + 0x108) * 4 + 300);
    iVar1 = *piVar4;
    (**(code **)(iVar1 + 0x3c))(fVar6 + fVar7,(int)piVar4 + (int)*(short *)(iVar1 + 0x38),iVar3);
  }
  FUN_08915438(param_1);
  return;
}

