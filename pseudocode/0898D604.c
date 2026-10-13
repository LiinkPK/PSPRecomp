/* Entry 0x0898D604 | file offset 0x0018A5DC | FUN_0898d604 | bytes 452 */

undefined4 FUN_0898d604(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
  bVar1 = *(byte *)(param_2 + 0x91);
  iVar2 = (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 255.0);
  iVar2 = (int)(iVar2 + ((uint)(iVar2 >> 6) >> 0x1a)) >> 6;
  if (bVar1 < 2) {
    if ((bVar1 != 0) &&
       (DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3,
       0x31 < (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 101.0))) {
      *(undefined1 *)(param_1 + 0x5b) = 1;
    }
  }
  else if (bVar1 < 3) {
    DAT_089da120 = DAT_089da120 * 0x343fd + 0x269ec3;
    if (0x31 < (int)(((float)(DAT_089da120 >> 0x10 & 0x7fff) / 32767.0) * 101.0)) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
  }
  else if (bVar1 < 4) {
    if (iVar2 < 2) {
      if ((-1 < iVar2) && (0 < iVar2)) {
        *(undefined1 *)(param_1 + 0x5b) = 1;
      }
    }
    else if (iVar2 < 3) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
    else if (iVar2 < 4) {
      *(undefined1 *)(param_1 + 0x5b) = 1;
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
  }
  return 1;
}

