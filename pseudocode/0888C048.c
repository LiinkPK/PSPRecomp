/* Entry 0x0888C048 | file offset 0x00089020 | FUN_0888c048 | bytes 1152 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0888c048(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = 0;
  iVar3 = func_0x08b1dbd0(_DAT_08b1fe60);
  if ((iVar3 != 0) || (iVar3 = func_0x08b21018(_DAT_08b212e8), iVar3 != 0)) {
    iVar8 = 1;
  }
  if (iVar8 == 0) {
    func_0x08b0de14(_DAT_08b11e28);
    FUN_08886c88(DAT_089d69f8);
    func_0x08b158c8();
    *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + DAT_089d5eac;
  }
  iVar3 = FUN_0888696c(DAT_089d69f8);
  if ((iVar3 != 0) || (iVar8 == 1)) {
    func_0x08b0ddc8(_DAT_08b11e28,0);
    FUN_08886934(DAT_089d69f8);
    iVar5 = 0;
    iVar3 = param_1;
    do {
      iVar7 = *(int *)(iVar3 + 0x38);
      if (iVar7 != 0) {
        *(uint *)(iVar7 + 0x380) = *(uint *)(iVar7 + 0x380) | 2;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar5 < 2);
    if (iVar8 == 0) {
      FUN_0888b3a4(param_1);
      FUN_0888b3ac(param_1);
    }
    iVar3 = func_0x08b1dbd0(_DAT_08b1fe60);
    if (iVar3 == 1) {
      iVar3 = func_0x08b1dc10(_DAT_08b1fe60);
      iVar5 = *(int *)(param_1 + 0x4c);
      bVar1 = iVar3 == *(int *)(param_1 + 0x3c);
    }
    else {
      iVar3 = func_0x08b21018(_DAT_08b212e8);
      if (iVar3 == 1) {
        iVar3 = func_0x08b21058(_DAT_08b212e8);
        iVar5 = *(int *)(param_1 + 0x4c);
        bVar1 = iVar3 == *(int *)(param_1 + 0x3c);
      }
      else {
        iVar3 = FUN_08886a58(DAT_089d69f8);
        iVar5 = *(int *)(param_1 + 0x4c);
        bVar1 = iVar3 == *(int *)(param_1 + 0x38);
      }
    }
    if (iVar5 == 0xc) {
      bVar6 = !bVar1;
    }
    else {
      iVar3 = *(int *)(DAT_089d6a10 + 0x740);
      if ((iVar3 == 1) || (iVar3 == 3)) {
        bVar6 = !bVar1;
      }
      else {
        bVar6 = false;
        if ((iVar3 != 2) && (bVar6 = false, iVar5 != 5)) {
          if (iVar5 == 10) {
            bVar6 = !bVar1;
          }
          else {
            bVar6 = false;
            if (iVar5 != 0xb) {
              if (iVar5 == 3) {
                bVar6 = !bVar1;
              }
              else {
                bVar6 = true;
                if (((iVar5 != 9) && (bVar6 = true, *DAT_089d8508 == '\x01')) &&
                   (bVar6 = false, !bVar1)) {
                  iVar3 = FUN_0891bdfc(DAT_089d8508,
                                       (int)*(short *)(*(int *)(param_1 + 0x3c) + 0x10cc));
                  bVar6 = false;
                  if (iVar3 != 0) {
                    bVar6 = true;
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_0888b21c(param_1);
    uVar2 = _DAT_08b0cf20;
    iVar3 = *(int *)(DAT_089d69f8 + 0xb8);
    uVar4 = FUN_08886a38(DAT_089d69f8,*(undefined4 *)(param_1 + 0x54));
    func_0x08b09d88(uVar2,uVar4,iVar8,bVar6,iVar3 == 2);
    *(undefined4 *)(param_1 + 0x48) = 4;
    FUN_088c9938(*(undefined4 *)(param_1 + 0x7c8));
    if (*(char *)(DAT_089d6a00 + 0x18) == '\x01') {
      *(undefined4 *)(param_1 + 0x50) = 2;
      iVar5 = *(int *)(param_1 + 0x38);
      iVar3 = FUN_08886a58(DAT_089d69f8);
      if (iVar5 == iVar3) {
        if (iVar8 == 0) {
          if (*(int *)(DAT_089d6a00 + 4) < 2) {
            *(undefined4 *)(param_1 + 0x50) = 3;
            return;
          }
          *(undefined1 *)(DAT_089d6a00 + 0x19) = 1;
          if ((*(int *)(DAT_089d6a10 + 0x740) != 1) && (*(int *)(DAT_089d6a10 + 0x740) != 2)) {
            return;
          }
          *(undefined4 *)(param_1 + 0x50) = 0;
          return;
        }
        *(undefined1 *)(DAT_089d6a00 + 0x19) = 1;
      }
      else {
        *(undefined1 *)(DAT_089d6a00 + 0x19) = 1;
      }
      if ((*(int *)(DAT_089d6a10 + 0x740) == 1) || (*(int *)(DAT_089d6a10 + 0x740) == 2)) {
        *(undefined4 *)(param_1 + 0x50) = 1;
      }
    }
    else {
      iVar3 = *(int *)(DAT_089d6a10 + 0x740);
      if (iVar3 == 1) {
        iVar5 = *(int *)(param_1 + 0x38);
        iVar3 = FUN_08886a58(DAT_089d69f8);
        uVar9 = (uint)(iVar5 != iVar3 || iVar8 != 0);
      }
      else if (iVar3 == 2) {
        uVar9 = (uint)((*(uint *)(*(int *)(param_1 + 0x38) + 0x388) & 2) != 0);
      }
      else {
        uVar9 = 2;
        if (iVar3 == 3) {
          uVar9 = (uint)((*(uint *)(*(int *)(param_1 + 0x38) + 0x388) & 2) != 0);
        }
      }
      *(uint *)(param_1 + 0x50) = uVar9;
    }
  }
  return;
}

