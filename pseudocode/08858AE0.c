/* Entry 0x08858AE0 | file offset 0x00055AB8 | FUN_08858ae0 | bytes 472 */

void FUN_08858ae0(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  bVar1 = *(byte *)(param_2 + 0x3d);
  fVar3 = *(float *)(DAT_089d69e0 + 0x18);
  fVar4 = 0.0;
  bVar2 = bVar1;
  if (bVar1 < 3) {
    if (bVar1 != 0) {
      if (bVar1 < 2) {
        *(undefined1 *)(param_2 + 0x3d) = 2;
        bVar2 = *(byte *)(param_2 + 0x3d);
      }
      else {
        fVar6 = *(float *)(param_2 + 0x34) + fVar3 * 0.2;
        *(float *)(param_2 + 0x34) = fVar6;
        if (1.0 < *(float *)(param_2 + 0x20)) {
          fVar5 = DAT_089d4dc4 * (1.0 - *(float *)(param_2 + 0x40) / DAT_089d4dc0) + 1.0;
          *(float *)(param_2 + 0x20) = fVar5;
          if (fVar5 < 1.0) {
            *(undefined4 *)(param_2 + 0x20) = 0x3f800000;
          }
        }
        else {
          *(byte *)(param_2 + 0x3f) = *(byte *)(param_2 + 0x3f) & 0xfb;
        }
        fVar5 = *(float *)(param_2 + 0x24) + fVar3 * fVar6;
        *(float *)(param_2 + 0x24) = fVar5;
        if (0.0 < fVar5) {
          *(char *)(param_2 + 0x3e) = *(char *)(param_2 + 0x3e) + '\x01';
          if (1 < *(byte *)(param_2 + 0x3e)) {
            *(undefined1 *)(param_2 + 0x3d) = 3;
            bVar2 = *(byte *)(param_2 + 0x3d);
          }
          *(undefined4 *)(param_2 + 0x24) = 0;
          fVar5 = 0.0;
          *(float *)(param_2 + 0x34) = fVar6 * -0.8;
        }
        *(float *)(param_2 + 0x28) = fVar5;
        *(float *)(param_2 + 0x2c) = fVar5;
        *(float *)(param_2 + 0x30) = fVar5;
      }
    }
  }
  else if (bVar1 < 4) {
    if ((*(byte *)(param_2 + 0x3f) & 1) == 0) {
      fVar6 = 30.0;
    }
    else {
      fVar6 = 60.0;
    }
    if (fVar6 <= *(float *)(param_2 + 0x40)) {
      *(undefined4 *)(param_2 + 0x24) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      *(undefined4 *)(param_2 + 0x30) = 0;
      *(undefined1 *)(param_2 + 0x3d) = 4;
      bVar2 = *(byte *)(param_2 + 0x3d);
    }
  }
  else if ((bVar1 < 5) && (8.0 <= *(float *)(param_2 + 0x40))) {
    *(undefined1 *)(param_2 + 0x3d) = 0;
    bVar2 = *(byte *)(param_2 + 0x3d);
  }
  if (bVar1 == bVar2) {
    fVar4 = *(float *)(param_2 + 0x40) + fVar3;
  }
  *(float *)(param_2 + 0x40) = fVar4;
  return;
}

