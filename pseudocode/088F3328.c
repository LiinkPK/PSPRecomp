/* Entry 0x088F3328 | file offset 0x000F0300 | FUN_088f3328 | bytes 392 */

void FUN_088f3328(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = FUN_088f2d8c();
  iVar1 = DAT_089d712c;
  if (iVar3 != 0) {
    iVar4 = param_1 + param_2 * 0x5bc;
    iVar6 = DAT_089d712c + 0xf6e0;
    iVar5 = iVar4 + 0x438;
    iVar8 = 0;
    iVar3 = iVar6;
    do {
      iVar7 = (int)*(char *)(iVar3 + 2) + (int)*(char *)(iVar5 + iVar8 + 0x18);
      if (99 < iVar7) {
        iVar7 = 99;
      }
      *(char *)(iVar3 + 2) = (char)iVar7;
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar8 < 0x2ab);
    iVar8 = 0;
    iVar3 = iVar6;
    do {
      iVar7 = (int)*(char *)(iVar3 + 0xaae) + (int)*(char *)(iVar5 + iVar8 + 0x2c3);
      if (99 < iVar7) {
        iVar7 = 99;
      }
      *(char *)(iVar3 + 0xaae) = (char)iVar7;
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar8 < 0x276);
    iVar3 = 0;
    iVar8 = iVar1 + 0x10b64;
    do {
      if ((*(byte *)(iVar8 + 3) & 2) == 0) {
        if (*(char *)(iVar5 + 0x539) == -1) {
          if (*(char *)(iVar5 + 0x53a) == -1) goto LAB_088f3458;
          bVar2 = *(byte *)(iVar8 + 3);
        }
        else {
          bVar2 = *(byte *)(iVar8 + 3);
        }
        *(byte *)(iVar8 + 3) = bVar2 | 2;
        *(undefined1 *)(iVar6 + 0x1485) = *(undefined1 *)(iVar5 + 0x539);
        *(undefined1 *)(iVar6 + 0x1486) = *(undefined1 *)(iVar5 + 0x53a);
      }
LAB_088f3458:
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 4;
      iVar8 = iVar8 + 4;
      iVar5 = iVar5 + 2;
    } while (iVar3 < 0x40);
    iVar3 = *(int *)(iVar1 + 0x10cc8) + *(int *)(iVar4 + 0x44c);
    *(int *)(iVar1 + 0x10cc8) = iVar3;
    if (99999999 < iVar3) {
      *(undefined4 *)(iVar1 + 0x10cc8) = 99999999;
    }
    FUN_088f2dd8(param_1,param_2);
  }
  return;
}

