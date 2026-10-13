/* Entry 0x088EE158 | file offset 0x000EB130 | FUN_088ee158 | bytes 524 */

undefined4 FUN_088ee158(int *param_1)

{
  int iVar1;
  float fVar2;
  
  if (((*(uint *)(DAT_089d7f00 + 8) & 2) != 0) &&
     (*(int *)(DAT_089d7f00 + 0x19c) < *(int *)(DAT_089d7f00 + 0x198))) {
    iVar1 = sceMpegGetAtracAu(DAT_089d7f00 + 0x1c,*(undefined4 *)(DAT_089d7f00 + 0xa4),
                              DAT_089d7f00 + 0xf0,0);
    if (iVar1 == 0) {
      iVar1 = sceMpegAtracDecode(DAT_089d7f00 + 0x1c,DAT_089d7f00 + 0xf0,
                                 *(int *)(DAT_089d7f00 + 0x194) +
                                 *param_1 * *(int *)(DAT_089d7f00 + 0x1a0),
                                 *(undefined4 *)(DAT_089d7f00 + 0x18c));
      if (-1 < iVar1) {
        FUN_088ee58c();
        if (*(int *)(DAT_089d7f00 + 0xf4) == -1) {
          fVar2 = *(float *)(DAT_089d7f00 + 0x1b8) + 4180.0;
        }
        else {
          fVar2 = (float)*(int *)(DAT_089d7f00 + 0xf4);
          if (*(int *)(DAT_089d7f00 + 0xf4) < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
        }
        *(float *)(DAT_089d7f00 + 0x1b8) = fVar2;
        if (*(float *)(DAT_089d7f00 + 0x1b8) < 2.1474836e+09) {
          iVar1 = (int)*(float *)(DAT_089d7f00 + 0x1b8);
        }
        else {
          iVar1 = (int)(*(float *)(DAT_089d7f00 + 0x1b8) - 2.1474836e+09) + -0x80000000;
        }
        *(int *)(*(int *)(DAT_089d7f00 + 0x1d4) + *param_1 * 4) = iVar1;
        *param_1 = (*param_1 + 1) % *(int *)(DAT_089d7f00 + 0x198);
        *(int *)(DAT_089d7f00 + 0x19c) = *(int *)(DAT_089d7f00 + 0x19c) + 1;
        *(undefined4 *)(DAT_089d7f00 + 0x18c) = 0;
        FUN_088ee5b8();
      }
    }
    else if (((*(uint *)(DAT_089d7f00 + 0x10) & 4) == 0) &&
            ((*(uint *)(DAT_089d7f00 + 0x10) & 1) != 0)) {
      *(uint *)(DAT_089d7f00 + 0x10) = *(uint *)(DAT_089d7f00 + 0x10) | 4;
    }
  }
  return 0;
}

