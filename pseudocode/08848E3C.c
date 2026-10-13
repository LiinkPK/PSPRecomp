/* Entry 0x08848E3C | file offset 0x00045E14 | FUN_08848e3c | bytes 992 */

int FUN_08848e3c(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    iVar2 = FUN_088480d0(DAT_089d4974,iVar5);
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = func_0x08b30898(*(undefined4 *)(param_1 + 0x30));
    if (iVar2 == iVar3) {
      bVar1 = false;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x7c);
      if (iVar3 == 5) {
        bVar1 = false;
        if (((*(byte *)(iVar2 + 0xf) & 4) != 0) && ((*(uint *)(iVar2 + 0x18) & 0x80) != 0)) {
          bVar1 = true;
        }
      }
      else if (iVar3 == 1) {
        bVar1 = false;
        if (((*(byte *)(iVar2 + 0xf) & 1) != 0) && ((*(uint *)(iVar2 + 0x18) & 0x80) != 0)) {
          bVar1 = true;
        }
      }
      else if (iVar3 == 3) {
        bVar1 = false;
        if (((*(byte *)(iVar2 + 0xf) & 2) != 0) && ((*(uint *)(iVar2 + 0x18) & 0x80) != 0)) {
          bVar1 = true;
        }
      }
      else if (iVar3 == 4) {
        bVar1 = false;
        if (((*(byte *)(iVar2 + 0xf) & 4) != 0) && ((*(uint *)(iVar2 + 0x18) & 0x80) == 0)) {
          bVar1 = true;
        }
      }
      else if (iVar3 == 0) {
        bVar1 = false;
        if (((*(byte *)(iVar2 + 0xf) & 1) != 0) && ((*(uint *)(iVar2 + 0x18) & 0x80) == 0)) {
          bVar1 = true;
        }
      }
      else if (iVar3 == 2) {
        bVar1 = false;
        if (((*(byte *)(iVar2 + 0xf) & 2) != 0) && ((*(uint *)(iVar2 + 0x18) & 0x80) == 0)) {
          bVar1 = true;
        }
      }
      else {
        bVar1 = true;
        if (iVar3 == 6) {
          bVar1 = (*(byte *)(iVar2 + 0xf) & 8) != 0;
        }
      }
    }
    if (bVar1) {
      if ((*(uint *)(iVar2 + 0x18) & 0x10000) == 0) {
        iVar3 = func_0x08b30898(*(undefined4 *)(param_1 + 0x30));
        if (iVar3 == 0) {
          iVar3 = func_0x08b2f9d0(*(undefined4 *)(param_1 + 0x30));
          if (iVar3 == 0) {
            bVar1 = false;
            goto LAB_088491b8;
          }
          uVar4 = *(uint *)(iVar2 + 0x18);
        }
        else {
          uVar4 = *(uint *)(iVar2 + 0x18);
        }
        if ((uVar4 & 0x20000) == 0) {
          if ((uVar4 & 0x40000) == 0) {
            if ((uVar4 & 0x80000) == 0) {
              if ((uVar4 & 0x100000) == 0) {
                if ((uVar4 & 0x200000) == 0) {
                  bVar1 = false;
                  if ((uVar4 & 0x400000) != 0) {
                    bVar1 = (*(uint *)(param_1 + 0x78) & 0x40) != 0;
                  }
                }
                else {
                  bVar1 = (*(uint *)(param_1 + 0x78) & 0x20) != 0;
                }
              }
              else {
                bVar1 = (*(uint *)(param_1 + 0x78) & 0x10) != 0;
              }
            }
            else {
              bVar1 = (*(uint *)(param_1 + 0x78) & 8) != 0;
            }
          }
          else {
            bVar1 = (*(uint *)(param_1 + 0x78) & 4) != 0;
          }
        }
        else {
          bVar1 = (*(uint *)(param_1 + 0x78) & 2) != 0;
        }
      }
      else {
        bVar1 = true;
      }
LAB_088491b8:
      if ((bVar1) && (iVar3 = FUN_08935970(iVar2 + 100,"LIMIT_START"), iVar3 == 0)) {
        return iVar2;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

