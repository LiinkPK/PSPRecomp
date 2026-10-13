/* Entry 0x0889FD38 | file offset 0x0009CD10 | FUN_0889fd38 | bytes 596 */

undefined4
FUN_0889fd38(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_120 [256];
  char local_20;
  undefined4 local_1c;
  
  if (DAT_089d6c54 == '\x01') {
    uVar1 = 0;
  }
  else {
    local_20 = param_4;
    local_1c = param_3;
    FUN_0889ff8c(0);
    DAT_089d6c60 = 0;
    FUN_089359a4(&DAT_09b4cef0,local_1c);
    DAT_09b4cf70 = param_2;
    DAT_09b4cf74 = param_1;
    DAT_09b4cf78 = param_5;
    if (param_4 == '\x01') {
      DAT_089d6c50 = 1;
      uVar1 = 1;
    }
    else {
      FUN_088a04a8(auStack_120,local_1c,param_5);
      DAT_089d6c3c = FUN_08862e08(auStack_120,param_5);
      if (DAT_089d6c3c < 0) {
        DAT_089d6c3c = -1;
        DAT_089d6c40 = 0xffffffff;
        uVar1 = 0;
      }
      else if ((param_5 == '\x01') && (iVar2 = sceNpDrmEdataSetupKey(DAT_089d6c3c), iVar2 < 0)) {
        FUN_0886300c(DAT_089d6c3c);
        DAT_089d6c3c = -1;
        DAT_089d6c40 = 0xffffffff;
        uVar1 = 0;
      }
      else {
        iVar2 = FUN_08862ee4(DAT_089d6c3c,DAT_089d6c38,0x18000,param_5);
        if (iVar2 == 0) {
          FUN_0886300c(DAT_089d6c3c);
          DAT_089d6c3c = -1;
          DAT_089d6c40 = 0xffffffff;
          uVar1 = 0;
        }
        else {
          DAT_089d6c50 = 4;
          DAT_089d6c40 = param_2;
          iVar2 = FUN_088a1380(DAT_089d6c88,param_2,DAT_089d6c38,0x18000,1);
          if ((iVar2 == 1) && (iVar2 = FUN_088a1400(DAT_089d6c88,DAT_089d6c40), iVar2 == 1)) {
            DAT_089d6c44 = param_1;
            FUN_088a14d0(param_1,DAT_089d6c88,DAT_089d6c40,0,0);
            uVar1 = 1;
          }
          else {
            FUN_0886300c(DAT_089d6c3c);
            DAT_089d6c3c = -1;
            DAT_089d6c40 = 0xffffffff;
            uVar1 = 0;
          }
        }
      }
    }
  }
  return uVar1;
}

