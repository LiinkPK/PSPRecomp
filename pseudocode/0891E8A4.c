/* Entry 0x0891E8A4 | file offset 0x0011B87C | FUN_0891e8a4 | bytes 432 */

uint FUN_0891e8a4(int param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  psVar1 = (short *)(param_1 + param_2 * 0xea8 + 0x68 + param_3 * 0x2e8);
  uVar3 = 0xffffffff;
  if (*psVar1 != -1) {
    iVar2 = -1;
    switch(*psVar1) {
    case 0:
      uVar3 = (uint)(char)psVar1[8];
      break;
    case 1:
      iVar2 = (int)psVar1[8];
      break;
    case 2:
      iVar2 = (int)psVar1[8];
      break;
    case 3:
      iVar4 = FUN_088470b8(*(undefined4 *)(psVar1 + 8));
      uVar3 = (uint)*(char *)(iVar4 + 6);
      break;
    case 4:
      uVar3 = (uint)(char)psVar1[8];
      break;
    case 5:
      uVar3 = (uint)(char)psVar1[8];
      break;
    case 6:
      uVar3 = (uint)*(char *)(DAT_089d7f38 + param_2 * 0x6a68 + param_3 * 0x1548 + 0x70c);
      break;
    case 7:
      uVar3 = (uint)psVar1[8];
      break;
    case 8:
      iVar4 = DAT_089d712c + 0x1fecc + *(int *)(psVar1 + 8) * 0x10a8;
      psVar1 = (short *)FUN_088f51ac(iVar4);
      if (psVar1 == (short *)0x0) {
        iVar4 = FUN_088f51dc(iVar4);
        if (iVar4 != 0) {
          uVar3 = (uint)*(short *)(iVar4 + param_3 * 0x2d8);
        }
      }
      else {
        uVar3 = (uint)*psVar1;
      }
      break;
    case 9:
      uVar3 = 0x17;
    }
    if (iVar2 != -1) {
      iVar2 = FUN_088bbd8c(iVar2);
      uVar3 = (uint)*(byte *)(iVar2 + 2);
    }
  }
  return uVar3;
}

