/* Entry 0x088AF134 | file offset 0x000AC10C | FUN_088af134 | bytes 360 */

undefined4 FUN_088af134(undefined4 *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*DAT_089d7280 == '\0') {
    iVar2 = FUN_088fea4c();
    if (iVar2 == 0) {
      *(undefined1 *)(param_1[3] + 0x2b7e) = 0;
      FUN_088fe9e8();
      FUN_088afbcc(param_1);
      iVar2 = param_1[3];
    }
    else {
      *(undefined1 *)(param_1[3] + 0x2b7e) = 1;
      iVar2 = param_1[3];
    }
    *(undefined1 *)(iVar2 + 0x2b7c) = 0;
    *(undefined1 *)(param_1[3] + 0x2b7d) = 0;
    cVar1 = DAT_089d7280[3];
    while (cVar1 != '\0') {
      FUN_08883f9c(DAT_089d69e0,1,0);
      cVar1 = DAT_089d7280[3];
    }
    if ((*(char *)(param_1[3] + 0x2b7e) == '\0') &&
       (iVar2 = sceUtilitySavedataInitStart(param_1[3] + 0x7e4), iVar2 != 0)) {
      uVar3 = 0;
    }
    else {
      FUN_088729c0();
      if ((param_1[1] & 1) == 0) {
        FUN_088b16fc();
      }
      *DAT_089d7280 = '\x01';
      *(char *)(param_1[3] + 0x2b54) = param_2;
      if (param_2 == '\0') {
        *(undefined4 *)(param_1[3] + 0xdd4) = 0;
      }
      uVar3 = FUN_08882274(DAT_089d69a8);
      uVar3 = FUN_088823c4(uVar3,0xffffffff,0x19a28,FUN_088afa70,"Update");
      *param_1 = uVar3;
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

