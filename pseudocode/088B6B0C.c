/* Entry 0x088B6B0C | file offset 0x000B3AE4 | FUN_088b6b0c | bytes 148 */

void FUN_088b6b0c(int param_1)

{
  int iVar1;
  
  DAT_09b4d490 = 100;
  DAT_09b4d492 = 0;
  DAT_09b4d494 = 0;
  DAT_09b4d496 = 0;
  DAT_09b4d498 = 0;
  if (DAT_089d7340 != (ushort *)0x0) {
    if ((param_1 < 1) || (iVar1 = param_1 + -1, (int)(uint)*DAT_089d7340 <= param_1)) {
      iVar1 = 0;
    }
    DAT_09b4d490 = DAT_089d7340[iVar1 * 5 + 1];
    DAT_09b4d492 = DAT_089d7340[iVar1 * 5 + 2];
    DAT_09b4d494 = DAT_089d7340[iVar1 * 5 + 3];
    DAT_09b4d496 = DAT_089d7340[iVar1 * 5 + 4];
    DAT_09b4d498 = DAT_089d7340[iVar1 * 5 + 5];
  }
  return;
}

