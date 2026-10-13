/* Entry 0x088EF1E0 | file offset 0x000EC1B8 | FUN_088ef1e0 | bytes 1144 */

undefined4 FUN_088ef1e0(void)

{
  int iVar1;
  float fVar2;
  
  if ((((*(uint *)(DAT_089d7f00 + 0x140) & 0x10) != 0) &&
      ((*(uint *)(DAT_089d7f00 + 0x140) & 0x20) == 0)) &&
     (iVar1 = FUN_088ee5e0(*(undefined4 *)(DAT_089d7f00 + 0x144)), iVar1 != 0)) {
    if (*(int *)(DAT_089d7f00 + 0x188) < *(int *)(DAT_089d7f00 + 0x184) + -1) {
      *(int *)(DAT_089d7f00 + 0x188) = *(int *)(DAT_089d7f00 + 0x188) + 1;
    }
    else {
      if (0 < *(int *)(DAT_089d7f00 + 0x174)) {
        if ((*(uint *)(DAT_089d7f00 + 0x10) & 0x20) == 0) {
          iVar1 = *(int *)(*(int *)(DAT_089d7f00 + 0x1d0) + *(int *)(DAT_089d7f00 + 0x178) * 4);
          fVar2 = (float)iVar1;
          if (iVar1 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          *(float *)(DAT_089d7f00 + 0x1b0) = fVar2;
          fVar2 = *(float *)(DAT_089d7f00 + 0x1b8) - fVar2;
          if ((fVar2 < -6000.0) || (6000.0 < fVar2)) {
            if (fVar2 <= 6000.0) {
              return 0;
            }
            *(undefined4 *)(DAT_089d7f00 + 0x188) = 0;
            *(int *)(DAT_089d7f00 + 0x174) = *(int *)(DAT_089d7f00 + 0x174) + -1;
            *(int *)(DAT_089d7f00 + 0x178) =
                 (*(int *)(DAT_089d7f00 + 0x178) + 1) % *(int *)(DAT_089d7f00 + 0x170);
            *(float *)(DAT_089d7f00 + 0x1d8) = *(float *)(DAT_089d7f00 + 0x1d8) + 3000.0;
            iVar1 = *(int *)(DAT_089d7f00 + 0x174);
            while (0 < iVar1) {
              iVar1 = *(int *)(*(int *)(DAT_089d7f00 + 0x1d0) + *(int *)(DAT_089d7f00 + 0x178) * 4);
              fVar2 = (float)iVar1;
              if (iVar1 < 0) {
                fVar2 = fVar2 + 4.2949673e+09;
              }
              *(float *)(DAT_089d7f00 + 0x1b0) = fVar2;
              *(float *)(DAT_089d7f00 + 0x1d8) = *(float *)(DAT_089d7f00 + 0x1d8) + 3000.0;
              if (*(float *)(DAT_089d7f00 + 0x1b8) - fVar2 <= 6000.0) break;
              *(int *)(DAT_089d7f00 + 0x174) = *(int *)(DAT_089d7f00 + 0x174) + -1;
              *(int *)(DAT_089d7f00 + 0x178) =
                   (*(int *)(DAT_089d7f00 + 0x178) + 1) % *(int *)(DAT_089d7f00 + 0x170);
              iVar1 = *(int *)(DAT_089d7f00 + 0x174);
            }
          }
          else {
            *(undefined4 *)(DAT_089d7f00 + 0x188) = 0;
            *(int *)(DAT_089d7f00 + 0x174) = *(int *)(DAT_089d7f00 + 0x174) + -1;
            *(int *)(DAT_089d7f00 + 0x178) =
                 (*(int *)(DAT_089d7f00 + 0x178) + 1) % *(int *)(DAT_089d7f00 + 0x170);
            *(float *)(DAT_089d7f00 + 0x1d8) = *(float *)(DAT_089d7f00 + 0x1d8) + 3000.0;
          }
        }
        else {
          *(undefined4 *)(DAT_089d7f00 + 0x188) = 0;
          *(int *)(DAT_089d7f00 + 0x174) = *(int *)(DAT_089d7f00 + 0x174) + -1;
          *(int *)(DAT_089d7f00 + 0x178) =
               (*(int *)(DAT_089d7f00 + 0x178) + 1) % *(int *)(DAT_089d7f00 + 0x170);
        }
        if (*(char *)(DAT_089d7f00 + 2) != '\0') {
          return 1;
        }
        *(undefined1 *)(DAT_089d7f00 + 2) = 1;
        return 1;
      }
      if (((*(uint *)(DAT_089d7f00 + 0x10) & 0x40) == 0) &&
         ((*(uint *)(DAT_089d7f00 + 0x10) & 2) != 0)) {
        *(uint *)(DAT_089d7f00 + 0x10) = *(uint *)(DAT_089d7f00 + 0x10) | 0x40;
      }
      if (((((*(uint *)(DAT_089d7f00 + 0x10) & 0x40) != 0) &&
           ((*(uint *)(DAT_089d7f00 + 0x10) & 0x10) == 0)) &&
          ((*(uint *)(DAT_089d7f00 + 0x10) & 0x40) != 0)) &&
         ((*(uint *)(DAT_089d7f00 + 0x10) & 0x20) != 0)) {
        if (*(int *)(DAT_089d7f00 + 0xc) == -1) {
          *(undefined4 *)(DAT_089d7f00 + 0x10) = *(undefined4 *)(DAT_089d7f00 + 0x14);
          *(undefined4 *)(DAT_089d7f00 + 0x1b0) = 0;
          *(undefined4 *)(DAT_089d7f00 + 0x1b4) = 0;
          *(undefined4 *)(DAT_089d7f00 + 0x1b8) = 0;
          *(undefined4 *)(DAT_089d7f00 + 0x1d8) = 0;
          *(undefined4 *)(DAT_089d7f00 + 0x1dc) = 0;
        }
        else {
          *(int *)(DAT_089d7f00 + 0xc) = *(int *)(DAT_089d7f00 + 0xc) + -1;
          if (*(int *)(DAT_089d7f00 + 0xc) < 0) {
            *(uint *)(DAT_089d7f00 + 0x10) = *(uint *)(DAT_089d7f00 + 0x10) | 0x10;
            *(undefined4 *)(DAT_089d7f00 + 0x140) = 0x40;
          }
          else {
            *(undefined4 *)(DAT_089d7f00 + 0x10) = *(undefined4 *)(DAT_089d7f00 + 0x14);
            *(undefined4 *)(DAT_089d7f00 + 0x1b0) = 0;
            *(undefined4 *)(DAT_089d7f00 + 0x1b4) = 0;
            *(undefined4 *)(DAT_089d7f00 + 0x1b8) = 0;
            *(undefined4 *)(DAT_089d7f00 + 0x1d8) = 0;
            *(undefined4 *)(DAT_089d7f00 + 0x1dc) = 0;
          }
        }
      }
    }
  }
  return 0;
}

