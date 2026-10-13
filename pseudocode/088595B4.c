/* Entry 0x088595B4 | file offset 0x0005658C | FUN_088595b4 | bytes 656 */

void FUN_088595b4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = *(int *)(param_1 + 0x2a4);
  if (iVar3 != 0) {
    iVar2 = 0;
    fVar8 = *(float *)(DAT_089d69e0 + 0x18);
    iVar4 = *(int *)(param_1 + 0x2a0);
    if (0 < iVar3) {
      do {
        iVar5 = param_1 + iVar4 * 0x40;
        bVar1 = *(byte *)(iVar5 + 0x28);
        bVar6 = bVar1;
        if (bVar1 < 2) {
          if ((bVar1 != 0) && (10.0 <= *(float *)(iVar5 + 0x54))) {
            *(undefined1 *)(iVar5 + 0x28) = 2;
            bVar6 = *(byte *)(iVar5 + 0x28);
          }
        }
        else if (bVar1 < 3) {
          if (40.0 <= *(float *)(iVar5 + 0x54)) {
            *(undefined1 *)(iVar5 + 0x28) = 3;
            bVar6 = *(byte *)(iVar5 + 0x28);
          }
        }
        else if ((bVar1 < 4) && (6.0 <= *(float *)(iVar5 + 0x54))) {
          *(undefined1 *)(iVar5 + 0x28) = 0;
          bVar6 = *(byte *)(iVar5 + 0x28);
        }
        if (bVar1 == bVar6) {
          fVar7 = *(float *)(iVar5 + 0x54) + fVar8;
        }
        else {
          fVar7 = 0.0;
        }
        bVar1 = *(byte *)(iVar5 + 0x28);
        *(float *)(iVar5 + 0x54) = fVar7;
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            if (iVar4 == *(int *)(param_1 + 0x2a0)) {
              iVar5 = *(int *)(param_1 + 0x2a0) + 1;
              *(int *)(param_1 + 0x2a0) = iVar5;
              if (9 < iVar5) {
                *(undefined4 *)(param_1 + 0x2a0) = 0;
              }
              *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + -1;
            }
          }
          else {
            *(float *)(iVar5 + 0x40) = *(float *)(iVar5 + 0x40) + fVar8 * 4.0;
            *(uint *)(iVar5 + 0x50) =
                 (int)((*(float *)(iVar5 + 0x54) / 10.0) * 255.0) << 0x18 |
                 *(uint *)(iVar5 + 0x50) & 0xffffff;
          }
        }
        else if (bVar1 < 3) {
          *(uint *)(iVar5 + 0x50) = *(uint *)(iVar5 + 0x50) | 0xff000000;
          *(float *)(iVar5 + 0x40) = *(float *)(iVar5 + 0x40) + fVar8 * 0.5;
        }
        else if (bVar1 < 4) {
          *(float *)(iVar5 + 0x40) = *(float *)(iVar5 + 0x40) + fVar8 * 4.0;
          *(uint *)(iVar5 + 0x50) =
               (int)(((6.0 - *(float *)(iVar5 + 0x54)) / 6.0) * 255.0) << 0x18 |
               *(uint *)(iVar5 + 0x50) & 0xffffff;
        }
        iVar4 = iVar4 + 1;
        if (9 < iVar4) {
          iVar4 = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  return;
}

