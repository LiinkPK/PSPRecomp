/* Entry 0x08924CE4 | file offset 0x00121CBC | FUN_08924ce4 | bytes 636 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08924ce4(ushort *param_1,int param_2,char param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  
  if ((param_3 == '\0') || ((short)param_1[2] != param_2)) {
    param_1[2] = (ushort)param_2;
    uVar1 = param_1[2];
    iVar4 = *(int *)(param_1 + 0x10);
    if ((uVar1 < 5) && (uVar1 != 0)) {
      if (uVar1 == 1) {
        *(undefined4 *)(iVar4 + 0xd0) = 2;
        iVar4 = *(int *)(param_1 + 0x10);
      }
      else if ((uVar1 != 2) && (uVar1 != 3)) {
        if (uVar1 != 4) {
          return;
        }
        *(undefined4 *)(iVar4 + 0xd0) = 0;
        iVar4 = *(int *)(param_1 + 0x10);
      }
    }
    if ((*(int *)(iVar4 + 0xb4) != 0) && (*(short *)(iVar4 + 0x16) != -1)) {
      if (*(int *)(iVar4 + 0xc0) != 0) {
        FUN_088a6c70(*(int *)(iVar4 + 0xc0));
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc0) = 0;
        iVar4 = *(int *)(param_1 + 0x10);
      }
      if (*(int *)(iVar4 + 0xc4) != 0) {
        FUN_088a6c70(*(int *)(iVar4 + 0xc4));
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc4) = 0;
        iVar4 = *(int *)(param_1 + 0x10);
      }
      if (*(int *)(iVar4 + 0xb8) != 0) {
        func_0x08b43e78(*(int *)(iVar4 + 0xb8));
        iVar4 = *(int *)(param_1 + 0x10);
      }
      if ((*(int *)(iVar4 + 200) == 0) && ((*param_1 & 1) != 0)) {
        puVar2 = (undefined4 *)FUN_08925384(*(undefined4 *)(iVar4 + 0xb4));
        uVar5 = *puVar2;
        uVar6 = puVar2[2];
        fVar7 = (float)puVar2[1] + _DAT_08b4bfe8;
        uVar3 = func_0x08b421fc(_DAT_08b42288,9);
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 200) = uVar3;
        FUN_088a7284(uVar5,fVar7,uVar6,*(undefined4 *)(*(int *)(param_1 + 0x10) + 200));
      }
      uVar1 = param_1[2];
      if (uVar1 < 5) {
        if (uVar1 == 1) {
          FUN_08923aac(param_1);
        }
        else if (uVar1 == 2) {
          FUN_08923bdc(param_1);
        }
        else if (uVar1 == 3) {
          FUN_08923c34(param_1);
        }
        else if (uVar1 == 4) {
          FUN_08923ca0(param_1);
        }
        else {
          FUN_08923a34(param_1);
        }
      }
      iVar4 = *(int *)(param_1 + 0x10);
      if (*(int *)(iVar4 + 0xbc) != 0) {
        func_0x08b348f4(*(undefined4 *)(iVar4 + 0x48),*(int *)(iVar4 + 0xbc));
        iVar4 = *(int *)(param_1 + 0x10);
      }
      if (*(int *)(iVar4 + 0xc0) != 0) {
        FUN_088a72e8(*(undefined4 *)(iVar4 + 0x48),*(undefined4 *)(iVar4 + 0x48),
                     *(int *)(iVar4 + 0xc0));
      }
      FUN_0892382c(param_1);
    }
  }
  return;
}

