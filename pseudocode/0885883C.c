/* Entry 0x0885883C | file offset 0x00055814 | FUN_0885883c | bytes 656 */

void FUN_0885883c(undefined4 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((*(char *)(param_1 + 0xce) != '\0') && (param_1[0xcd] != 0)) {
    FUN_089a03dc(1);
    FUN_089a0384(4);
    FUN_089a0384(9);
    FUN_0899d2f8(*param_1);
    FUN_089a12a4(0,2,3,0,0);
    iVar3 = FUN_0885cd44(0x500);
    iVar9 = 0;
    iVar10 = 0;
    iVar4 = param_1[0xcd];
    do {
      iVar8 = 0;
      iVar6 = param_1[0xcc];
      if (0 < iVar4) {
        do {
          iVar7 = iVar6 + 1;
          bVar1 = *(byte *)((int)param_1 + iVar6 * 0x50 + 0x4f);
          if (9 < iVar7) {
            iVar7 = 0;
          }
          if (((iVar10 != 0) || ((bVar1 & 1) == 0)) && ((iVar10 != 1 || ((bVar1 & 1) != 0)))) {
            if ((bVar1 & 4) == 0) {
              FUN_089a12a4(0,2,3,0,0);
              cVar2 = *(char *)((int)param_1 + iVar6 * 0x50 + 0x4d);
            }
            else {
              FUN_089a12a4(0,2,10,0,0xffffffff);
              cVar2 = *(char *)((int)param_1 + iVar6 * 0x50 + 0x4d);
            }
            if (cVar2 != '\0') {
              uVar5 = param_1[iVar6 * 0x14 + 0x12];
              if (cVar2 == '\x04') {
                iVar4 = (int)((1.0 - (float)param_1[iVar6 * 0x14 + 0x14] * 0.125) * 255.0);
                if (-1 < iVar4) {
                  if (iVar4 < 0x100) {
                    uVar5 = iVar4 << 0x18 | uVar5;
                  }
                  else {
                    uVar5 = uVar5 | 0xff000000;
                  }
                }
              }
              else {
                uVar5 = uVar5 | 0xff000000;
              }
              iVar4 = FUN_088584c0(param_1[iVar6 * 0x14 + 8],param_1[iVar6 * 0x14 + 9],
                                   param_1[iVar6 * 0x14 + 0xc],param_1,iVar3 + iVar9 * 0x10,
                                   param_1 + iVar6 * 0x14 + 0xd,
                                   *(undefined1 *)(param_1 + iVar6 * 0x14 + 0x13),uVar5,
                                   param_1[iVar6 * 0x14 + 4]);
              iVar9 = iVar9 + iVar4;
            }
          }
          iVar4 = param_1[0xcd];
          iVar8 = iVar8 + 1;
          iVar6 = iVar7;
        } while (iVar8 < iVar4);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 2);
    FUN_089a0520(6,0x80011e,iVar9,0,iVar3);
  }
  return;
}

