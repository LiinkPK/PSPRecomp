/* Entry 0x088C5988 | file offset 0x000C2960 | FUN_088c5988 | bytes 292 */

void FUN_088c5988(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = param_1;
    if (param_3 == '\x01') {
      DAT_089d76f8 = FUN_088820d8(param_2);
      FUN_08935524(DAT_089d76f8,param_1,param_2);
      iVar1 = DAT_089d76f8;
    }
    DAT_089d76f8 = iVar1;
    DAT_089d76fc = DAT_089d76f8 + 0x14;
    DAT_089d7700 = DAT_089d76fc + *(short *)(DAT_089d76f8 + 8) * 200;
    DAT_089d7704 = DAT_089d7700 + *(short *)(DAT_089d76f8 + 10) * 0x2c;
    DAT_089d7708 = DAT_089d7704 + *(short *)(DAT_089d76f8 + 0xc) * 0xc;
    DAT_089d770c = DAT_089d7708 + *(short *)(DAT_089d76f8 + 0xe) * 0x184;
    DAT_089d7710 = DAT_089d770c + *(short *)(DAT_089d76f8 + 0x10) * 0x14;
    DAT_089d7714 = param_3;
  }
  return;
}

