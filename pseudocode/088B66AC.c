/* Entry 0x088B66AC | file offset 0x000B3684 | FUN_088b66ac | bytes 564 */

void FUN_088b66ac(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    DAT_089d7300 = FUN_088820d8(param_1[1]);
    FUN_08935524(DAT_089d7300,*param_1,param_1[1]);
    DAT_089d7304 = DAT_089d7300 + 0x10;
    DAT_089d7308 = DAT_089d7304 + *(int *)(DAT_089d7300 + 8) * 0x14;
  }
  if (param_1[2] != 0) {
    DAT_089d730c = FUN_088820d8(param_1[3]);
    FUN_08935524(DAT_089d730c,param_1[2],param_1[3]);
    DAT_089d7310 = DAT_089d730c + 0x10;
    iVar2 = 0;
    if (0 < *(int *)(DAT_089d730c + 8)) {
      iVar1 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(int *)(DAT_089d7310 + iVar1 + 4) = DAT_089d730c + *(int *)(DAT_089d7310 + iVar1 + 4);
        iVar1 = iVar1 + 8;
      } while (iVar2 < *(int *)(DAT_089d730c + 8));
    }
  }
  if (param_1[4] != 0) {
    DAT_089d7314 = FUN_088820d8(param_1[5]);
    FUN_08935524(DAT_089d7314,param_1[4],param_1[5]);
    DAT_089d7318 = DAT_089d7314 + 0x10;
    DAT_089d731c = DAT_089d7318 + *(int *)(DAT_089d7314 + 8) * 0x14;
  }
  if (param_1[6] != 0) {
    DAT_089d7320 = FUN_088820d8(param_1[7]);
    FUN_08935524(DAT_089d7320,param_1[6],param_1[7]);
    DAT_089d7324 = DAT_089d7320 + 0x20;
    DAT_089d7328 = DAT_089d7324 + *(int *)(DAT_089d7320 + 8) * 0xc;
    DAT_089d732c = DAT_089d7328 + *(int *)(DAT_089d7320 + 0xc) * 0xc;
  }
  if (param_1[8] != 0) {
    DAT_089d7330 = FUN_088820d8(param_1[9]);
    FUN_08935524(DAT_089d7330,param_1[8],param_1[9]);
    DAT_089d7334 = DAT_089d7330 + 0x10;
  }
  return;
}

