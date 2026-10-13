/* Entry 0x089243F4 | file offset 0x001213CC | FUN_089243f4 | bytes 720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_089243f4(int param_1)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar1 = *(ushort *)(param_1 + 4);
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x20);
  if (uVar1 < 5) {
    if (uVar1 == 1) {
      if (*(int *)(iVar6 + 0xc4) == 0) {
        if (*(int *)(iVar6 + 0xbc) == 0) {
          bVar3 = true;
        }
        else {
          iVar4 = func_0x08b3486c();
          iVar6 = *(int *)(param_1 + 0x20);
          if (iVar4 != 0) {
            bVar3 = true;
          }
        }
      }
      else {
        iVar4 = FUN_088a751c();
        iVar6 = *(int *)(param_1 + 0x20);
        if (iVar4 == 0) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        FUN_08924ce4(param_1,*(undefined4 *)(iVar6 + 0xd0),0);
        iVar6 = *(int *)(param_1 + 0x20);
      }
    }
    else if (((uVar1 != 2) && (uVar1 != 3)) && (uVar1 == 4)) {
      if (*(int *)(iVar6 + 0xc4) == 0) {
        if (*(int *)(iVar6 + 0xbc) == 0) {
          bVar3 = true;
        }
        else {
          iVar4 = func_0x08b3486c();
          iVar6 = *(int *)(param_1 + 0x20);
          if (iVar4 != 0) {
            bVar3 = true;
          }
        }
      }
      else {
        iVar4 = FUN_088a751c();
        iVar6 = *(int *)(param_1 + 0x20);
        if (iVar4 == 0) {
          bVar3 = true;
        }
      }
      if (bVar3) {
        FUN_08924ce4(param_1,*(undefined4 *)(iVar6 + 0xd0),0);
        iVar6 = *(int *)(param_1 + 0x20);
      }
    }
  }
  if (*(int *)(iVar6 + 0xc0) != 0) {
    iVar4 = FUN_088a751c();
    iVar6 = *(int *)(param_1 + 0x20);
    if (iVar4 == 0) {
      FUN_088a6c70(*(undefined4 *)(iVar6 + 0xc0));
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc0) = 0;
      iVar6 = *(int *)(param_1 + 0x20);
    }
  }
  if (*(int *)(iVar6 + 0xc4) != 0) {
    iVar4 = FUN_088a751c();
    iVar6 = *(int *)(param_1 + 0x20);
    if (iVar4 == 0) {
      FUN_088a6c70(*(undefined4 *)(iVar6 + 0xc4));
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc4) = 0;
      iVar6 = *(int *)(param_1 + 0x20);
    }
  }
  iVar4 = *(int *)(iVar6 + 0xcc);
  if (*(char *)(iVar6 + 0xdc) == '\0') {
    if (iVar4 != 0) {
      FUN_088a6cb8(0x3f800000,iVar4,10);
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xcc) = 0;
    }
  }
  else {
    if (iVar4 == 0) {
      sVar2 = *(short *)(iVar6 + 0x16);
      iVar4 = -1;
      if (sVar2 == 0x22) {
        iVar4 = 0x31;
      }
      else if (sVar2 == 0x1f) {
        iVar4 = 0x30;
      }
      else if (sVar2 == 0x1c) {
        iVar4 = 0x2f;
      }
      if (iVar4 != -1) {
        uVar5 = func_0x08b421fc(_DAT_08b42288,iVar4);
        *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xcc) = uVar5;
        uVar5 = FUN_08925384(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0xb4));
        FUN_089a34f4(&local_28,uVar5,*(int *)(param_1 + 0x20) + 0x50);
        FUN_088a7284(local_28,local_24,local_20,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0xcc));
        iVar6 = *(int *)(param_1 + 0x20);
      }
    }
    *(undefined1 *)(iVar6 + 0xdc) = 0;
  }
  return;
}

