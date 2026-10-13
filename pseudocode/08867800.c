/* Entry 0x08867800 | file offset 0x000647D8 | FUN_08867800 | bytes 136 */

void FUN_08867800(void)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_c = 0;
  iVar1 = sceImposeGetLanguageMode(&local_10,&local_c);
  if (-1 < iVar1) {
    if ((DAT_09b26ac4 & 2) != 0) {
      DAT_089d5ecc = 1;
    }
    if (local_c == 1) {
      DAT_089d5f1d = 1;
    }
  }
  iVar1 = sceUtilityGetSystemParamInt(4,&local_8);
  if (iVar1 == 0) {
    DAT_089d5f24 = local_8;
  }
  return;
}

