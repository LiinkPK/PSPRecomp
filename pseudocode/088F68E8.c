/* Entry 0x088F68E8 | file offset 0x000F38C0 | FUN_088f68e8 | bytes 272 */

void FUN_088f68e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,char param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  iVar1 = DAT_089d8364;
  if (param_6 == '\x01') {
    scePowerCheckWlanCoexistenceClock();
    FUN_08860e3c();
  }
  else {
    FUN_08860e78();
  }
  if (iVar1 != 0) {
    DAT_089d7f44 = param_4;
    FUN_08906e08(iVar1,param_1,param_2,param_3,param_4);
  }
  DAT_09b69b04 = 0xffffffff;
  iVar1 = 0;
  puVar4 = DAT_089d7f40;
  DAT_089d7f48 = param_5;
  do {
    *puVar4 = (char)iVar1;
    iVar2 = 1;
    puVar3 = puVar4 + 1;
    do {
      iVar2 = iVar2 + 1;
      *puVar3 = 0xff;
      puVar3 = puVar4 + iVar2;
    } while (iVar2 < 5);
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 5;
  } while (iVar1 < 2);
  FUN_088f715c();
  return;
}

