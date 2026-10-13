/* Entry 0x0893DBD4 | file offset 0x0013ABAC | FUN_0893dbd4 | bytes 464 */

uint FUN_0893dbd4(undefined4 *param_1,char *param_2,undefined4 *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  byte *pbVar9;
  int iVar10;
  
  bVar1 = false;
  pcVar3 = param_2;
  do {
    pcVar5 = pcVar3;
    iVar6 = (int)*pcVar5;
    pcVar3 = pcVar5 + 1;
  } while (((&DAT_089cf591)[iVar6] & 8) != 0);
  if (iVar6 == 0x2d) {
    iVar6 = (int)*pcVar3;
    pcVar3 = pcVar5 + 2;
    bVar1 = true;
  }
  else if (iVar6 == 0x2b) {
    iVar6 = (int)*pcVar3;
    pcVar3 = pcVar5 + 2;
  }
  if ((((param_4 == 0) || (pbVar9 = &DAT_089cf591 + iVar6, param_4 == 0x10)) &&
      (pbVar9 = &DAT_089cf591 + iVar6, iVar6 == 0x30)) &&
     ((*pcVar3 == 'x' || (pbVar9 = &UNK_089cf5c1, *pcVar3 == 'X')))) {
    iVar6 = (int)pcVar3[1];
    pcVar3 = pcVar3 + 2;
    param_4 = 0x10;
    pbVar9 = &DAT_089cf591 + iVar6;
  }
  bVar8 = *pbVar9;
  if ((param_4 == 0) && (param_4 = 10, iVar6 == 0x30)) {
    param_4 = 8;
  }
  uVar7 = 0x7fffffff;
  if (bVar1) {
    uVar7 = 0x80000000;
  }
  uVar4 = 0;
  iVar2 = 0;
  do {
    if ((bVar8 & 4) == 0) {
      if ((bVar8 & 3) == 0) {
LAB_0893dd58:
        if (iVar2 < 0) {
          uVar4 = 0x7fffffff;
          if (bVar1) {
            uVar4 = 0x80000000;
          }
          *param_1 = 0x22;
        }
        else if (bVar1) {
          uVar4 = -uVar4;
        }
        if (param_3 != (undefined4 *)0x0) {
          if (iVar2 != 0) {
            param_2 = pcVar3 + -1;
          }
          *param_3 = param_2;
        }
        return uVar4;
      }
      iVar10 = 0x57;
      if ((bVar8 & 1) != 0) {
        iVar10 = 0x37;
      }
      iVar6 = iVar6 - iVar10;
    }
    else {
      iVar6 = iVar6 + -0x30;
    }
    if ((int)param_4 <= iVar6) goto LAB_0893dd58;
    if (((iVar2 < 0) || (uVar7 / param_4 < uVar4)) ||
       ((uVar4 == uVar7 / param_4 && ((int)(uVar7 % param_4) < iVar6)))) {
      iVar2 = -1;
    }
    else {
      iVar2 = 1;
      uVar4 = uVar4 * param_4 + iVar6;
    }
    iVar6 = (int)*pcVar3;
    pcVar3 = pcVar3 + 1;
    bVar8 = (&DAT_089cf591)[iVar6];
  } while( true );
}

