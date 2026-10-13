/* Entry 0x08854008 | file offset 0x00050FE0 | FUN_08854008 | bytes 588 */

void FUN_08854008(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_50 [16];
  int local_40;
  
  if (param_1[0x55] != 0) {
    iVar5 = 0;
    fVar7 = 0.3;
    if (*(int *)(DAT_089d6ac8 + 0x710) != 0) {
      iVar1 = FUN_08935b50(*(int *)(DAT_089d6ac8 + 0x710) + 8,&DAT_089c8d3c,3);
      if (iVar1 == 0) {
        fVar7 = 0.5;
      }
      FUN_0899d2f8(*param_1);
      FUN_089a12a4(0,2,3,0,0);
      iVar1 = FUN_0885cd44(0x1e0);
      iVar4 = 0;
      local_40 = iVar1;
      if (0 < (int)param_1[0x55]) {
        iVar2 = param_1[0x54];
        while( true ) {
          iVar2 = (iVar2 + iVar4) % 10;
          fVar6 = (float)param_1[iVar2 * 8 + 8];
          if (0.0 < fVar6) {
            if ((fVar6 / 60.0) * 64.0 < 2.1474836e+09) {
              iVar3 = (int)((fVar6 / 60.0) * 64.0);
            }
            else {
              iVar3 = (int)((fVar6 / 60.0) * 64.0 - 2.1474836e+09) + -0x80000000;
            }
            FUN_089a3a44(fVar7 * ((60.0 - fVar6) / 60.0) + 0.2,auStack_50,DAT_089d5ec0 + 2000);
            FUN_0885cd60(iVar1,param_1 + iVar2 * 8 + 4,auStack_50,iVar3 << 0x18 | 0xffffff);
            iVar5 = iVar5 + 2;
            iVar1 = iVar1 + 0x30;
          }
          iVar4 = iVar4 + 1;
          if ((int)param_1[0x55] <= iVar4) break;
          iVar2 = param_1[0x54];
        }
      }
      FUN_089a0520(6,0x19f,iVar5,0,local_40);
    }
  }
  return;
}

