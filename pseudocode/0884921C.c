/* Entry 0x0884921C | file offset 0x000461F4 | FUN_0884921c | bytes 1252 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0884921c(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = -1;
  if (*(int *)(param_1 + 0x7c) == 4) {
    FUN_08848160(param_1,0);
    FUN_08848160(param_1,1);
    uVar5 = 0;
    if (0 < *(int *)(*DAT_089d4974 + 4)) {
      uVar4 = 0;
      do {
        if ((*(uint *)(param_1 + 0x60 + uVar4 * 4) & 1 << (uVar5 & 0x1f)) != 0) {
          iVar6 = FUN_088480d0(DAT_089d4974,uVar5);
          if (((*(uint *)(iVar6 + 0x18) & 0x400) != 0) ||
             (bVar2 = false, (*(uint *)(iVar6 + 0x18) & 0x800) != 0)) {
            bVar2 = true;
          }
          if (bVar2) {
            return iVar6;
          }
          if ((uint)*(ushort *)(iVar6 + 0x1c) != (int)*(short *)(*(int *)(param_1 + 0x30) + 0x180))
          {
            return iVar6;
          }
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar5 >> 5;
      } while ((int)uVar5 < *(int *)(*DAT_089d4974 + 4));
    }
  }
  else {
    iVar3 = FUN_088374b0(*(undefined4 *)(param_1 + 0x30));
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x7c) == 0) {
        iVar3 = func_0x08b2f9d0(*(undefined4 *)(param_1 + 0x30));
        if (iVar3 != 0) {
          if ((*(uint *)(param_1 + 0x78) & 0x80) != 0) {
            iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),1);
            *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 1;
          }
          if ((*(uint *)(param_1 + 0x78) & 0x100) != 0) {
            iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),2);
            *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 2;
          }
        }
        if (iVar6 < 0) {
          iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),0);
          *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 0;
        }
      }
      else if (*(int *)(param_1 + 0x7c) == 2) {
        iVar3 = func_0x08b2f9d0(*(undefined4 *)(param_1 + 0x30));
        if (iVar3 != 0) {
          if ((*(uint *)(param_1 + 0x78) & 0x80) != 0) {
            iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),7);
            *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 7;
          }
          if ((*(uint *)(param_1 + 0x78) & 0x100) != 0) {
            iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),8);
            *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 8;
          }
        }
        if (iVar6 < 0) {
          iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),6);
          *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 6;
        }
      }
    }
    else if (*(int *)(param_1 + 0x7c) == 0) {
      iVar3 = func_0x08b2f9d0(*(undefined4 *)(param_1 + 0x30));
      if (iVar3 != 0) {
        if ((*(uint *)(param_1 + 0x78) & 0x20) != 0) {
          iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),4);
          *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 4;
        }
        if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
          iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),5);
          *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 5;
        }
      }
      if (iVar6 < 0) {
        iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),3);
        *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 3;
      }
    }
    else if (*(int *)(param_1 + 0x7c) == 2) {
      iVar3 = func_0x08b2f9d0(*(undefined4 *)(param_1 + 0x30));
      if (iVar3 != 0) {
        if ((*(uint *)(param_1 + 0x78) & 0x20) != 0) {
          iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),10);
          *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 10;
        }
        if ((*(uint *)(param_1 + 0x78) & 0x40) != 0) {
          iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),0xb);
          *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 0xb;
        }
      }
      if (iVar6 < 0) {
        iVar6 = func_0x08b33b08(*(undefined4 *)(param_1 + 0x30),9);
        *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x107e) = 9;
      }
    }
    if (-1 < iVar6) {
      FUN_08848160(param_1,0);
      iVar6 = FUN_088b1d9c(iVar6);
      iVar3 = 0;
      sVar1 = *(short *)(iVar6 + 0xc);
      while (iVar3 = func_0x08ab8134(_DAT_08ab8388,iVar3,(int)sVar1), iVar3 != 0) {
        uVar5 = FUN_08848110(DAT_089d4974,(int)*(short *)(iVar3 + 8));
        if ((*(uint *)(param_1 + 0x60 + (uVar5 >> 5) * 4) & 1 << (uVar5 & 0x1f)) != 0) {
          iVar6 = FUN_088480d0(DAT_089d4974,uVar5);
          return iVar6;
        }
        sVar1 = *(short *)(iVar6 + 0xc);
      }
    }
  }
  return 0;
}

