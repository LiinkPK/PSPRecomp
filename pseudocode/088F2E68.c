/* Entry 0x088F2E68 | file offset 0x000EFE40 | FUN_088f2e68 | bytes 376 */

undefined4 FUN_088f2e68(int param_1)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  
  iVar5 = param_1 + 0x438;
  uVar4 = 0;
  FUN_088adfcc(iVar5);
  iVar1 = DAT_089d712c;
  psVar6 = (short *)(DAT_089d712c + 0xf6e0);
  iVar7 = 0;
  psVar3 = psVar6;
  do {
    *(char *)(iVar5 + iVar7 + 0x18) = (char)psVar3[1];
    if (((char)psVar3[1] != '\0') && (iVar2 = FUN_088c0f8c((int)*psVar3), iVar2 != 0)) {
      if ((*(byte *)(iVar2 + 10) & 0x20) == 0) {
        *(undefined1 *)(psVar3 + 1) = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    iVar7 = iVar7 + 1;
    psVar3 = psVar3 + 2;
  } while (iVar7 < 0x2ab);
  iVar7 = 0;
  psVar3 = psVar6;
  do {
    *(char *)(iVar5 + iVar7 + 0x2c3) = (char)psVar3[0x557];
    if ((char)psVar3[0x557] != '\0') {
      *(undefined1 *)(psVar3 + 0x557) = 0;
    }
    iVar7 = iVar7 + 1;
    psVar3 = psVar3 + 2;
  } while (iVar7 < 0x276);
  iVar7 = 0;
  iVar2 = iVar1 + 0x10b64;
  do {
    if ((*(byte *)(iVar2 + 3) & 2) == 0) {
      *(undefined1 *)(iVar5 + 0x539) = 0xff;
      *(undefined1 *)(iVar5 + 0x53a) = 0xff;
    }
    else {
      *(undefined1 *)(iVar5 + 0x539) = *(undefined1 *)((int)psVar6 + 0x1485);
      *(char *)(iVar5 + 0x53a) = (char)psVar6[0xa43];
      *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) & 0xfd;
      *(undefined1 *)((int)psVar6 + 0x1485) = 0;
      *(undefined1 *)(psVar6 + 0xa43) = 0;
    }
    iVar7 = iVar7 + 1;
    psVar6 = psVar6 + 2;
    iVar2 = iVar2 + 4;
    iVar5 = iVar5 + 2;
  } while (iVar7 < 0x40);
  *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(iVar1 + 0x10cc8);
  *(undefined4 *)(iVar1 + 0x10cc8) = 0;
  return uVar4;
}

