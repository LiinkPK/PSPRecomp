/* Entry 0x08849700 | file offset 0x000466D8 | FUN_08849700 | bytes 1104 */

int FUN_08849700(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = func_0x08b30898(*(undefined4 *)(param_1 + 0x30));
  if ((iVar2 == 0) || (*(char *)(param_1 + 0x81) != '\0')) {
    iVar2 = FUN_0884921c(param_1);
  }
  else {
    iVar2 = FUN_088378e8(*(undefined4 *)(param_1 + 0x30));
    if (iVar2 == 0) {
      iVar2 = FUN_088378f8(*(undefined4 *)(param_1 + 0x30));
      if (iVar2 == 0) {
        if ((*(byte *)(*(int *)(param_1 + 0x30) + 0x5b2) & 8) == 0) {
          iVar2 = FUN_08848984(param_1);
          if (iVar2 == 0) {
            FUN_08848160(param_1,1);
            uVar4 = 0;
            if (0 < *(int *)(*DAT_089d4974 + 4)) {
              uVar3 = 0;
              do {
                if ((*(uint *)(param_1 + 0x60 + uVar3 * 4) & 1 << (uVar4 & 0x1f)) != 0) {
                  iVar2 = FUN_088480d0(DAT_089d4974,uVar4);
                  if (((*(uint *)(iVar2 + 0x18) & 0x400) != 0) ||
                     (bVar1 = false, (*(uint *)(iVar2 + 0x18) & 0x800) != 0)) {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    return iVar2;
                  }
                  if ((uint)*(ushort *)(iVar2 + 0x1c) !=
                      (int)*(short *)(*(int *)(param_1 + 0x30) + 0x180)) {
                    return iVar2;
                  }
                }
                uVar4 = uVar4 + 1;
                uVar3 = uVar4 >> 5;
              } while ((int)uVar4 < *(int *)(*DAT_089d4974 + 4));
            }
            iVar2 = 0;
          }
          else {
            uVar4 = 0;
            if (0 < *(int *)(*DAT_089d4974 + 4)) {
              uVar3 = 0;
              do {
                if ((*(uint *)(param_1 + 0x60 + uVar3 * 4) & 1 << (uVar4 & 0x1f)) != 0) {
                  iVar2 = FUN_088480d0(DAT_089d4974,uVar4);
                  if (((*(uint *)(iVar2 + 0x18) & 0x400) != 0) ||
                     (bVar1 = false, (*(uint *)(iVar2 + 0x18) & 0x800) != 0)) {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    return iVar2;
                  }
                  if ((uint)*(ushort *)(iVar2 + 0x1c) !=
                      (int)*(short *)(*(int *)(param_1 + 0x30) + 0x180)) {
                    return iVar2;
                  }
                }
                uVar4 = uVar4 + 1;
                uVar3 = uVar4 >> 5;
              } while ((int)uVar4 < *(int *)(*DAT_089d4974 + 4));
            }
            iVar2 = 0;
          }
        }
        else {
          iVar2 = FUN_08848e3c(param_1);
        }
      }
      else {
        FUN_08848160(param_1,3);
        uVar4 = 0;
        if (0 < *(int *)(*DAT_089d4974 + 4)) {
          uVar3 = 0;
          do {
            if ((*(uint *)(param_1 + 0x60 + uVar3 * 4) & 1 << (uVar4 & 0x1f)) != 0) {
              iVar2 = FUN_088480d0(DAT_089d4974,uVar4);
              if (((*(uint *)(iVar2 + 0x18) & 0x400) != 0) ||
                 (bVar1 = false, (*(uint *)(iVar2 + 0x18) & 0x800) != 0)) {
                bVar1 = true;
              }
              if (bVar1) {
                return iVar2;
              }
              if ((uint)*(ushort *)(iVar2 + 0x1c) !=
                  (int)*(short *)(*(int *)(param_1 + 0x30) + 0x180)) {
                return iVar2;
              }
            }
            uVar4 = uVar4 + 1;
            uVar3 = uVar4 >> 5;
          } while ((int)uVar4 < *(int *)(*DAT_089d4974 + 4));
        }
        iVar2 = 0;
      }
    }
    else {
      FUN_08848160(param_1,2);
      uVar4 = 0;
      if (0 < *(int *)(*DAT_089d4974 + 4)) {
        uVar3 = 0;
        do {
          if ((*(uint *)(param_1 + 0x60 + uVar3 * 4) & 1 << (uVar4 & 0x1f)) != 0) {
            iVar2 = FUN_088480d0(DAT_089d4974,uVar4);
            if (((*(uint *)(iVar2 + 0x18) & 0x400) != 0) ||
               (bVar1 = false, (*(uint *)(iVar2 + 0x18) & 0x800) != 0)) {
              bVar1 = true;
            }
            if (bVar1) {
              return iVar2;
            }
            if ((uint)*(ushort *)(iVar2 + 0x1c) != (int)*(short *)(*(int *)(param_1 + 0x30) + 0x180)
               ) {
              return iVar2;
            }
          }
          uVar4 = uVar4 + 1;
          uVar3 = uVar4 >> 5;
        } while ((int)uVar4 < *(int *)(*DAT_089d4974 + 4));
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

