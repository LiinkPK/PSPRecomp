/* Entry 0x08901D48 | file offset 0x000FED20 | FUN_08901d48 | bytes 348 */

void FUN_08901d48(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 local_20;
  
  sVar1 = **(short **)(param_3 + 0xc);
  piVar6 = (int *)0x0;
  if (sVar1 < 0x13) {
    if (0x11 < sVar1) {
      piVar6 = &DAT_089cdb28;
    }
  }
  else if (sVar1 < 0x14) {
    piVar6 = &DAT_089cdb18;
  }
  if (piVar6 != (int *)0x0) {
    iVar7 = 0;
    iVar3 = *piVar6;
    while (0 < iVar3) {
      if (param_2 == piVar6[iVar7 * 2]) {
        local_20 = param_1;
        puVar2 = (undefined *)FUN_08901c38(&DAT_089cda98,&DAT_089cdaa8,&local_20);
        if (puVar2 == &DAT_089cdaa8) {
          return;
        }
        uVar5 = (uint)*(short *)(piVar6[iVar7 * 2 + 1] + ((int)(puVar2 + -0x89cda98) / 2) * 2);
        puVar4 = (uint *)(DAT_089d726c + (uVar5 >> 5) * 4);
        *puVar4 = *puVar4 | 1 << (uVar5 & 0x1f);
        FUN_08934670("comflag %d\n");
        return;
      }
      iVar7 = iVar7 + 1;
      iVar3 = piVar6[iVar7 * 2];
    }
  }
  return;
}

