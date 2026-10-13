/* Entry 0x08848984 | file offset 0x0004595C | FUN_08848984 | bytes 1208 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08848984(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int local_30;
  
  iVar8 = param_1[0xc];
  local_30 = 0;
  uVar5 = 0;
  if (0 < *(short *)(iVar8 + 0x1068)) {
    uVar6 = uVar5;
    do {
      piVar2 = (int *)func_0x08b308c8(iVar8,local_30);
      if (piVar2 == (int *)0x0) {
        return uVar6;
      }
      uVar7 = 0;
      while (iVar8 = FUN_088480d0(DAT_089d4974,uVar7), iVar8 != 0) {
        if (*piVar2 == iVar8) {
          iVar3 = func_0x08b30898(param_1[0xc]);
          if (iVar8 == iVar3) {
            bVar1 = false;
          }
          else {
            iVar3 = param_1[0x1f];
            if (iVar3 == 5) {
              bVar1 = false;
              if (((*(byte *)(iVar8 + 0xf) & 4) != 0) && ((*(uint *)(iVar8 + 0x18) & 0x80) != 0)) {
                bVar1 = true;
              }
            }
            else if (iVar3 == 1) {
              bVar1 = false;
              if (((*(byte *)(iVar8 + 0xf) & 1) != 0) && ((*(uint *)(iVar8 + 0x18) & 0x80) != 0)) {
                bVar1 = true;
              }
            }
            else if (iVar3 == 3) {
              bVar1 = false;
              if (((*(byte *)(iVar8 + 0xf) & 2) != 0) && ((*(uint *)(iVar8 + 0x18) & 0x80) != 0)) {
                bVar1 = true;
              }
            }
            else if (iVar3 == 4) {
              bVar1 = false;
              if (((*(byte *)(iVar8 + 0xf) & 4) != 0) && ((*(uint *)(iVar8 + 0x18) & 0x80) == 0)) {
                bVar1 = true;
              }
            }
            else if (iVar3 == 0) {
              bVar1 = false;
              if (((*(byte *)(iVar8 + 0xf) & 1) != 0) && ((*(uint *)(iVar8 + 0x18) & 0x80) == 0)) {
                bVar1 = true;
              }
            }
            else if (iVar3 == 2) {
              bVar1 = false;
              if (((*(byte *)(iVar8 + 0xf) & 2) != 0) && ((*(uint *)(iVar8 + 0x18) & 0x80) == 0)) {
                bVar1 = true;
              }
            }
            else {
              bVar1 = true;
              if (iVar3 == 6) {
                bVar1 = (*(byte *)(iVar8 + 0xf) & 8) != 0;
              }
            }
          }
          if (bVar1) {
            if ((*(uint *)(iVar8 + 0x18) & 0x10000) == 0) {
              iVar3 = func_0x08b30898(param_1[0xc]);
              if (iVar3 == 0) {
                iVar3 = func_0x08b2f9d0(param_1[0xc]);
                if (iVar3 == 0) {
                  bVar1 = false;
                  goto LAB_08848d50;
                }
                uVar4 = *(uint *)(iVar8 + 0x18);
              }
              else {
                uVar4 = *(uint *)(iVar8 + 0x18);
              }
              if ((uVar4 & 0x20000) == 0) {
                if ((uVar4 & 0x40000) == 0) {
                  if ((uVar4 & 0x80000) == 0) {
                    if ((uVar4 & 0x100000) == 0) {
                      if ((uVar4 & 0x200000) == 0) {
                        bVar1 = false;
                        if ((uVar4 & 0x400000) != 0) {
                          bVar1 = (param_1[0x1e] & 0x40) != 0;
                        }
                      }
                      else {
                        bVar1 = (param_1[0x1e] & 0x20) != 0;
                      }
                    }
                    else {
                      bVar1 = (param_1[0x1e] & 0x10) != 0;
                    }
                  }
                  else {
                    bVar1 = (param_1[0x1e] & 8) != 0;
                  }
                }
                else {
                  bVar1 = (param_1[0x1e] & 4) != 0;
                }
              }
              else {
                bVar1 = (param_1[0x1e] & 2) != 0;
              }
            }
            else {
              bVar1 = true;
            }
LAB_08848d50:
            if (((bVar1) && (iVar3 = FUN_08847f10(iVar8,param_1[0xc],*param_1), iVar3 != 0)) &&
               (iVar3 = func_0x08b2fd90(param_1[0xc],(char)piVar2[1]), iVar3 != 0)) {
              iVar8 = func_0x08ab81e0(_DAT_08ab8388,param_1[0xc],iVar8);
              if (iVar8 != 0) {
                param_1[(uVar7 >> 5) + 0x18] = param_1[(uVar7 >> 5) + 0x18] | 1 << (uVar7 & 0x1f);
              }
            }
          }
        }
        uVar7 = uVar7 + 1;
      }
      iVar8 = param_1[0xc];
      local_30 = local_30 + 1;
      uVar5 = 1;
      uVar6 = 1;
    } while (local_30 < *(short *)(iVar8 + 0x1068));
  }
  return uVar5;
}

