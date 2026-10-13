/* Entry 0x088216E0 | file offset 0x0001E6B8 | FUN_088216e0 | bytes 280 */

void FUN_088216e0(int param_1)

{
  char cVar1;
  char cVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  psVar3 = *(short **)(*(int *)(param_1 + 8) + 0x20);
  if ((psVar3 != (short *)0x0) && (iVar5 = 0, '\0' < *(char *)(param_1 + 1))) {
    iVar4 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0xc) + iVar4;
      FUN_08821864(param_1,iVar6);
      cVar1 = *(char *)(iVar6 + 1);
      cVar2 = (char)(int)(*(float *)(*(int *)(param_1 + 4) + 0x3b0) * 100.0);
      if (cVar1 < cVar2) {
        cVar2 = cVar1;
      }
      uVar7 = (cVar2 * 0xff) / 100;
      FUN_088372f0(*(int *)(param_1 + 4),(int)*psVar3,
                   uVar7 << 0x18 | uVar7 << 0x10 | uVar7 << 8 | uVar7);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 3;
      psVar3 = psVar3 + 0x10;
    } while (iVar5 < *(char *)(param_1 + 1));
  }
  return;
}

