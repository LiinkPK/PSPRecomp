/* Entry 0x088F3174 | file offset 0x000F014C | FUN_088f3174 | bytes 436 */

void FUN_088f3174(int param_1,int param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  
  iVar7 = param_1 + param_2 * 0x5bc;
  iVar8 = iVar7 + 0x438;
  FUN_088adfcc(iVar8);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  *(undefined4 *)(iVar7 + 0x43c) = *param_3;
  uVar3 = param_3[3];
  *(undefined4 *)(iVar7 + 0x440) = uVar5;
  *(undefined4 *)(iVar7 + 0x444) = uVar6;
  *(undefined4 *)(iVar7 + 0x448) = uVar3;
  iVar1 = DAT_089d712c;
  psVar9 = (short *)(DAT_089d712c + 0xf6e0);
  iVar10 = 0;
  iVar11 = 0;
  psVar4 = psVar9;
  do {
    iVar2 = FUN_088c0f8c((int)*psVar4);
    if ((iVar2 != 0) && (((*(byte *)(iVar2 + 10) & 0x20) == 0 || (param_4 == '\0')))) {
      *(char *)(iVar8 + iVar11 + 0x18) = (char)psVar4[1];
      iVar10 = iVar10 + *(char *)(iVar8 + iVar11 + 0x18);
    }
    iVar11 = iVar11 + 1;
    psVar4 = psVar4 + 2;
  } while (iVar11 < 0x2ab);
  iVar11 = 0;
  psVar4 = psVar9;
  do {
    iVar2 = iVar8 + iVar11;
    *(char *)(iVar2 + 0x2c3) = (char)psVar4[0x557];
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + *(char *)(iVar2 + 0x2c3);
    psVar4 = psVar4 + 2;
  } while (iVar11 < 0x276);
  iVar11 = 0;
  iVar2 = iVar1 + 0x10b64;
  do {
    if ((*(byte *)(iVar2 + 3) & 2) == 0) {
      *(undefined1 *)(iVar8 + 0x539) = 0xff;
      *(undefined1 *)(iVar8 + 0x53a) = 0xff;
    }
    else {
      *(undefined1 *)(iVar8 + 0x539) = *(undefined1 *)((int)psVar9 + 0x1485);
      *(char *)(iVar8 + 0x53a) = (char)psVar9[0xa43];
    }
    iVar11 = iVar11 + 1;
    psVar9 = psVar9 + 2;
    iVar2 = iVar2 + 4;
    iVar8 = iVar8 + 2;
  } while (iVar11 < 0x40);
  *(undefined4 *)(iVar7 + 0x44c) = *(undefined4 *)(iVar1 + 0x10cc8);
  if (param_2 != 0) {
    FUN_088f2bf4(param_1,iVar10);
  }
  return;
}

