/* Entry 0x088F2FE0 | file offset 0x000EFFB8 | FUN_088f2fe0 | bytes 404 */

void FUN_088f2fe0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  byte bVar6;
  short *psVar7;
  int iVar8;
  
  iVar3 = FUN_088f2d8c(param_1,0);
  iVar2 = DAT_089d712c;
  if (iVar3 != 0) {
    psVar7 = (short *)(DAT_089d712c + 0xf6e0);
    iVar3 = param_1 + 0x438;
    iVar8 = 0;
    psVar5 = psVar7;
    do {
      iVar4 = FUN_088c0f8c((int)*psVar5);
      if (iVar4 != 0) {
        cVar1 = *(char *)(iVar3 + iVar8 + 0x18);
        if ((*(byte *)(iVar4 + 10) & 0x20) == 0) {
          *(char *)(psVar5 + 1) = cVar1;
        }
        else if (param_2 == '\0') {
          *(char *)(psVar5 + 1) = cVar1;
        }
        else {
          iVar4 = (int)(char)psVar5[1] + (int)cVar1;
          if (99 < iVar4) {
            iVar4 = 99;
          }
          *(char *)(psVar5 + 1) = (char)iVar4;
        }
      }
      iVar8 = iVar8 + 1;
      psVar5 = psVar5 + 2;
    } while (iVar8 < 0x2ab);
    iVar8 = 0;
    psVar5 = psVar7;
    do {
      iVar4 = iVar3 + iVar8;
      iVar8 = iVar8 + 1;
      *(undefined1 *)(psVar5 + 0x557) = *(undefined1 *)(iVar4 + 0x2c3);
      psVar5 = psVar5 + 2;
    } while (iVar8 < 0x276);
    iVar8 = 0;
    iVar4 = iVar2 + 0x10b64;
    do {
      if (*(char *)(iVar3 + 0x539) == -1) {
        if (*(char *)(iVar3 + 0x53a) != -1) {
          bVar6 = *(byte *)(iVar4 + 3);
          goto LAB_088f3108;
        }
      }
      else {
        bVar6 = *(byte *)(iVar4 + 3);
LAB_088f3108:
        *(byte *)(iVar4 + 3) = bVar6 | 2;
        *(undefined1 *)((int)psVar7 + 0x1485) = *(undefined1 *)(iVar3 + 0x539);
        *(undefined1 *)(psVar7 + 0xa43) = *(undefined1 *)(iVar3 + 0x53a);
      }
      iVar8 = iVar8 + 1;
      psVar7 = psVar7 + 2;
      iVar3 = iVar3 + 2;
      iVar4 = iVar4 + 4;
    } while (iVar8 < 0x40);
    *(undefined4 *)(iVar2 + 0x10cc8) = *(undefined4 *)(param_1 + 0x44c);
    FUN_088f2dd8(param_1,0);
  }
  return;
}

