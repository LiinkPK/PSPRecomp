/* Entry 0x088FABA4 | file offset 0x000F7B7C | FUN_088faba4 | bytes 360 */

void FUN_088faba4(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  
  iVar3 = param_1 * 0x1060;
  pcVar9 = (char *)(&DAT_09afb8a0 + param_1 * 0x418);
  iVar6 = 0;
  iVar7 = 0x20c;
  do {
    uVar8 = ((undefined4 *)(param_2 + iVar6))[1];
    *(undefined4 *)(pcVar9 + iVar6) = *(undefined4 *)(param_2 + iVar6);
    *(undefined4 *)(pcVar9 + iVar6 + 4) = uVar8;
    iVar7 = iVar7 + -1;
    iVar6 = iVar6 + 8;
  } while (iVar7 != 0);
  cVar1 = (&DAT_09afc013)[iVar3];
  iVar6 = 0;
  do {
    uVar5 = FUN_088b7b18(pcVar9 + cVar1 * 0xc6 + 0x10,iVar6);
    iVar7 = FUN_088c7f78(uVar5);
    if (iVar7 == 1) {
      uVar8 = FUN_088c7f3c(param_1,uVar5 & 0x1f);
      FUN_088b765c(pcVar9 + cVar1 * 0xc6 + 0x10,iVar6,uVar8);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  (&DAT_09afc7d4)[param_1 * 0x830] = 0;
  uVar4 = FUN_088fb934((int)*pcVar9,(int)(char)(&DAT_09afc014)[iVar3],0);
  cVar2 = *pcVar9;
  (&DAT_09afc7da)[param_1 * 0x830] = uVar4;
  (&DAT_09afc8f8)[iVar3] = cVar2;
  (&DAT_09afc8f9)[iVar3] = (&DAT_09afc014)[iVar3];
  uVar4 = FUN_088fb934((int)pcVar9[cVar1 * 0xc6 + 200],(int)pcVar9[cVar1 * 0xc6 + 0xc9],1);
  (&DAT_09afc7de)[param_1 * 0x830] = uVar4;
  (&DAT_09afc8fa)[iVar3] = pcVar9[cVar1 * 0xc6 + 200];
  (&DAT_09afc8fb)[iVar3] = pcVar9[cVar1 * 0xc6 + 0xc9];
  return;
}

