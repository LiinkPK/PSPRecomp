/* Entry 0x088A1D2C | file offset 0x0009ED04 | FUN_088a1d2c | bytes 160 */

void FUN_088a1d2c(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_089cace8;
    FUN_088a30d8(param_1,0);
    puVar2 = DAT_09b4d2a8;
    if ((param_2 & 1) != 0) {
      bVar1 = false;
      if ((DAT_09b4d2a8 <= param_1) && (bVar1 = false, param_1 < DAT_09b4d2a8 + 0x100)) {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = DAT_09b4d2a8[0x140];
        DAT_09b4d2a8[0x140] = iVar3 + 1;
        puVar2[iVar3 + 0x100] = param_1;
      }
    }
  }
  return;
}

