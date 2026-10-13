/* Entry 0x088EE364 | file offset 0x000EB33C | FUN_088ee364 | bytes 552 */

undefined4 FUN_088ee364(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(uint *)(DAT_089d7f00 + 8) & 4) != 0) {
    if (((*param_3 == 0) && (*(int *)(DAT_089d7f00 + 0x19c) < *(int *)(DAT_089d7f00 + 0x198))) &&
       (*param_3 = 1, *param_2 != 0)) {
      FUN_08935524(*(int *)(DAT_089d7f00 + 0x194) + *param_1 * *(int *)(DAT_089d7f00 + 0x1a0),
                   *(int *)(DAT_089d7f00 + 0x100) + (0x50 - *param_2) * 4,*param_2 << 2);
    }
    iVar1 = *param_3;
    while (iVar1 == 1) {
      iVar1 = sceMpegGetPcmAu(DAT_089d7f00 + 0x1c,*(undefined4 *)(DAT_089d7f00 + 0xa8),
                              DAT_089d7f00 + 0xf0,0);
      if (iVar1 != 0) {
        if ((*(uint *)(DAT_089d7f00 + 0x10) & 4) != 0) {
          return 0;
        }
        if ((*(uint *)(DAT_089d7f00 + 0x10) & 1) == 0) {
          return 0;
        }
        *(uint *)(DAT_089d7f00 + 0x10) = *(uint *)(DAT_089d7f00 + 0x10) | 4;
        return 0;
      }
      iVar1 = *param_2;
      iVar3 = iVar1 + 0x50;
      iVar2 = *param_1 * *(int *)(DAT_089d7f00 + 0x1a0) + iVar1 * 4;
      if (iVar3 < 0x800) {
        FUN_08935524(*(int *)(DAT_089d7f00 + 0x194) + iVar2,*(undefined4 *)(DAT_089d7f00 + 0x100),
                     0x140);
      }
      else {
        FUN_088ee58c();
        iVar3 = iVar1 + -0x7b0;
        FUN_08935524(*(int *)(DAT_089d7f00 + 0x194) + iVar2,*(undefined4 *)(DAT_089d7f00 + 0x100),
                     (0x50 - iVar3) * 4);
        *param_1 = (*param_1 + 1) % *(int *)(DAT_089d7f00 + 0x198);
        *param_3 = 0;
        *(int *)(DAT_089d7f00 + 0x19c) = *(int *)(DAT_089d7f00 + 0x19c) + 1;
        FUN_088ee5b8();
      }
      *param_2 = iVar3;
      iVar1 = *param_3;
    }
  }
  return 0;
}

