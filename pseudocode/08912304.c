/* Entry 0x08912304 | file offset 0x0010F2DC | FUN_08912304 | bytes 216 */

void FUN_08912304(undefined4 param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 0;
  while (iVar3 = FUN_089121a8(param_1,iVar3), iVar3 != 0) {
    if (*(short *)(iVar3 + 6) == 1) {
      iVar1 = FUN_088bbd8c(*(undefined4 *)(iVar3 + 0x1c));
      psVar2 = (short *)FUN_08847108(*(undefined1 *)(iVar1 + 2),0);
      iVar1 = FUN_088444d4(DAT_089d4960,(int)*psVar2);
      if (iVar1 != 0) {
        FUN_08844520(DAT_089d4960,(int)*psVar2);
      }
    }
    else if (*(short *)(iVar3 + 6) == 5) {
      FUN_08844520(DAT_089d4960,(int)*(short *)(iVar3 + 0x1e));
    }
  }
  return;
}

