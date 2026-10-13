/* Entry 0x088F1E28 | file offset 0x000EEE00 | FUN_088f1e28 | bytes 532 */

void FUN_088f1e28(uint param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  short *psVar9;
  
  iVar3 = DAT_089d712c;
  psVar9 = (short *)(DAT_089d712c + 0x1dee0);
  *(undefined2 *)(DAT_089d712c + 0x1deec) = 0xffff;
  *(undefined2 *)(iVar3 + 0x1deee) = 0xffff;
  *(undefined2 *)(iVar3 + 0x1def0) = 0xffff;
  *(undefined2 *)(iVar3 + 0x1def2) = 0xffff;
  *(undefined2 *)(iVar3 + 0x1def4) = 0xffff;
  *(undefined2 *)(iVar3 + 0x1def6) = 0xffff;
  *(undefined2 *)(iVar3 + 0x1def8) = 0xffff;
  param_1 = param_1 & 0xff;
  *(undefined2 *)(iVar3 + 0x1defa) = 0xffff;
  if (param_1 == 0) {
    param_1 = FUN_088efcd0();
  }
  if (param_1 != 0) {
    uVar4 = FUN_088c4ce4(0x20);
    *(undefined1 *)(iVar3 + 0x1dee8) = uVar4;
    *psVar9 = -1;
    *(undefined2 *)(iVar3 + 0x1dee2) = 0xffff;
    *(undefined1 *)(iVar3 + 0x1dee6) = 0;
    *(undefined1 *)(iVar3 + 0x1dee9) = 0;
    *(undefined1 *)(iVar3 + 0x1deeb) = 1;
    *(undefined1 *)(iVar3 + 0x1dee7) = 0;
    *(undefined1 *)(iVar3 + 0x1dee4) = 0;
    *(undefined1 *)(iVar3 + 0x1dee5) = 0;
    return;
  }
  uVar5 = FUN_088f0564((int)*(short *)(iVar3 + 0x1dee2));
  *(undefined2 *)(iVar3 + 0x1dee2) = uVar5;
  uVar8 = (uint)*(byte *)(iVar3 + 0x1dee6) + (uint)*(byte *)(iVar3 + 0x1dee4);
  sVar2 = *psVar9;
  if (0xff < uVar8) {
    uVar8 = 0xff;
  }
  *(char *)(iVar3 + 0x1dee6) = (char)uVar8;
  sVar7 = -1;
  if (sVar2 == -1) {
    *(uint *)(DAT_089d726c + 0xa8) = *(uint *)(DAT_089d726c + 0xa8) | 0x4000000;
  }
  else {
    iVar6 = FUN_088c4f74();
    bVar1 = *(byte *)(iVar3 + 0x1dee7);
    if (bVar1 < 2) {
      if (bVar1 == 0) {
LAB_088f1f48:
        sVar7 = *(short *)(iVar6 + 0xe);
      }
      else {
        sVar7 = *(short *)(iVar6 + 0xe);
      }
    }
    else if (bVar1 < 3) {
      sVar7 = *(short *)(iVar6 + 0x10);
    }
    else {
      if (3 < bVar1) goto LAB_088f1f48;
      sVar7 = *(short *)(iVar6 + 0x12);
    }
  }
  if (sVar7 == -1) {
    bVar1 = *(byte *)(iVar3 + 0x1dee8);
    iVar6 = FUN_088c4ce4(0x20);
    if ((int)(uint)bVar1 < iVar6 + -1) {
      *(char *)(iVar3 + 0x1dee8) = *(char *)(iVar3 + 0x1dee8) + '\x01';
      *psVar9 = psVar9[*(byte *)(iVar3 + 0x1dee8) + 0xe];
      if (*psVar9 != 0) goto LAB_088f1fec;
    }
    FUN_088c4d70(0x20,iVar3 + 0x1defc);
    *(undefined1 *)(iVar3 + 0x1dee8) = 0;
    *psVar9 = psVar9[*(byte *)(iVar3 + 0x1dee8) + 0xe];
  }
  else {
    *psVar9 = sVar7;
  }
LAB_088f1fec:
  *(undefined1 *)(iVar3 + 0x1deeb) = 0;
  *(undefined1 *)(iVar3 + 0x1dee7) = 0;
  *(undefined1 *)(iVar3 + 0x1dee4) = 1;
  *(undefined1 *)(iVar3 + 0x1dee5) = 1;
  if (*(short *)(iVar3 + 0x1dee2) != -1) {
    *(char *)(iVar3 + 0x1dee4) = *(char *)(iVar3 + 0x1dee4) + '\x01';
    *(char *)(iVar3 + 0x1dee5) = *(char *)(iVar3 + 0x1dee5) + '\x01';
  }
  return;
}

