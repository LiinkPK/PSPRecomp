/* Entry 0x0899DD7C | file offset 0x0019AD54 | FUN_0899dd7c | bytes 376 */

void FUN_0899dd7c(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  
  uVar9 = param_3 + 0xfU & 0xfffffff0;
  iVar6 = uVar9 * param_4;
  pbVar4 = param_1 + uVar9 * (param_4 + -1);
  if (param_4 < 0) {
    param_4 = -param_4;
    uVar9 = -uVar9;
    iVar6 = -iVar6;
    pbVar4 = param_1;
  }
  FUN_08935828(param_1,0,iVar6);
  iVar6 = 0;
  iVar7 = 0;
  if (param_4 < 1) {
    return;
  }
  bVar1 = *param_2;
  pbVar10 = pbVar4;
  do {
    uVar5 = (uint)bVar1;
    bVar2 = true;
    pbVar8 = param_2 + 1;
    if (uVar5 == 0) {
      uVar5 = (uint)*pbVar8;
      pbVar8 = param_2 + 2;
      if (2 < uVar5) {
        bVar2 = false;
        goto LAB_0899de78;
      }
      if (uVar5 == 1) {
        return;
      }
      if (uVar5 == 0) {
        pbVar4 = pbVar10 + -uVar9;
        iVar7 = iVar7 + 1;
        iVar6 = 0;
        pbVar10 = pbVar4;
      }
      else {
        iVar6 = iVar6 + (uint)*pbVar8;
        pbVar8 = param_2 + 4;
        iVar7 = iVar7 + (uint)param_2[3];
        pbVar4 = pbVar10 + -(uVar9 * param_2[3]) + iVar6;
        pbVar10 = pbVar10 + -(uVar9 * param_2[3]);
      }
    }
    else {
LAB_0899de78:
      if (param_3 - iVar6 < (int)uVar5) {
        uVar5 = param_3 - iVar6;
      }
      if (bVar2) {
        uVar3 = uVar5;
        if ((int)uVar5 < 1) {
          pbVar8 = pbVar8 + 1;
        }
        else {
          do {
            uVar3 = uVar3 - 1;
            *pbVar4 = *pbVar8;
            pbVar4 = pbVar4 + 1;
          } while (uVar3 != 0);
          pbVar8 = pbVar8 + 1;
        }
      }
      else {
        uVar3 = uVar5;
        if (0 < (int)uVar5) {
          do {
            bVar1 = *pbVar8;
            uVar3 = uVar3 - 1;
            pbVar8 = pbVar8 + 1;
            *pbVar4 = bVar1;
            pbVar4 = pbVar4 + 1;
          } while (uVar3 != 0);
        }
        pbVar8 = pbVar8 + (uVar5 & 1);
      }
      iVar6 = iVar6 + uVar5;
    }
    if (param_4 <= iVar7) {
      return;
    }
    bVar1 = *pbVar8;
    param_2 = pbVar8;
  } while( true );
}

