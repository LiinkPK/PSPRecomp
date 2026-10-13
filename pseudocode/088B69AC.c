/* Entry 0x088B69AC | file offset 0x000B3984 | FUN_088b69ac | bytes 128 */

void FUN_088b69ac(int param_1)

{
  int iVar1;
  
  DAT_09b4d488 = 0;
  DAT_09b4d48a = 0;
  DAT_09b4d48e = 100;
  DAT_09b4d48c = 100;
  if (DAT_089d733c != (ushort *)0x0) {
    if ((param_1 < 1) || (iVar1 = param_1 + -1, (int)(uint)*DAT_089d733c <= param_1)) {
      iVar1 = 0;
    }
    DAT_09b4d488 = DAT_089d733c[iVar1 * 4 + 1];
    DAT_09b4d48a = DAT_089d733c[iVar1 * 4 + 2];
    DAT_09b4d48c = DAT_089d733c[iVar1 * 4 + 3];
    DAT_09b4d48e = DAT_089d733c[iVar1 * 4 + 4];
  }
  return;
}

