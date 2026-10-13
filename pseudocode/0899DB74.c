/* Entry 0x0899DB74 | file offset 0x0019AB4C | FUN_0899db74 | bytes 520 */

void FUN_0899db74(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  
  uVar10 = (param_3 + 1) / 2 + 0xfU & 0xfffffff0;
  iVar8 = uVar10 * param_4;
  pbVar5 = param_1 + uVar10 * (param_4 + -1);
  if (param_4 < 0) {
    param_4 = -param_4;
    uVar10 = -uVar10;
    iVar8 = -iVar8;
    pbVar5 = param_1;
  }
  FUN_08935828(param_1,0,iVar8);
  uVar7 = 0;
  iVar8 = 0;
  if (param_4 < 1) {
    return;
  }
  bVar1 = *param_2;
  pbVar11 = pbVar5;
  do {
    uVar4 = (uint)bVar1;
    bVar2 = true;
    pbVar9 = param_2 + 1;
    if (uVar4 == 0) {
      uVar4 = (uint)*pbVar9;
      pbVar9 = param_2 + 2;
      if (2 < uVar4) {
        bVar2 = false;
        goto LAB_0899dc8c;
      }
      if (uVar4 == 1) {
        return;
      }
      if (uVar4 == 0) {
        pbVar5 = pbVar11 + -uVar10;
        iVar8 = iVar8 + 1;
        uVar7 = 0;
        pbVar11 = pbVar5;
      }
      else {
        uVar7 = uVar7 + *pbVar9;
        pbVar9 = param_2 + 4;
        iVar8 = iVar8 + (uint)param_2[3];
        pbVar5 = pbVar11 + -(uVar10 * param_2[3]) + (int)uVar7 / 2;
        pbVar11 = pbVar11 + -(uVar10 * param_2[3]);
      }
    }
    else {
LAB_0899dc8c:
      if ((int)(param_3 - uVar7) < (int)uVar4) {
        uVar4 = param_3 - uVar7;
      }
      if (bVar2) {
        uVar6 = 0;
        if (0 < (int)uVar4) {
          do {
            uVar3 = (uint)*pbVar9;
            if ((uVar6 & 1) == 0) {
              uVar3 = (int)(uint)*pbVar9 >> 4;
            }
            if ((uVar7 & 1) == 0) {
              *pbVar5 = (byte)(uVar3 & 0xf);
            }
            else {
              *pbVar5 = *pbVar5 | (byte)((uVar3 & 0xf) << 4);
              pbVar5 = pbVar5 + 1;
            }
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 + 1;
          } while ((int)uVar6 < (int)uVar4);
        }
        pbVar9 = pbVar9 + 1;
      }
      else {
        uVar6 = 0;
        if (0 < (int)uVar4) {
          do {
            uVar3 = (uint)*pbVar9;
            if ((uVar6 & 1) == 0) {
              uVar3 = (int)uVar3 >> 4;
            }
            else {
              pbVar9 = pbVar9 + 1;
            }
            if ((uVar7 & 1) == 0) {
              *pbVar5 = (byte)(uVar3 & 0xf);
            }
            else {
              *pbVar5 = *pbVar5 | (byte)((uVar3 & 0xf) << 4);
              pbVar5 = pbVar5 + 1;
            }
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 + 1;
          } while ((int)uVar6 < (int)uVar4);
        }
        pbVar9 = pbVar9 + ((uVar4 & 1) -
                          ((int)(((uVar4 + 1) - ((int)(uVar4 + 1) >> 0x1f)) * 0x40000000) >> 0x1f));
      }
    }
    if (param_4 <= iVar8) {
      return;
    }
    bVar1 = *pbVar9;
    param_2 = pbVar9;
  } while( true );
}

