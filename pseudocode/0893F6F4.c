/* Entry 0x0893F6F4 | file offset 0x0013C6CC | FUN_0893f6f4 | bytes 240 */

/* WARNING: Removing unreachable block (ram,0x0893f7a4) */

short * FUN_0893f6f4(short *param_1,short param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  
  iVar9 = 0;
  psVar3 = param_1 + 1;
  iVar2 = 4;
  psVar7 = param_1 + 2;
  iVar6 = 6;
  psVar5 = param_1 + 3;
  uVar1 = 0;
  psVar8 = param_1;
  while( true ) {
    uVar4 = uVar1;
    if (*psVar8 == param_2) {
      return (short *)((int)param_1 + iVar9);
    }
    if (*psVar3 == param_2) {
      return param_1 + uVar4 + 1;
    }
    if (*psVar7 == param_2) {
      return (short *)((int)param_1 + iVar2);
    }
    if (*psVar5 == param_2) break;
    iVar9 = iVar9 + 8;
    psVar8 = psVar8 + 4;
    psVar3 = psVar3 + 4;
    iVar2 = iVar2 + 8;
    psVar7 = psVar7 + 4;
    iVar6 = iVar6 + 8;
    psVar5 = psVar5 + 4;
    uVar1 = uVar4 + 4;
    if (param_3 - 4 < uVar4 + 4) {
      uVar4 = uVar4 + 5;
      iVar2 = uVar4 * 2;
      if (uVar4 <= param_3) {
        psVar8 = param_1 + uVar4;
        do {
          uVar4 = uVar4 + 1;
          if (*psVar8 == param_2) {
            return (short *)((int)param_1 + iVar2);
          }
          iVar2 = iVar2 + 2;
          psVar8 = psVar8 + 1;
        } while (uVar4 <= param_3);
      }
      return (short *)0x0;
    }
  }
  return (short *)((int)param_1 + iVar6);
}

