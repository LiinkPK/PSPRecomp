/* Entry 0x08920788 | file offset 0x0011D760 | FUN_08920788 | bytes 120 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08920788(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 2;
  iVar1 = FUN_08920850();
  if (iVar1 < 0xe) {
    if (0xc < iVar1) {
      *(uint *)(_DAT_08b41cc0 + 0x44) = *(uint *)(_DAT_08b41cc0 + 0x44) & 0xfffff7ff;
    }
  }
  else if (iVar1 == 0xf) {
    *(uint *)(_DAT_08b41cc0 + 0x44) = *(uint *)(_DAT_08b41cc0 + 0x44) & 0xffffefff;
  }
  return;
}

