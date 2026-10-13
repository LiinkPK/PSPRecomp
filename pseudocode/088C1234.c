/* Entry 0x088C1234 | file offset 0x000BE20C | FUN_088c1234 | bytes 636 */

int FUN_088c1234(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar4 = *param_3;
  iVar6 = param_3[1];
  iVar7 = param_3[2];
  iVar5 = param_3[3];
  uVar3 = param_3[4];
  iVar9 = 0;
  iVar12 = *(int *)(DAT_089d7408 + 8);
  iVar11 = 0;
  if (0 < iVar12) {
    iVar10 = 0;
    do {
      psVar8 = (short *)(DAT_089d740c + iVar10);
      if (((uVar3 & 0xff) == 0) && ((*(byte *)(psVar8 + 5) & 2) != 0)) {
        bVar1 = false;
      }
      else {
        if ((uVar3 >> 8 & 0xff) == 1) {
          if (*(char *)((int)psVar8 + 0xd) == '\x17') {
            bVar1 = false;
            if ((0 < iVar4) &&
               (bVar1 = false, (*(uint *)(psVar8 + 0xc) & 1 << (iVar4 - 1U & 0x1f)) != 0)) {
              bVar1 = true;
            }
            if (!bVar1) {
              bVar1 = false;
              goto LAB_088c1438;
            }
            iVar2 = (int)*(char *)((int)psVar8 + 0xf);
          }
          else {
            iVar2 = (int)*(char *)((int)psVar8 + 0xf);
          }
          goto LAB_088c1400;
        }
        bVar1 = false;
        if ((0 < iVar4) &&
           (bVar1 = false, (*(uint *)(psVar8 + 0xc) & 1 << (iVar4 - 1U & 0x1f)) != 0)) {
          bVar1 = true;
        }
        if (bVar1) {
          if ((*(byte *)(psVar8 + 5) & 1) == 0) {
            if ((*(byte *)(psVar8 + 5) & 8) == 0) {
              iVar2 = (int)*(char *)((int)psVar8 + 0xf);
            }
            else {
              iVar2 = FUN_088b8fd0(DAT_089d712c + 0xf6e0,(int)*psVar8);
              if ((iVar2 != 0) && ((*(byte *)(iVar2 + 3) & 8) == 0)) {
                bVar1 = false;
                goto LAB_088c1438;
              }
              iVar2 = (int)*(char *)((int)psVar8 + 0xf);
            }
LAB_088c1400:
            bVar1 = false;
            if (((iVar2 == iVar6) && (bVar1 = false, (char)psVar8[6] == iVar5)) &&
               ((*(char *)((int)psVar8 + 0xd) == iVar7 || (bVar1 = false, iVar7 == 0x1f)))) {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = false;
        }
      }
LAB_088c1438:
      if (bVar1) {
        if (param_2 <= iVar11) {
          return iVar11;
        }
        iVar11 = iVar11 + 1;
        *param_1 = (int)*psVar8;
        param_1 = param_1 + 1;
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x68;
    } while (iVar9 < iVar12);
  }
  return iVar11;
}

