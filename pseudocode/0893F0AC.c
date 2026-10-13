/* Entry 0x0893F0AC | file offset 0x0013C084 | FUN_0893f0ac | bytes 1536 */

byte * FUN_0893f0ac(int param_1,ushort *param_2,byte *param_3,byte *param_4,int *param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  ushort local_20 [2];
  
  if (param_2 == (ushort *)0x0) {
    param_2 = local_20;
  }
  if (param_3 == (byte *)0x0) {
    iVar5 = *(int *)(param_1 + 0x34);
  }
  else {
    if (param_4 == (byte *)0x0) {
      return (byte *)0xffffffff;
    }
    iVar5 = *(int *)(param_1 + 0x34);
  }
  if ((iVar5 != 0) && (iVar5 = FUN_089359e8(), 1 < iVar5)) {
    iVar5 = FUN_08935970(*(undefined4 *)(param_1 + 0x34),"C-SJIS");
    if (iVar5 == 0) {
      bVar1 = *param_3;
      if (param_3 == (byte *)0x0) {
        return (byte *)0x0;
      }
      if (((0x80 < bVar1) && (bVar1 < 0xa0)) || ((0xdf < bVar1 && (bVar1 < 0xf0)))) {
        bVar2 = param_3[1];
        if (param_4 < (byte *)0x2) {
          return (byte *)0xffffffff;
        }
        if (((bVar2 < 0x40) || (0x7e < bVar2)) && ((bVar2 < 0x80 || (0xfc < bVar2)))) {
          return (byte *)0xffffffff;
        }
        *param_2 = (ushort)bVar1 * 0x100 + (ushort)bVar2;
        return (byte *)0x2;
      }
    }
    else {
      iVar5 = FUN_08935970(*(undefined4 *)(param_1 + 0x34),"C-EUCJP");
      if (iVar5 == 0) {
        bVar1 = *param_3;
        if (param_3 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if ((0xa0 < bVar1) && (bVar1 != 0xff)) {
          bVar2 = param_3[1];
          if (param_4 < (byte *)0x2) {
            return (byte *)0xffffffff;
          }
          if ((0xa0 < bVar2) && (bVar2 != 0xff)) {
            *param_2 = (ushort)bVar1 * 0x100 + (ushort)bVar2;
            return (byte *)0x2;
          }
          return (byte *)0xffffffff;
        }
      }
      else {
        iVar5 = FUN_08935970(*(undefined4 *)(param_1 + 0x34),"C-JIS");
        if (iVar5 == 0) {
          if (param_3 == (byte *)0x0) {
            *param_5 = 0;
            return (byte *)0x1;
          }
          iVar5 = 3;
          if (*param_5 == 0) {
            iVar5 = 0;
          }
          pbVar4 = (byte *)0x0;
          pbVar6 = param_3;
          pbVar7 = param_3;
          pbVar3 = param_3;
          if (param_4 != (byte *)0x0) {
            do {
              bVar1 = *pbVar7;
              iVar5 = iVar5 * 0x24;
              if (bVar1 == 0x4a) {
                uVar8 = *(undefined4 *)(iVar5 + 0x89d8f8c);
                iVar5 = *(int *)(iVar5 + 0x89d8ddc);
              }
              else if (bVar1 == 0x42) {
                uVar8 = *(undefined4 *)(iVar5 + 0x89d8f88);
                iVar5 = *(int *)(iVar5 + 0x89d8dd8);
              }
              else if (bVar1 == 0x40) {
                uVar8 = *(undefined4 *)(iVar5 + 0x89d8f84);
                iVar5 = *(int *)(iVar5 + 0x89d8dd4);
              }
              else if (bVar1 == 0x28) {
                uVar8 = *(undefined4 *)(iVar5 + 0x89d8f80);
                iVar5 = *(int *)(iVar5 + 0x89d8dd0);
              }
              else if (bVar1 == 0x24) {
                uVar8 = *(undefined4 *)(iVar5 + 0x89d8f7c);
                iVar5 = *(int *)(iVar5 + 0x89d8dcc);
              }
              else if (bVar1 == 0x1b) {
                uVar8 = *(undefined4 *)(iVar5 + 0x89d8f78);
                iVar5 = *(int *)(iVar5 + 0x89d8dc8);
              }
              else if (bVar1 == 0) {
                uVar8 = *(undefined4 *)(iVar5 + 0x89d8f90);
                iVar5 = *(int *)(iVar5 + 0x89d8de0);
              }
              else {
                iVar9 = 8;
                if (bVar1 < 0x21) {
LAB_0893f4ac:
                  iVar9 = iVar9 << 2;
                }
                else {
                  iVar9 = 0x20;
                  if (bVar1 < 0x7f) {
                    iVar9 = 7;
                    goto LAB_0893f4ac;
                  }
                }
                uVar8 = *(undefined4 *)(iVar5 + iVar9 + 0x89d8f78);
                iVar5 = *(int *)(iVar5 + iVar9 + 0x89d8dc8);
              }
              switch(uVar8) {
              case 0:
                *param_5 = 0;
                *param_2 = (ushort)*pbVar6;
                return pbVar4 + 1;
              case 1:
                *param_5 = 0;
                *param_2 = (ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1];
                return pbVar4 + 1;
              case 2:
                *param_5 = 1;
                *param_2 = (ushort)*pbVar6 * 0x100 + (ushort)pbVar6[1];
                return pbVar6 + (2 - (int)param_3);
              case 3:
              case 4:
                pbVar6 = pbVar3 + 1;
                break;
              case 5:
                break;
              case 6:
                *param_5 = 0;
                *param_2 = 0;
                return pbVar4;
              default:
                return (byte *)0xffffffff;
              }
              pbVar4 = pbVar4 + 1;
              pbVar7 = pbVar7 + 1;
              pbVar3 = pbVar3 + 1;
            } while (pbVar4 < param_4);
          }
          return (byte *)0xffffffff;
        }
      }
    }
  }
  if (param_3 == (byte *)0x0) {
    return (byte *)0x0;
  }
  *param_2 = (ushort)*param_3;
  return (byte *)(uint)(*param_3 != 0);
}

