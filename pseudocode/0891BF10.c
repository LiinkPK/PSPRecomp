/* Entry 0x0891BF10 | file offset 0x00118EE8 | FUN_0891bf10 | bytes 392 */

void FUN_0891bf10(char *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  
  FUN_0891a3e4(param_1 + 0x27e0);
  *(int *)(param_1 + 0x27e0) = (int)*param_1;
  *(int *)(param_1 + 0x27e4) = (int)param_1[1];
  iVar5 = 0;
  pcVar6 = param_1 + 0x48;
  pcVar7 = param_1 + 0x27e8;
  do {
    iVar8 = 0;
    *(undefined4 *)(pcVar7 + 100) = *(undefined4 *)pcVar6;
    pcVar9 = pcVar6 + 0x20;
    pcVar10 = pcVar7;
    do {
      pcVar10[3] = pcVar10[3] | 4;
      cVar2 = FUN_0891e8a4(param_1,iVar5,iVar8);
      *pcVar10 = cVar2;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(pcVar10 + 4) = *(undefined4 *)(pcVar9 + 8);
      pcVar1 = pcVar9 + 0xc;
      pcVar9 = pcVar9 + 0x2e8;
      *(short *)(pcVar10 + 0x10) = (short)*(undefined4 *)pcVar1;
      pcVar10 = pcVar10 + 0x14;
    } while (iVar8 < 5);
    iVar5 = iVar5 + 1;
    pcVar6 = pcVar6 + 0xea8;
    pcVar7 = pcVar7 + 0x68;
  } while (iVar5 < 2);
  if (param_1[2] == '\x01') {
    pcVar6 = param_1 + 0x28b8;
    iVar5 = DAT_089d712c + 0xf58;
    FUN_088ba16c(param_1 + 0x27e0);
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        uVar3 = FUN_0891e8a4(param_1,0,iVar8);
        iVar4 = FUN_088cb164(iVar5,uVar3);
        iVar8 = iVar8 + 1;
        *(int *)(pcVar6 + 0xc) = (int)*(char *)(iVar4 + *(char *)(iVar4 + 0x773) * 0xc6 + 0xca);
        pcVar6 = pcVar6 + 4;
      } while (iVar8 < *(int *)(param_1 + 0x48));
    }
  }
  return;
}

