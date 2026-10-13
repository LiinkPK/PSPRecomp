/* Entry 0x088BBAB4 | file offset 0x000B8A8C | FUN_088bbab4 | bytes 644 */

void FUN_088bbab4(char *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  short *psVar9;
  
  iVar3 = FUN_088bbd8c(param_2);
  pcVar7 = param_1 + 0x10;
  FUN_088cba10(param_1);
  FUN_088cba54(param_1,*(undefined1 *)(iVar3 + 2));
  if (param_3 == -1) {
    param_1[1] = *(char *)(iVar3 + 5);
  }
  else {
    param_1[1] = (char)param_3;
  }
  FUN_088cbddc(param_1);
  FUN_088cba74(param_1,*(undefined1 *)(iVar3 + 8));
  if (*(short *)(iVar3 + 10) != -1) {
    uVar4 = FUN_088bca2c();
    FUN_088bbe5c(uVar4,pcVar7);
  }
  if (*(short *)(iVar3 + 0xc) != -1) {
    uVar4 = FUN_088bca50();
    FUN_088bc17c(uVar4,pcVar7);
  }
  iVar8 = 0;
  psVar9 = (short *)(iVar3 + 0xe);
  do {
    if (*psVar9 != -1) {
      uVar4 = FUN_088bca74();
      FUN_088bc4c0(uVar4,pcVar7);
    }
    iVar8 = iVar8 + 1;
    psVar9 = psVar9 + 1;
  } while (iVar8 < 2);
  if (*(short *)(iVar3 + 0x12) != -1) {
    uVar4 = FUN_088bca98((int)*(short *)(iVar3 + 0x12),(int)*param_1,param_1[1],0,param_4);
    FUN_088bc58c(uVar4,pcVar7);
  }
  if (*(short *)(iVar3 + 0x14) == -1) {
    cVar1 = param_1[0x773];
  }
  else {
    uVar4 = FUN_088bcb08();
    FUN_088bc648(uVar4,pcVar7);
    cVar1 = param_1[0x773];
  }
  pcVar5 = pcVar7 + cVar1 * 0xc6;
  if (*(short *)(iVar3 + 0x18) != -1) {
    FUN_088b766c(pcVar5,0,(int)*(short *)(iVar3 + 0x18));
    pcVar5 = pcVar7 + param_1[0x773] * 0xc6;
  }
  if (*(short *)(iVar3 + 0x1a) != -1) {
    FUN_088b765c(pcVar5,(int)*(char *)(iVar3 + 9),(int)*(short *)(iVar3 + 0x1a));
    pcVar5 = pcVar7 + param_1[0x773] * 0xc6;
  }
  if (*(char *)(iVar3 + 0x16) != -1) {
    FUN_088b767c(pcVar5,*(char *)(iVar3 + 0x16));
    pcVar5 = pcVar7 + param_1[0x773] * 0xc6;
  }
  cVar2 = FUN_088b7cc8(pcVar5);
  cVar1 = param_1[0x773];
  param_1[0x775] = cVar2;
  bVar6 = 0xff;
  if ((*(byte *)(iVar3 + 0x23) & 0x3f) != 0) {
    bVar6 = *(byte *)(iVar3 + 0x23) & 0x3f;
  }
  pcVar7[cVar1 * 0xc6 + 0xb8] = bVar6;
  pcVar7[cVar1 * 0xc6 + 0xb9] = (char)((int)(*(byte *)(iVar3 + 0x23) & 0xc0) >> 6);
  return;
}

